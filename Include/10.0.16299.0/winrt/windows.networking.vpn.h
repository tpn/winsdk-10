/* Header file automatically generated from windows.networking.vpn.idl */
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
#ifndef __windows2Enetworking2Evpn_h__
#define __windows2Enetworking2Evpn_h__
#ifndef __windows2Enetworking2Evpn_p_h__
#define __windows2Enetworking2Evpn_p_h__


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
#include "Windows.Security.Credentials.h"
#include "Windows.Security.Cryptography.Certificates.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnAppId;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId ABI::Windows::Networking::Vpn::IVpnAppId

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnAppIdFactory;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory ABI::Windows::Networking::Vpn::IVpnAppIdFactory

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnChannel;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel ABI::Windows::Networking::Vpn::IVpnChannel

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnChannel2;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 ABI::Windows::Networking::Vpn::IVpnChannel2

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnChannelActivityEventArgs;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs ABI::Windows::Networking::Vpn::IVpnChannelActivityEventArgs

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnChannelActivityStateChangedArgs;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs ABI::Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnChannelConfiguration;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration ABI::Windows::Networking::Vpn::IVpnChannelConfiguration

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnChannelConfiguration2;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2 ABI::Windows::Networking::Vpn::IVpnChannelConfiguration2

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnChannelStatics;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics ABI::Windows::Networking::Vpn::IVpnChannelStatics

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnCredential;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential ABI::Windows::Networking::Vpn::IVpnCredential

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnCustomCheckBox;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox ABI::Windows::Networking::Vpn::IVpnCustomCheckBox

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnCustomComboBox;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox ABI::Windows::Networking::Vpn::IVpnCustomComboBox

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnCustomEditBox;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox ABI::Windows::Networking::Vpn::IVpnCustomEditBox

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnCustomErrorBox;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox ABI::Windows::Networking::Vpn::IVpnCustomErrorBox

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnCustomPrompt;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt ABI::Windows::Networking::Vpn::IVpnCustomPrompt

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnCustomPromptBooleanInput;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput ABI::Windows::Networking::Vpn::IVpnCustomPromptBooleanInput

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnCustomPromptElement;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement ABI::Windows::Networking::Vpn::IVpnCustomPromptElement

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnCustomPromptOptionSelector;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector ABI::Windows::Networking::Vpn::IVpnCustomPromptOptionSelector

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnCustomPromptText;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText ABI::Windows::Networking::Vpn::IVpnCustomPromptText

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnCustomPromptTextInput;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput ABI::Windows::Networking::Vpn::IVpnCustomPromptTextInput

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnCustomTextBox;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox ABI::Windows::Networking::Vpn::IVpnCustomTextBox

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnDomainNameAssignment;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment ABI::Windows::Networking::Vpn::IVpnDomainNameAssignment

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnDomainNameInfo;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo ABI::Windows::Networking::Vpn::IVpnDomainNameInfo

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnDomainNameInfo2;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2 ABI::Windows::Networking::Vpn::IVpnDomainNameInfo2

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnDomainNameInfoFactory;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory ABI::Windows::Networking::Vpn::IVpnDomainNameInfoFactory

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnInterfaceId;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId ABI::Windows::Networking::Vpn::IVpnInterfaceId

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnInterfaceIdFactory;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory ABI::Windows::Networking::Vpn::IVpnInterfaceIdFactory

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnManagementAgent;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent ABI::Windows::Networking::Vpn::IVpnManagementAgent

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnNamespaceAssignment;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment ABI::Windows::Networking::Vpn::IVpnNamespaceAssignment

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnNamespaceInfo;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo ABI::Windows::Networking::Vpn::IVpnNamespaceInfo

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnNamespaceInfoFactory;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory ABI::Windows::Networking::Vpn::IVpnNamespaceInfoFactory

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnNativeProfile;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile ABI::Windows::Networking::Vpn::IVpnNativeProfile

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnNativeProfile2;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 ABI::Windows::Networking::Vpn::IVpnNativeProfile2

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnPacketBuffer;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer ABI::Windows::Networking::Vpn::IVpnPacketBuffer

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnPacketBuffer2;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2 ABI::Windows::Networking::Vpn::IVpnPacketBuffer2

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnPacketBufferFactory;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory ABI::Windows::Networking::Vpn::IVpnPacketBufferFactory

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnPacketBufferList;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList ABI::Windows::Networking::Vpn::IVpnPacketBufferList

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnPacketBufferList2;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 ABI::Windows::Networking::Vpn::IVpnPacketBufferList2

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnPickedCredential;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential ABI::Windows::Networking::Vpn::IVpnPickedCredential

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnPlugIn;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn ABI::Windows::Networking::Vpn::IVpnPlugIn

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnPlugInProfile;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile ABI::Windows::Networking::Vpn::IVpnPlugInProfile

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnPlugInProfile2;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 ABI::Windows::Networking::Vpn::IVpnPlugInProfile2

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnProfile;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile ABI::Windows::Networking::Vpn::IVpnProfile

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnRoute;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute ABI::Windows::Networking::Vpn::IVpnRoute

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnRouteAssignment;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment ABI::Windows::Networking::Vpn::IVpnRouteAssignment

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnRouteFactory;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory ABI::Windows::Networking::Vpn::IVpnRouteFactory

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnSystemHealth;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth ABI::Windows::Networking::Vpn::IVpnSystemHealth

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnTrafficFilter;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter ABI::Windows::Networking::Vpn::IVpnTrafficFilter

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnTrafficFilterAssignment;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment ABI::Windows::Networking::Vpn::IVpnTrafficFilterAssignment

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                interface IVpnTrafficFilterFactory;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory ABI::Windows::Networking::Vpn::IVpnTrafficFilterFactory

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_USE
#define DEF___FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6fc7cfe8-1882-5ba1-8e5e-4c5e3a4fa86d"))
IIterator<ABI::Windows::Networking::Vpn::IVpnCustomPrompt*> : IIterator_impl<ABI::Windows::Networking::Vpn::IVpnCustomPrompt*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.Vpn.IVpnCustomPrompt>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::Vpn::IVpnCustomPrompt*> __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_t;
#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Vpn::IVpnCustomPrompt*>
//#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Vpn::IVpnCustomPrompt*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_USE
#define DEF___FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8bac695c-70cb-54d6-8606-af6e3a25e3a1"))
IIterable<ABI::Windows::Networking::Vpn::IVpnCustomPrompt*> : IIterable_impl<ABI::Windows::Networking::Vpn::IVpnCustomPrompt*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.Vpn.IVpnCustomPrompt>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::Vpn::IVpnCustomPrompt*> __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_t;
#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Vpn::IVpnCustomPrompt*>
//#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Vpn::IVpnCustomPrompt*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_USE
#define DEF___FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ee23ff21-51ba-5cc4-9856-625c79c28080"))
IIterator<ABI::Windows::Networking::Vpn::IVpnCustomPromptElement*> : IIterator_impl<ABI::Windows::Networking::Vpn::IVpnCustomPromptElement*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.Vpn.IVpnCustomPromptElement>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::Vpn::IVpnCustomPromptElement*> __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_t;
#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Vpn::IVpnCustomPromptElement*>
//#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Vpn::IVpnCustomPromptElement*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_USE
#define DEF___FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("437d3693-00c4-50b4-989a-938f1016a230"))
IIterable<ABI::Windows::Networking::Vpn::IVpnCustomPromptElement*> : IIterable_impl<ABI::Windows::Networking::Vpn::IVpnCustomPromptElement*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.Vpn.IVpnCustomPromptElement>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::Vpn::IVpnCustomPromptElement*> __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_t;
#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Vpn::IVpnCustomPromptElement*>
//#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Vpn::IVpnCustomPromptElement*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_USE
#define DEF___FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("91ccb492-ec28-530b-b45e-c431744ca9b5"))
IIterator<ABI::Windows::Networking::Vpn::IVpnProfile*> : IIterator_impl<ABI::Windows::Networking::Vpn::IVpnProfile*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.Vpn.IVpnProfile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::Vpn::IVpnProfile*> __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_t;
#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Vpn::IVpnProfile*>
//#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Vpn::IVpnProfile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile_USE
#define DEF___FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("db35f6b1-f266-5c87-8862-9dd87d9df18f"))
IIterable<ABI::Windows::Networking::Vpn::IVpnProfile*> : IIterable_impl<ABI::Windows::Networking::Vpn::IVpnProfile*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.Vpn.IVpnProfile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::Vpn::IVpnProfile*> __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile_t;
#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Vpn::IVpnProfile*>
//#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Vpn::IVpnProfile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnAppId;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_USE
#define DEF___FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ec9298b0-8ca2-549c-bbe2-252823e70eef"))
IIterator<ABI::Windows::Networking::Vpn::VpnAppId*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnAppId*, ABI::Windows::Networking::Vpn::IVpnAppId*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.Vpn.VpnAppId>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::Vpn::VpnAppId*> __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_t;
#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Vpn::IVpnAppId*>
//#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Vpn::IVpnAppId*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId_USE
#define DEF___FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0e1e00aa-f93d-5dc7-9912-e07d1fa6bd67"))
IIterable<ABI::Windows::Networking::Vpn::VpnAppId*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnAppId*, ABI::Windows::Networking::Vpn::IVpnAppId*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.Vpn.VpnAppId>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::Vpn::VpnAppId*> __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId_t;
#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Vpn::IVpnAppId*>
//#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Vpn::IVpnAppId*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnDomainNameInfo;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_USE
#define DEF___FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("29f9008e-3e81-5c58-8a78-6be91abcc17d"))
IIterator<ABI::Windows::Networking::Vpn::VpnDomainNameInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnDomainNameInfo*, ABI::Windows::Networking::Vpn::IVpnDomainNameInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.Vpn.VpnDomainNameInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::Vpn::VpnDomainNameInfo*> __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_t;
#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Vpn::IVpnDomainNameInfo*>
//#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Vpn::IVpnDomainNameInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_USE
#define DEF___FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("33abe488-be1a-558a-a9cf-b5330ab49f50"))
IIterable<ABI::Windows::Networking::Vpn::VpnDomainNameInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnDomainNameInfo*, ABI::Windows::Networking::Vpn::IVpnDomainNameInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.Vpn.VpnDomainNameInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::Vpn::VpnDomainNameInfo*> __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_t;
#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Vpn::IVpnDomainNameInfo*>
//#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Vpn::IVpnDomainNameInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnNamespaceInfo;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_USE
#define DEF___FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("91e28244-7555-594d-b54d-9c87095e79a2"))
IIterator<ABI::Windows::Networking::Vpn::VpnNamespaceInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnNamespaceInfo*, ABI::Windows::Networking::Vpn::IVpnNamespaceInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.Vpn.VpnNamespaceInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::Vpn::VpnNamespaceInfo*> __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_t;
#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Vpn::IVpnNamespaceInfo*>
//#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Vpn::IVpnNamespaceInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_USE
#define DEF___FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("17781d03-ddcf-553f-aba8-d2e8155cb6b8"))
IIterable<ABI::Windows::Networking::Vpn::VpnNamespaceInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnNamespaceInfo*, ABI::Windows::Networking::Vpn::IVpnNamespaceInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.Vpn.VpnNamespaceInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::Vpn::VpnNamespaceInfo*> __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_t;
#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Vpn::IVpnNamespaceInfo*>
//#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Vpn::IVpnNamespaceInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnPacketBuffer;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_USE
#define DEF___FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("04c88ba5-05e9-53b2-8524-df458d2a9179"))
IIterator<ABI::Windows::Networking::Vpn::VpnPacketBuffer*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnPacketBuffer*, ABI::Windows::Networking::Vpn::IVpnPacketBuffer*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.Vpn.VpnPacketBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::Vpn::VpnPacketBuffer*> __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_t;
#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Vpn::IVpnPacketBuffer*>
//#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Vpn::IVpnPacketBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_USE
#define DEF___FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fa954f6e-30d7-50e0-9d43-dadb6c53e196"))
IIterable<ABI::Windows::Networking::Vpn::VpnPacketBuffer*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnPacketBuffer*, ABI::Windows::Networking::Vpn::IVpnPacketBuffer*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.Vpn.VpnPacketBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::Vpn::VpnPacketBuffer*> __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_t;
#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Vpn::IVpnPacketBuffer*>
//#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Vpn::IVpnPacketBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnRoute;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_USE
#define DEF___FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("44f813ac-052f-514b-a776-aad37a64fdc6"))
IIterator<ABI::Windows::Networking::Vpn::VpnRoute*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnRoute*, ABI::Windows::Networking::Vpn::IVpnRoute*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.Vpn.VpnRoute>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::Vpn::VpnRoute*> __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_t;
#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Vpn::IVpnRoute*>
//#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Vpn::IVpnRoute*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute_USE
#define DEF___FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bbf498d5-b9ef-55f1-97b1-77a06639e4e2"))
IIterable<ABI::Windows::Networking::Vpn::VpnRoute*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnRoute*, ABI::Windows::Networking::Vpn::IVpnRoute*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.Vpn.VpnRoute>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::Vpn::VpnRoute*> __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute_t;
#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Vpn::IVpnRoute*>
//#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Vpn::IVpnRoute*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnTrafficFilter;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_USE
#define DEF___FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8f37d5a0-5905-55bf-9c18-b9b3b544648b"))
IIterator<ABI::Windows::Networking::Vpn::VpnTrafficFilter*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnTrafficFilter*, ABI::Windows::Networking::Vpn::IVpnTrafficFilter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.Vpn.VpnTrafficFilter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::Vpn::VpnTrafficFilter*> __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_t;
#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Vpn::IVpnTrafficFilter*>
//#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Vpn::IVpnTrafficFilter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_USE
#define DEF___FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b6d4c853-77c9-52ca-9ce9-853add4554cf"))
IIterable<ABI::Windows::Networking::Vpn::VpnTrafficFilter*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnTrafficFilter*, ABI::Windows::Networking::Vpn::IVpnTrafficFilter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.Vpn.VpnTrafficFilter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::Vpn::VpnTrafficFilter*> __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_t;
#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Vpn::IVpnTrafficFilter*>
//#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Vpn::IVpnTrafficFilter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("804449c2-3bc1-5cfe-8468-3bbece4a5cd7"))
IVectorView<ABI::Windows::Networking::Vpn::IVpnCustomPrompt*> : IVectorView_impl<ABI::Windows::Networking::Vpn::IVpnCustomPrompt*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Vpn.IVpnCustomPrompt>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::Vpn::IVpnCustomPrompt*> __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_t;
#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnCustomPrompt*>
//#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnCustomPrompt*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("25eaf5eb-2f39-5b4d-bb6e-e652c7d00f6a"))
IVectorView<ABI::Windows::Networking::Vpn::IVpnCustomPromptElement*> : IVectorView_impl<ABI::Windows::Networking::Vpn::IVpnCustomPromptElement*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Vpn.IVpnCustomPromptElement>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::Vpn::IVpnCustomPromptElement*> __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_t;
#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnCustomPromptElement*>
//#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnCustomPromptElement*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f1dc8f7d-ca33-53fd-9d4c-40c51b5873ec"))
IVectorView<ABI::Windows::Networking::Vpn::IVpnProfile*> : IVectorView_impl<ABI::Windows::Networking::Vpn::IVpnProfile*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Vpn.IVpnProfile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::Vpn::IVpnProfile*> __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_t;
#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnProfile*>
//#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnProfile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("faecbc50-da9a-5102-8229-1dd24e873d1f"))
IVectorView<ABI::Windows::Networking::Vpn::VpnAppId*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnAppId*, ABI::Windows::Networking::Vpn::IVpnAppId*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Vpn.VpnAppId>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::Vpn::VpnAppId*> __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_t;
#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnAppId*>
//#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnAppId*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d4772f57-2328-5c25-9a11-246da17e39d5"))
IVectorView<ABI::Windows::Networking::Vpn::VpnDomainNameInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnDomainNameInfo*, ABI::Windows::Networking::Vpn::IVpnDomainNameInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Vpn.VpnDomainNameInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::Vpn::VpnDomainNameInfo*> __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_t;
#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnDomainNameInfo*>
//#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnDomainNameInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c6ed05a9-4dc7-507d-9c92-7c78c2ef4786"))
IVectorView<ABI::Windows::Networking::Vpn::VpnNamespaceInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnNamespaceInfo*, ABI::Windows::Networking::Vpn::IVpnNamespaceInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Vpn.VpnNamespaceInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::Vpn::VpnNamespaceInfo*> __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_t;
#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnNamespaceInfo*>
//#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnNamespaceInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("43701a74-e497-5559-a71b-11d0156fa839"))
IVectorView<ABI::Windows::Networking::Vpn::VpnRoute*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnRoute*, ABI::Windows::Networking::Vpn::IVpnRoute*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Vpn.VpnRoute>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::Vpn::VpnRoute*> __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_t;
#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnRoute*>
//#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnRoute*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("75de1766-ee22-56e9-be99-2714065349e5"))
IVectorView<ABI::Windows::Networking::Vpn::VpnTrafficFilter*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnTrafficFilter*, ABI::Windows::Networking::Vpn::IVpnTrafficFilter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Vpn.VpnTrafficFilter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::Vpn::VpnTrafficFilter*> __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_t;
#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnTrafficFilter*>
//#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnTrafficFilter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_USE
#define DEF___FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("89097d58-edb8-5ad4-abc5-603f21dd4b15"))
IVector<ABI::Windows::Networking::Vpn::VpnAppId*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnAppId*, ABI::Windows::Networking::Vpn::IVpnAppId*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Networking.Vpn.VpnAppId>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Networking::Vpn::VpnAppId*> __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_t;
#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Networking::Vpn::IVpnAppId*>
//#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Networking::Vpn::IVpnAppId*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_USE
#define DEF___FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8179b6f2-7273-5ca3-a81b-53e902ca209b"))
IVector<ABI::Windows::Networking::Vpn::VpnDomainNameInfo*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnDomainNameInfo*, ABI::Windows::Networking::Vpn::IVpnDomainNameInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Networking.Vpn.VpnDomainNameInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Networking::Vpn::VpnDomainNameInfo*> __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_t;
#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Networking::Vpn::IVpnDomainNameInfo*>
//#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Networking::Vpn::IVpnDomainNameInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_USE
#define DEF___FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("056bddf2-135d-542e-a322-36aa4ca0e60d"))
IVector<ABI::Windows::Networking::Vpn::VpnNamespaceInfo*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnNamespaceInfo*, ABI::Windows::Networking::Vpn::IVpnNamespaceInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Networking.Vpn.VpnNamespaceInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Networking::Vpn::VpnNamespaceInfo*> __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_t;
#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Networking::Vpn::IVpnNamespaceInfo*>
//#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Networking::Vpn::IVpnNamespaceInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_USE
#define DEF___FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5b026bd8-2cc5-5570-bde5-0db7c4331279"))
IVector<ABI::Windows::Networking::Vpn::VpnRoute*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnRoute*, ABI::Windows::Networking::Vpn::IVpnRoute*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Networking.Vpn.VpnRoute>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Networking::Vpn::VpnRoute*> __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_t;
#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Networking::Vpn::IVpnRoute*>
//#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Networking::Vpn::IVpnRoute*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_USE
#define DEF___FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2a5b9ad8-f005-5f69-ad81-300642e7c667"))
IVector<ABI::Windows::Networking::Vpn::VpnTrafficFilter*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnTrafficFilter*, ABI::Windows::Networking::Vpn::IVpnTrafficFilter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Networking.Vpn.VpnTrafficFilter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Networking::Vpn::VpnTrafficFilter*> __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_t;
#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Networking::Vpn::IVpnTrafficFilter*>
//#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Networking::Vpn::IVpnTrafficFilter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dac6dd72-a5d1-56d4-afc4-989f84dcb2b3"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Vpn.IVpnProfile>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnProfile*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnProfile*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("69d957be-045e-538f-98f6-1aa65cee244a"))
IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Vpn.IVpnProfile>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile*> __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnProfile*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Vpn::IVpnProfile*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnCredential;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1c9c4504-4b75-57ea-837d-5338358bb762"))
IAsyncOperationCompletedHandler<ABI::Windows::Networking::Vpn::VpnCredential*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnCredential*, ABI::Windows::Networking::Vpn::IVpnCredential*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Networking.Vpn.VpnCredential>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Networking::Vpn::VpnCredential*> __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::Vpn::IVpnCredential*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::Vpn::IVpnCredential*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential_USE
#define DEF___FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("216a6f97-dba1-5f71-a14b-2818ad3c4c69"))
IAsyncOperation<ABI::Windows::Networking::Vpn::VpnCredential*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnCredential*, ABI::Windows::Networking::Vpn::IVpnCredential*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Networking.Vpn.VpnCredential>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Networking::Vpn::VpnCredential*> __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential_t;
#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::Vpn::IVpnCredential*>
//#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::Vpn::IVpnCredential*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                enum VpnManagementErrorStatus : int;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("31229f8c-709d-5017-8629-57ef1289e616"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Networking::Vpn::VpnManagementErrorStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Networking::Vpn::VpnManagementErrorStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Networking.Vpn.VpnManagementErrorStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Networking::Vpn::VpnManagementErrorStatus> __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::Vpn::VpnManagementErrorStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::Vpn::VpnManagementErrorStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e99b86dc-6b65-5f23-9419-90b55852f283"))
IAsyncOperation<enum ABI::Windows::Networking::Vpn::VpnManagementErrorStatus> : IAsyncOperation_impl<enum ABI::Windows::Networking::Vpn::VpnManagementErrorStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Networking.Vpn.VpnManagementErrorStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Networking::Vpn::VpnManagementErrorStatus> __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_t;
#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::Vpn::VpnManagementErrorStatus>
//#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::Vpn::VpnManagementErrorStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_USE */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnChannel;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnChannelActivityEventArgs;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("39907949-a8cc-5ce5-9e0a-06e3b2d31570"))
ITypedEventHandler<ABI::Windows::Networking::Vpn::VpnChannel*,ABI::Windows::Networking::Vpn::VpnChannelActivityEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnChannel*, ABI::Windows::Networking::Vpn::IVpnChannel*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnChannelActivityEventArgs*, ABI::Windows::Networking::Vpn::IVpnChannelActivityEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Networking.Vpn.VpnChannel, Windows.Networking.Vpn.VpnChannelActivityEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Networking::Vpn::VpnChannel*,ABI::Windows::Networking::Vpn::VpnChannelActivityEventArgs*> __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs_t;
#define __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Vpn::IVpnChannel*,ABI::Windows::Networking::Vpn::IVpnChannelActivityEventArgs*>
//#define __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Vpn::IVpnChannel*,ABI::Windows::Networking::Vpn::IVpnChannelActivityEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnChannelActivityStateChangedArgs;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2cfcf1ba-bffc-5746-b868-2e45a46d2958"))
ITypedEventHandler<ABI::Windows::Networking::Vpn::VpnChannel*,ABI::Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnChannel*, ABI::Windows::Networking::Vpn::IVpnChannel*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs*, ABI::Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Networking.Vpn.VpnChannel, Windows.Networking.Vpn.VpnChannelActivityStateChangedArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Networking::Vpn::VpnChannel*,ABI::Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs*> __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs_t;
#define __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Vpn::IVpnChannel*,ABI::Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs*>
//#define __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Vpn::IVpnChannel*,ABI::Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CNetworking__CHostName_USE
#define DEF___FIVector_1_Windows__CNetworking__CHostName_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("90c71c29-a9b5-5267-a5ad-8b756736317c"))
IVector<ABI::Windows::Networking::HostName*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::HostName*, ABI::Windows::Networking::IHostName*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Networking.HostName>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Networking::HostName*> __FIVector_1_Windows__CNetworking__CHostName_t;
#define __FIVector_1_Windows__CNetworking__CHostName ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CNetworking__CHostName_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CNetworking__CHostName ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Networking::IHostName*>
//#define __FIVector_1_Windows__CNetworking__CHostName_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Networking::IHostName*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CNetworking__CHostName_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CFoundation__CUri_USE
#define DEF___FIVector_1_Windows__CFoundation__CUri_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0d82bd8d-fe62-5d67-a7b9-7886dd75bc4e"))
IVector<ABI::Windows::Foundation::Uri*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Foundation::Uri*, ABI::Windows::Foundation::IUriRuntimeClass*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Foundation.Uri>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Foundation::Uri*> __FIVector_1_Windows__CFoundation__CUri_t;
#define __FIVector_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CFoundation__CUri_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Foundation::IUriRuntimeClass*>
//#define __FIVector_1_Windows__CFoundation__CUri_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Foundation::IUriRuntimeClass*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CFoundation__CUri_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



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






namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                class Buffer;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

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





namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                
                typedef enum VpnAppIdType : int VpnAppIdType;
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                
                typedef enum VpnAuthenticationMethod : int VpnAuthenticationMethod;
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                
                typedef enum VpnChannelActivityEventType : int VpnChannelActivityEventType;
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                
                typedef enum VpnChannelRequestCredentialsOptions : unsigned int VpnChannelRequestCredentialsOptions;
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                
                typedef enum VpnCredentialType : int VpnCredentialType;
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                
                typedef enum VpnDataPathType : int VpnDataPathType;
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                
                typedef enum VpnDomainNameType : int VpnDomainNameType;
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                
                typedef enum VpnIPProtocol : int VpnIPProtocol;
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                
                typedef enum VpnManagementConnectionStatus : int VpnManagementConnectionStatus;
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                
                typedef enum VpnManagementErrorStatus : int VpnManagementErrorStatus;
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                
                typedef enum VpnNativeProtocolType : int VpnNativeProtocolType;
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                
                typedef enum VpnPacketBufferStatus : int VpnPacketBufferStatus;
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                
                typedef enum VpnRoutingPolicyType : int VpnRoutingPolicyType;
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */























































namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnChannelConfiguration;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnCustomCheckBox;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnCustomComboBox;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnCustomEditBox;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnCustomErrorBox;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnCustomPromptBooleanInput;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnCustomPromptOptionSelector;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnCustomPromptText;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnCustomPromptTextInput;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnCustomTextBox;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnDomainNameAssignment;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnInterfaceId;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnManagementAgent;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnNamespaceAssignment;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnNativeProfile;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnPacketBufferList;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnPickedCredential;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnPlugInProfile;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnRouteAssignment;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnSystemHealth;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                class VpnTrafficFilterAssignment;
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */










/*
 *
 * Struct Windows.Networking.Vpn.VpnAppIdType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [v1_enum, contract] */
                enum VpnAppIdType : int
                {
                    VpnAppIdType_PackageFamilyName = 0,
                    VpnAppIdType_FullyQualifiedBinaryName = 1,
                    VpnAppIdType_FilePath = 2,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnAuthenticationMethod
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [v1_enum, contract] */
                enum VpnAuthenticationMethod : int
                {
                    VpnAuthenticationMethod_Mschapv2 = 0,
                    VpnAuthenticationMethod_Eap = 1,
                    VpnAuthenticationMethod_Certificate = 2,
                    VpnAuthenticationMethod_PresharedKey = 3,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnChannelActivityEventType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [v1_enum, contract] */
                enum VpnChannelActivityEventType : int
                {
                    VpnChannelActivityEventType_Idle = 0,
                    VpnChannelActivityEventType_Active = 1,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnChannelRequestCredentialsOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [v1_enum, flags, contract] */
                enum VpnChannelRequestCredentialsOptions : unsigned int
                {
                    VpnChannelRequestCredentialsOptions_None = 0,
                    VpnChannelRequestCredentialsOptions_Retrying = 0x1,
                    VpnChannelRequestCredentialsOptions_UseForSingleSignIn = 0x2,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(VpnChannelRequestCredentialsOptions)
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnCredentialType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [v1_enum, contract] */
                enum VpnCredentialType : int
                {
                    VpnCredentialType_UsernamePassword = 0,
                    VpnCredentialType_UsernameOtpPin = 1,
                    VpnCredentialType_UsernamePasswordAndPin = 2,
                    VpnCredentialType_UsernamePasswordChange = 3,
                    VpnCredentialType_SmartCard = 4,
                    VpnCredentialType_ProtectedCertificate = 5,
                    VpnCredentialType_UnProtectedCertificate = 6,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnDataPathType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [v1_enum, contract] */
                enum VpnDataPathType : int
                {
                    VpnDataPathType_Send = 0,
                    VpnDataPathType_Receive = 1,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnDomainNameType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [v1_enum, contract] */
                enum VpnDomainNameType : int
                {
                    VpnDomainNameType_Suffix = 0,
                    VpnDomainNameType_FullyQualified = 1,
                    VpnDomainNameType_Reserved = 65535,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnIPProtocol
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [v1_enum, contract] */
                enum VpnIPProtocol : int
                {
                    VpnIPProtocol_None = 0,
                    VpnIPProtocol_Tcp = 6,
                    VpnIPProtocol_Udp = 17,
                    VpnIPProtocol_Icmp = 1,
                    VpnIPProtocol_Ipv6Icmp = 58,
                    VpnIPProtocol_Igmp = 2,
                    VpnIPProtocol_Pgm = 113,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnManagementConnectionStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [v1_enum, contract] */
                enum VpnManagementConnectionStatus : int
                {
                    VpnManagementConnectionStatus_Disconnected = 0,
                    VpnManagementConnectionStatus_Disconnecting = 1,
                    VpnManagementConnectionStatus_Connected = 2,
                    VpnManagementConnectionStatus_Connecting = 3,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnManagementErrorStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [v1_enum, contract] */
                enum VpnManagementErrorStatus : int
                {
                    VpnManagementErrorStatus_Ok = 0,
                    VpnManagementErrorStatus_Other = 1,
                    VpnManagementErrorStatus_InvalidXmlSyntax = 2,
                    VpnManagementErrorStatus_ProfileNameTooLong = 3,
                    VpnManagementErrorStatus_ProfileInvalidAppId = 4,
                    VpnManagementErrorStatus_AccessDenied = 5,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    VpnManagementErrorStatus_CannotFindProfile = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    VpnManagementErrorStatus_AlreadyDisconnecting = 7,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    VpnManagementErrorStatus_AlreadyConnected = 8,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    VpnManagementErrorStatus_GeneralAuthenticationFailure = 9,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    VpnManagementErrorStatus_EapFailure = 10,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    VpnManagementErrorStatus_SmartCardFailure = 11,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    VpnManagementErrorStatus_CertificateFailure = 12,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    VpnManagementErrorStatus_ServerConfiguration = 13,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    VpnManagementErrorStatus_NoConnection = 14,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    VpnManagementErrorStatus_ServerConnection = 15,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    VpnManagementErrorStatus_UserNamePassword = 16,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    VpnManagementErrorStatus_DnsNotResolvable = 17,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    VpnManagementErrorStatus_InvalidIP = 18,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                };
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnNativeProtocolType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [v1_enum, contract] */
                enum VpnNativeProtocolType : int
                {
                    VpnNativeProtocolType_Pptp = 0,
                    VpnNativeProtocolType_L2tp = 1,
                    VpnNativeProtocolType_IpsecIkev2 = 2,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnPacketBufferStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [v1_enum, contract] */
                enum VpnPacketBufferStatus : int
                {
                    VpnPacketBufferStatus_Ok = 0,
                    VpnPacketBufferStatus_InvalidBufferSize = 1,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnRoutingPolicyType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [v1_enum, contract] */
                enum VpnRoutingPolicyType : int
                {
                    VpnRoutingPolicyType_SplitRouting = 0,
                    VpnRoutingPolicyType_ForceAllTrafficOverVpn = 1,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnAppId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnAppId
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnAppId[] = L"Windows.Networking.Vpn.IVpnAppId";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("7B06A635-5C58-41D9-94A7-BFBCF1D8CA54"), exclusiveto, contract] */
                MIDL_INTERFACE("7B06A635-5C58-41D9-94A7-BFBCF1D8CA54")
                IVpnAppId : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Vpn::VpnAppIdType * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Type(
                        /* [in] */ABI::Windows::Networking::Vpn::VpnAppIdType value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnAppId=_uuidof(IVpnAppId);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnAppIdFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnAppId
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnAppIdFactory[] = L"Windows.Networking.Vpn.IVpnAppIdFactory";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("46ADFD2A-0AAB-4FDB-821D-D3DDC919788B"), exclusiveto, contract] */
                MIDL_INTERFACE("46ADFD2A-0AAB-4FDB-821D-D3DDC919788B")
                IVpnAppIdFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */ABI::Windows::Networking::Vpn::VpnAppIdType type,
                        /* [in] */__RPC__in HSTRING value,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnAppId * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnAppIdFactory=_uuidof(IVpnAppIdFactory);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnChannel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnChannel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannel[] = L"Windows.Networking.Vpn.IVpnChannel";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("4AC78D07-D1A8-4303-A091-C8D2E0915BC3"), exclusiveto, contract] */
                MIDL_INTERFACE("4AC78D07-D1A8-4303-A091-C8D2E0915BC3")
                IVpnChannel : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE AssociateTransport(
                        /* [in] */__RPC__in_opt IInspectable * mainOuterTunnelTransport,
                        /* [in] */__RPC__in_opt IInspectable * optionalOuterTunnelTransport
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE Start(
                        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIPv4list,
                        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIPv6list,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnInterfaceId * vpnInterfaceId,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnRouteAssignment * routeScope,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnNamespaceAssignment * namespaceScope,
                        /* [in] */UINT32 mtuSize,
                        /* [in] */UINT32 maxFrameSize,
                        /* [in] */boolean optimizeForLowCostNetwork,
                        /* [in] */__RPC__in_opt IInspectable * mainOuterTunnelTransport,
                        /* [in] */__RPC__in_opt IInspectable * optionalOuterTunnelTransport
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestCredentials(
                        /* [in] */ABI::Windows::Networking::Vpn::VpnCredentialType credType,
                        /* [in] */boolean isRetry,
                        /* [in] */boolean isSingleSignOnCredential,
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * certificate,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnPickedCredential * * credential
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestVpnPacketBuffer(
                        /* [in] */ABI::Windows::Networking::Vpn::VpnDataPathType type,
                        /* [out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnPacketBuffer * * vpnPacketBuffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LogDiagnosticMessage(
                        /* [in] */__RPC__in HSTRING message
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Configuration(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnChannelConfiguration * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ActivityChange(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ActivityChange(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PlugInContext(
                        /* [in] */__RPC__in_opt IInspectable * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PlugInContext(
                        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SystemHealth(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnSystemHealth * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestCustomPrompt(
                        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * customPrompt
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetErrorMessage(
                        /* [in] */__RPC__in HSTRING message
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetAllowedSslTlsVersions(
                        /* [in] */__RPC__in_opt IInspectable * tunnelTransport,
                        /* [in] */boolean useTls12
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnChannel=_uuidof(IVpnChannel);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnChannel2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnChannel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannel2[] = L"Windows.Networking.Vpn.IVpnChannel2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("2255D165-993B-4629-AD60-F1C3F3537F50"), exclusiveto, contract] */
                MIDL_INTERFACE("2255D165-993B-4629-AD60-F1C3F3537F50")
                IVpnChannel2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE StartWithMainTransport(
                        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIPv4list,
                        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIPv6list,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnInterfaceId * vpnInterfaceId,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnRouteAssignment * assignedRoutes,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnDomainNameAssignment * assignedDomainName,
                        /* [in] */UINT32 mtuSize,
                        /* [in] */UINT32 maxFrameSize,
                        /* [in] */boolean Reserved,
                        /* [in] */__RPC__in_opt IInspectable * mainOuterTunnelTransport
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE StartExistingTransports(
                        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIPv4list,
                        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIPv6list,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnInterfaceId * vpnInterfaceId,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnRouteAssignment * assignedRoutes,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnDomainNameAssignment * assignedDomainName,
                        /* [in] */UINT32 mtuSize,
                        /* [in] */UINT32 maxFrameSize,
                        /* [in] */boolean Reserved
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ActivityStateChange(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ActivityStateChange(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetVpnSendPacketBuffer(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnPacketBuffer * * vpnSendPacketBuffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetVpnReceivePacketBuffer(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnPacketBuffer * * vpnReceivePacketBuffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestCustomPromptAsync(
                        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * customPromptElement,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestCredentialsWithCertificateAsync(
                        /* [in] */ABI::Windows::Networking::Vpn::VpnCredentialType credType,
                        /* [in] */UINT32 credOptions,
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * certificate,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * * credential
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestCredentialsWithOptionsAsync(
                        /* [in] */ABI::Windows::Networking::Vpn::VpnCredentialType credType,
                        /* [in] */UINT32 credOptions,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * * credential
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestCredentialsSimpleAsync(
                        /* [in] */ABI::Windows::Networking::Vpn::VpnCredentialType credType,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * * credential
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TerminateConnection(
                        /* [in] */__RPC__in HSTRING message
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE StartWithTrafficFilter(
                        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIpv4List,
                        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIpv6List,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnInterfaceId * vpnInterfaceId,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnRouteAssignment * assignedRoutes,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnDomainNameAssignment * assignedNamespace,
                        /* [in] */UINT32 mtuSize,
                        /* [in] */UINT32 maxFrameSize,
                        /* [in] */boolean reserved,
                        /* [in] */__RPC__in_opt IInspectable * mainOuterTunnelTransport,
                        /* [in] */__RPC__in_opt IInspectable * optionalOuterTunnelTransport,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnTrafficFilterAssignment * assignedTrafficFilters
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnChannel2=_uuidof(IVpnChannel2);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnChannelActivityEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnChannelActivityEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannelActivityEventArgs[] = L"Windows.Networking.Vpn.IVpnChannelActivityEventArgs";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("A36C88F2-AFDC-4775-855D-D4AC0A35FC55"), exclusiveto, contract] */
                MIDL_INTERFACE("A36C88F2-AFDC-4775-855D-D4AC0A35FC55")
                IVpnChannelActivityEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Vpn::VpnChannelActivityEventType * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnChannelActivityEventArgs=_uuidof(IVpnChannelActivityEventArgs);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnChannelActivityStateChangedArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnChannelActivityStateChangedArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannelActivityStateChangedArgs[] = L"Windows.Networking.Vpn.IVpnChannelActivityStateChangedArgs";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("3D750565-FDC0-4BBE-A23B-45FFFC6D97A1"), exclusiveto, contract] */
                MIDL_INTERFACE("3D750565-FDC0-4BBE-A23B-45FFFC6D97A1")
                IVpnChannelActivityStateChangedArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivityState(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Vpn::VpnChannelActivityEventType * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnChannelActivityStateChangedArgs=_uuidof(IVpnChannelActivityStateChangedArgs);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnChannelConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnChannelConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannelConfiguration[] = L"Windows.Networking.Vpn.IVpnChannelConfiguration";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("0E2DDCA2-2012-4FE4-B179-8C652C6D107E"), exclusiveto, contract] */
                MIDL_INTERFACE("0E2DDCA2-2012-4FE4-B179-8C652C6D107E")
                IVpnChannelConfiguration : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerServiceName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerHostNameList(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CHostName * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CustomField(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnChannelConfiguration=_uuidof(IVpnChannelConfiguration);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnChannelConfiguration2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnChannelConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannelConfiguration2[] = L"Windows.Networking.Vpn.IVpnChannelConfiguration2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("F30B574C-7824-471C-A118-63DBC93AE4C7"), exclusiveto, contract] */
                MIDL_INTERFACE("F30B574C-7824-471C-A118-63DBC93AE4C7")
                IVpnChannelConfiguration2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerUris(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CUri * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnChannelConfiguration2=_uuidof(IVpnChannelConfiguration2);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnChannelStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannelStatics[] = L"Windows.Networking.Vpn.IVpnChannelStatics";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("88EB062D-E818-4FFD-98A6-363E3736C95D"), contract] */
                MIDL_INTERFACE("88EB062D-E818-4FFD-98A6-363E3736C95D")
                IVpnChannelStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE ProcessEventAsync(
                        /* [in] */__RPC__in_opt IInspectable * thirdPartyPlugIn,
                        /* [in] */__RPC__in_opt IInspectable * event
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnChannelStatics=_uuidof(IVpnChannelStatics);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCredential
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCredential[] = L"Windows.Networking.Vpn.IVpnCredential";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("B7E78AF3-A46D-404B-8729-1832522853AC"), contract] */
                MIDL_INTERFACE("B7E78AF3-A46D-404B-8729-1832522853AC")
                IVpnCredential : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PasskeyCredential(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IPasswordCredential * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CertificateCredential(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AdditionalPin(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OldPasswordCredential(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IPasswordCredential * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnCredential=_uuidof(IVpnCredential);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomCheckBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnCustomCheckBox
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnCustomPrompt
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomCheckBox[] = L"Windows.Networking.Vpn.IVpnCustomCheckBox";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("43878753-03C5-4E61-93D7-A957714C4282"), exclusiveto, contract] */
                MIDL_INTERFACE("43878753-03C5-4E61-93D7-A957714C4282")
                IVpnCustomCheckBox : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InitialCheckState(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InitialCheckState(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Checked(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnCustomCheckBox=_uuidof(IVpnCustomCheckBox);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomComboBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnCustomComboBox
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnCustomPrompt
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomComboBox[] = L"Windows.Networking.Vpn.IVpnCustomComboBox";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("9A24158E-DBA1-4C6F-8270-DCF3C9761C4C"), exclusiveto, contract] */
                MIDL_INTERFACE("9A24158E-DBA1-4C6F-8270-DCF3C9761C4C")
                IVpnCustomComboBox : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OptionsText(
                        /* [in] */__RPC__in_opt __FIVectorView_1_HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OptionsText(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Selected(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnCustomComboBox=_uuidof(IVpnCustomComboBox);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomEditBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnCustomEditBox
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnCustomPrompt
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomEditBox[] = L"Windows.Networking.Vpn.IVpnCustomEditBox";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("3002D9A0-CFBF-4C0B-8F3C-66F503C20B39"), exclusiveto, contract] */
                MIDL_INTERFACE("3002D9A0-CFBF-4C0B-8F3C-66F503C20B39")
                IVpnCustomEditBox : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DefaultText(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultText(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NoEcho(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NoEcho(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Text(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnCustomEditBox=_uuidof(IVpnCustomEditBox);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomErrorBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnCustomErrorBox
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnCustomPrompt
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomErrorBox[] = L"Windows.Networking.Vpn.IVpnCustomErrorBox";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("9EC4EFB2-C942-42AF-B223-588B48328721"), exclusiveto, contract] */
                MIDL_INTERFACE("9EC4EFB2-C942-42AF-B223-588B48328721")
                IVpnCustomErrorBox : IInspectable
                {
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnCustomErrorBox=_uuidof(IVpnCustomErrorBox);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomPrompt
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomPrompt[] = L"Windows.Networking.Vpn.IVpnCustomPrompt";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("9B2EBE7B-87D5-433C-B4F6-EEE6AA68A244"), contract] */
                MIDL_INTERFACE("9B2EBE7B-87D5-433C-B4F6-EEE6AA68A244")
                IVpnCustomPrompt : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Label(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Label(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Compulsory(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Compulsory(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Bordered(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bordered(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnCustomPrompt=_uuidof(IVpnCustomPrompt);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomPromptBooleanInput
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnCustomPromptBooleanInput
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnCustomPromptElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomPromptBooleanInput[] = L"Windows.Networking.Vpn.IVpnCustomPromptBooleanInput";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("C4C9A69E-FF47-4527-9F27-A49292019979"), exclusiveto, contract] */
                MIDL_INTERFACE("C4C9A69E-FF47-4527-9F27-A49292019979")
                IVpnCustomPromptBooleanInput : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InitialValue(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InitialValue(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnCustomPromptBooleanInput=_uuidof(IVpnCustomPromptBooleanInput);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomPromptElement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomPromptElement[] = L"Windows.Networking.Vpn.IVpnCustomPromptElement";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("73BD5638-6F04-404D-93DD-50A44924A38B"), contract] */
                MIDL_INTERFACE("73BD5638-6F04-404D-93DD-50A44924A38B")
                IVpnCustomPromptElement : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Compulsory(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Compulsory(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Emphasized(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Emphasized(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnCustomPromptElement=_uuidof(IVpnCustomPromptElement);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomPromptOptionSelector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnCustomPromptOptionSelector
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnCustomPromptElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomPromptOptionSelector[] = L"Windows.Networking.Vpn.IVpnCustomPromptOptionSelector";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("3B8F34D9-8EC1-4E95-9A4E-7BA64D38F330"), exclusiveto, contract] */
                MIDL_INTERFACE("3B8F34D9-8EC1-4E95-9A4E-7BA64D38F330")
                IVpnCustomPromptOptionSelector : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Options(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedIndex(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnCustomPromptOptionSelector=_uuidof(IVpnCustomPromptOptionSelector);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomPromptText
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnCustomPromptText
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnCustomPromptElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomPromptText[] = L"Windows.Networking.Vpn.IVpnCustomPromptText";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("3BC8BDEE-3A42-49A3-ABDD-07B2EDEA752D"), exclusiveto, contract] */
                MIDL_INTERFACE("3BC8BDEE-3A42-49A3-ABDD-07B2EDEA752D")
                IVpnCustomPromptText : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Text(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Text(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnCustomPromptText=_uuidof(IVpnCustomPromptText);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomPromptTextInput
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnCustomPromptTextInput
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnCustomPromptElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomPromptTextInput[] = L"Windows.Networking.Vpn.IVpnCustomPromptTextInput";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("C9DA9C75-913C-47D5-88BA-48FC48930235"), exclusiveto, contract] */
                MIDL_INTERFACE("C9DA9C75-913C-47D5-88BA-48FC48930235")
                IVpnCustomPromptTextInput : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PlaceholderText(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PlaceholderText(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsTextHidden(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTextHidden(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Text(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnCustomPromptTextInput=_uuidof(IVpnCustomPromptTextInput);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomTextBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnCustomTextBox
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnCustomPrompt
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomTextBox[] = L"Windows.Networking.Vpn.IVpnCustomTextBox";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("DAA4C3CA-8F23-4D36-91F1-76D937827942"), exclusiveto, contract] */
                MIDL_INTERFACE("DAA4C3CA-8F23-4D36-91F1-76D937827942")
                IVpnCustomTextBox : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayText(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayText(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnCustomTextBox=_uuidof(IVpnCustomTextBox);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnDomainNameAssignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnDomainNameAssignment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnDomainNameAssignment[] = L"Windows.Networking.Vpn.IVpnDomainNameAssignment";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("4135B141-CCDB-49B5-9401-039A8AE767E9"), exclusiveto, contract] */
                MIDL_INTERFACE("4135B141-CCDB-49B5-9401-039A8AE767E9")
                IVpnDomainNameAssignment : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DomainNameList(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProxyAutoConfigurationUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProxyAutoConfigurationUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnDomainNameAssignment=_uuidof(IVpnDomainNameAssignment);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnDomainNameInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnDomainNameInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnDomainNameInfo[] = L"Windows.Networking.Vpn.IVpnDomainNameInfo";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("AD2EB82F-EA8E-4F7A-843E-1A87E32E1B9A"), exclusiveto, contract] */
                MIDL_INTERFACE("AD2EB82F-EA8E-4F7A-843E-1A87E32E1B9A")
                IVpnDomainNameInfo : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DomainName(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DomainName(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DomainNameType(
                        /* [in] */ABI::Windows::Networking::Vpn::VpnDomainNameType value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DomainNameType(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Vpn::VpnDomainNameType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DnsServers(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CHostName * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WebProxyServers(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CHostName * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnDomainNameInfo=_uuidof(IVpnDomainNameInfo);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnDomainNameInfo2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnDomainNameInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnDomainNameInfo2[] = L"Windows.Networking.Vpn.IVpnDomainNameInfo2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("AB871151-6C53-4828-9883-D886DE104407"), exclusiveto, contract] */
                MIDL_INTERFACE("AB871151-6C53-4828-9883-D886DE104407")
                IVpnDomainNameInfo2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WebProxyUris(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CFoundation__CUri * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnDomainNameInfo2=_uuidof(IVpnDomainNameInfo2);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnDomainNameInfoFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnDomainNameInfoFactory[] = L"Windows.Networking.Vpn.IVpnDomainNameInfoFactory";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("2507BB75-028F-4688-8D3A-C4531DF37DA8"), contract] */
                MIDL_INTERFACE("2507BB75-028F-4688-8D3A-C4531DF37DA8")
                IVpnDomainNameInfoFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateVpnDomainNameInfo(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */ABI::Windows::Networking::Vpn::VpnDomainNameType nameType,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CNetworking__CHostName * dnsServerList,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CNetworking__CHostName * proxyServerList,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnDomainNameInfo * * domainNameInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnDomainNameInfoFactory=_uuidof(IVpnDomainNameInfoFactory);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnInterfaceId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnInterfaceId
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnInterfaceId[] = L"Windows.Networking.Vpn.IVpnInterfaceId";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("9E2DDCA2-1712-4CE4-B179-8C652C6D1011"), exclusiveto, contract] */
                MIDL_INTERFACE("9E2DDCA2-1712-4CE4-B179-8C652C6D1011")
                IVpnInterfaceId : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetAddressInfo(
                        /* [out] */__RPC__out UINT32 * __idSize,
                        /* [size_is(, *(__idSize)), out] */__RPC__deref_out_ecount_full_opt(*(__idSize)) BYTE * * id
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnInterfaceId=_uuidof(IVpnInterfaceId);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnInterfaceIdFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnInterfaceIdFactory[] = L"Windows.Networking.Vpn.IVpnInterfaceIdFactory";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("9E2DDCA2-1712-4CE4-B179-8C652C6D1000"), contract] */
                MIDL_INTERFACE("9E2DDCA2-1712-4CE4-B179-8C652C6D1000")
                IVpnInterfaceIdFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateVpnInterfaceId(
                        /* [in, range(0, 8)] */__RPC__in_range(0,0x8) UINT32 __addressSize,
                        /* [size_is(__addressSize), in] */__RPC__in_ecount_full(__addressSize) BYTE * address,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnInterfaceId * * vpnInterfaceId
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnInterfaceIdFactory=_uuidof(IVpnInterfaceIdFactory);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnManagementAgent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnManagementAgent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnManagementAgent[] = L"Windows.Networking.Vpn.IVpnManagementAgent";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("193696CD-A5C4-4ABE-852B-785BE4CB3E34"), exclusiveto, contract] */
                MIDL_INTERFACE("193696CD-A5C4-4ABE-852B-785BE4CB3E34")
                IVpnManagementAgent : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE AddProfileFromXmlAsync(
                        /* [in] */__RPC__in HSTRING xml,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE AddProfileFromObjectAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnProfile * profile,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UpdateProfileFromXmlAsync(
                        /* [in] */__RPC__in HSTRING xml,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UpdateProfileFromObjectAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnProfile * profile,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetProfilesAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DeleteProfileAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnProfile * profile,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ConnectProfileAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnProfile * profile,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ConnectProfileWithPasswordCredentialAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnProfile * profile,
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential * passwordCredential,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DisconnectProfileAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnProfile * profile,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnManagementAgent=_uuidof(IVpnManagementAgent);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnNamespaceAssignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnNamespaceAssignment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnNamespaceAssignment[] = L"Windows.Networking.Vpn.IVpnNamespaceAssignment";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("D7F7DB18-307D-4C0E-BD62-8FA270BBADD6"), exclusiveto, contract] */
                MIDL_INTERFACE("D7F7DB18-307D-4C0E-BD62-8FA270BBADD6")
                IVpnNamespaceAssignment : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NamespaceList(
                        /* [in] */__RPC__in_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NamespaceList(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProxyAutoConfigUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProxyAutoConfigUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnNamespaceAssignment=_uuidof(IVpnNamespaceAssignment);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnNamespaceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnNamespaceInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnNamespaceInfo[] = L"Windows.Networking.Vpn.IVpnNamespaceInfo";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("30EDFB43-444F-44C5-8167-A35A91F1AF94"), exclusiveto, contract] */
                MIDL_INTERFACE("30EDFB43-444F-44C5-8167-A35A91F1AF94")
                IVpnNamespaceInfo : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Namespace(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Namespace(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DnsServers(
                        /* [in] */__RPC__in_opt __FIVector_1_Windows__CNetworking__CHostName * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DnsServers(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CHostName * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_WebProxyServers(
                        /* [in] */__RPC__in_opt __FIVector_1_Windows__CNetworking__CHostName * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WebProxyServers(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CHostName * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnNamespaceInfo=_uuidof(IVpnNamespaceInfo);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnNamespaceInfoFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnNamespaceInfoFactory[] = L"Windows.Networking.Vpn.IVpnNamespaceInfoFactory";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("CB3E951A-B0CE-442B-ACBB-5F99B202C31C"), contract] */
                MIDL_INTERFACE("CB3E951A-B0CE-442B-ACBB-5F99B202C31C")
                IVpnNamespaceInfoFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateVpnNamespaceInfo(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */__RPC__in_opt __FIVector_1_Windows__CNetworking__CHostName * dnsServerList,
                        /* [in] */__RPC__in_opt __FIVector_1_Windows__CNetworking__CHostName * proxyServerList,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnNamespaceInfo * * namespaceInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnNamespaceInfoFactory=_uuidof(IVpnNamespaceInfoFactory);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnNativeProfile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnNativeProfile
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnNativeProfile[] = L"Windows.Networking.Vpn.IVpnNativeProfile";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("A4AEE29E-6417-4333-9842-F0A66DB69802"), exclusiveto, contract] */
                MIDL_INTERFACE("A4AEE29E-6417-4333-9842-F0A66DB69802")
                IVpnNativeProfile : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Servers(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoutingPolicyType(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Vpn::VpnRoutingPolicyType * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RoutingPolicyType(
                        /* [in] */ABI::Windows::Networking::Vpn::VpnRoutingPolicyType value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NativeProtocolType(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Vpn::VpnNativeProtocolType * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NativeProtocolType(
                        /* [in] */ABI::Windows::Networking::Vpn::VpnNativeProtocolType value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserAuthenticationMethod(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Vpn::VpnAuthenticationMethod * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UserAuthenticationMethod(
                        /* [in] */ABI::Windows::Networking::Vpn::VpnAuthenticationMethod value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TunnelAuthenticationMethod(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Vpn::VpnAuthenticationMethod * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TunnelAuthenticationMethod(
                        /* [in] */ABI::Windows::Networking::Vpn::VpnAuthenticationMethod value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EapConfiguration(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * Value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_EapConfiguration(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnNativeProfile=_uuidof(IVpnNativeProfile);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnNativeProfile2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnNativeProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnNativeProfile2[] = L"Windows.Networking.Vpn.IVpnNativeProfile2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("0FEC2467-CDB5-4AC7-B5A3-0AFB5EC47682"), exclusiveto, contract] */
                MIDL_INTERFACE("0FEC2467-CDB5-4AC7-B5A3-0AFB5EC47682")
                IVpnNativeProfile2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequireVpnClientAppUI(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RequireVpnClientAppUI(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConnectionStatus(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Vpn::VpnManagementConnectionStatus * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnNativeProfile2=_uuidof(IVpnNativeProfile2);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnPacketBuffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnPacketBuffer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPacketBuffer[] = L"Windows.Networking.Vpn.IVpnPacketBuffer";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("C2F891FC-4D5C-4A63-B70D-4E307EACCE55"), exclusiveto, contract] */
                MIDL_INTERFACE("C2F891FC-4D5C-4A63-B70D-4E307EACCE55")
                IVpnPacketBuffer : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Buffer(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Status(
                        /* [in] */ABI::Windows::Networking::Vpn::VpnPacketBufferStatus value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Vpn::VpnPacketBufferStatus * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TransportAffinity(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TransportAffinity(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnPacketBuffer=_uuidof(IVpnPacketBuffer);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnPacketBuffer2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnPacketBuffer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPacketBuffer2[] = L"Windows.Networking.Vpn.IVpnPacketBuffer2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("665E91F0-8805-4BF5-A619-2E84882E6B4F"), exclusiveto, contract] */
                MIDL_INTERFACE("665E91F0-8805-4BF5-A619-2E84882E6B4F")
                IVpnPacketBuffer2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppId(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnAppId * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnPacketBuffer2=_uuidof(IVpnPacketBuffer2);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnPacketBufferFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPacketBufferFactory[] = L"Windows.Networking.Vpn.IVpnPacketBufferFactory";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("9E2DDCA2-1712-4CE4-B179-8C652C6D9999"), contract] */
                MIDL_INTERFACE("9E2DDCA2-1712-4CE4-B179-8C652C6D9999")
                IVpnPacketBufferFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateVpnPacketBuffer(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnPacketBuffer * parentBuffer,
                        /* [in] */UINT32 offset,
                        /* [in] */UINT32 length,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnPacketBuffer * * vpnPacketBuffer
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnPacketBufferFactory=_uuidof(IVpnPacketBufferFactory);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnPacketBufferList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnPacketBufferList
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IIterable_1_Windows.Networking.Vpn.VpnPacketBuffer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPacketBufferList[] = L"Windows.Networking.Vpn.IVpnPacketBufferList";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("C2F891FC-4D5C-4A63-B70D-4E307EACCE77"), exclusiveto, contract] */
                MIDL_INTERFACE("C2F891FC-4D5C-4A63-B70D-4E307EACCE77")
                IVpnPacketBufferList : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Append(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnPacketBuffer * nextVpnPacketBuffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE AddAtBegin(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnPacketBuffer * nextVpnPacketBuffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RemoveAtEnd(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnPacketBuffer * * nextVpnPacketBuffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RemoveAtBegin(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnPacketBuffer * * nextVpnPacketBuffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Clear(void) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Status(
                        /* [in] */ABI::Windows::Networking::Vpn::VpnPacketBufferStatus value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Vpn::VpnPacketBufferStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Size(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnPacketBufferList=_uuidof(IVpnPacketBufferList);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnPacketBufferList2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnPacketBufferList
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IIterable_1_Windows.Networking.Vpn.VpnPacketBuffer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPacketBufferList2[] = L"Windows.Networking.Vpn.IVpnPacketBufferList2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("3E7ACFE5-EA1E-482A-8D98-C065F57D89EA"), exclusiveto, contract] */
                MIDL_INTERFACE("3E7ACFE5-EA1E-482A-8D98-C065F57D89EA")
                IVpnPacketBufferList2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE AddLeadingPacket(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnPacketBuffer * nextVpnPacketBuffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RemoveLeadingPacket(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnPacketBuffer * * nextVpnPacketBuffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE AddTrailingPacket(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnPacketBuffer * nextVpnPacketBuffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RemoveTrailingPacket(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnPacketBuffer * * nextVpnPacketBuffer
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnPacketBufferList2=_uuidof(IVpnPacketBufferList2);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnPickedCredential
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnPickedCredential
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPickedCredential[] = L"Windows.Networking.Vpn.IVpnPickedCredential";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("9A793AC7-8854-4E52-AD97-24DD9A842BCE"), exclusiveto, contract] */
                MIDL_INTERFACE("9A793AC7-8854-4E52-AD97-24DD9A842BCE")
                IVpnPickedCredential : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PasskeyCredential(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IPasswordCredential * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AdditionalPin(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OldPasswordCredential(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IPasswordCredential * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnPickedCredential=_uuidof(IVpnPickedCredential);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnPlugIn
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPlugIn[] = L"Windows.Networking.Vpn.IVpnPlugIn";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("CEB78D07-D0A8-4703-A091-C8C2C0915BC4"), contract] */
                MIDL_INTERFACE("CEB78D07-D0A8-4703-A091-C8C2C0915BC4")
                IVpnPlugIn : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Connect(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnChannel * channel
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Disconnect(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnChannel * channel
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetKeepAlivePayload(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnChannel * channel,
                        /* [out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnPacketBuffer * * keepAlivePacket
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Encapsulate(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnChannel * channel,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnPacketBufferList * packets,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnPacketBufferList * encapulatedPackets
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Decapsulate(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnChannel * channel,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnPacketBuffer * encapBuffer,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnPacketBufferList * decapsulatedPackets,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnPacketBufferList * controlPacketsToSend
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnPlugIn=_uuidof(IVpnPlugIn);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnPlugInProfile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnPlugInProfile
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPlugInProfile[] = L"Windows.Networking.Vpn.IVpnPlugInProfile";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("0EDF0DA4-4F00-4589-8D7B-4BF988F6542C"), exclusiveto, contract] */
                MIDL_INTERFACE("0EDF0DA4-4F00-4589-8D7B-4BF988F6542C")
                IVpnPlugInProfile : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerUris(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CFoundation__CUri * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CustomConfiguration(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CustomConfiguration(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VpnPluginPackageFamilyName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_VpnPluginPackageFamilyName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnPlugInProfile=_uuidof(IVpnPlugInProfile);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnPlugInProfile2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnPlugInProfile
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPlugInProfile2[] = L"Windows.Networking.Vpn.IVpnPlugInProfile2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("611C4892-CF94-4AD6-BA99-00F4FF34565E"), exclusiveto, contract] */
                MIDL_INTERFACE("611C4892-CF94-4AD6-BA99-00F4FF34565E")
                IVpnPlugInProfile2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequireVpnClientAppUI(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RequireVpnClientAppUI(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConnectionStatus(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Vpn::VpnManagementConnectionStatus * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnPlugInProfile2=_uuidof(IVpnPlugInProfile2);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnProfile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnProfile[] = L"Windows.Networking.Vpn.IVpnProfile";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("7875B751-B0D7-43DB-8A93-D3FE2479E56A"), contract] */
                MIDL_INTERFACE("7875B751-B0D7-43DB-8A93-D3FE2479E56A")
                IVpnProfile : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProfileName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProfileName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppTriggers(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Routes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DomainNameInfoList(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TrafficFilters(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RememberCredentials(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RememberCredentials(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlwaysOn(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AlwaysOn(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnProfile=_uuidof(IVpnProfile);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnRoute
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnRoute
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnRoute[] = L"Windows.Networking.Vpn.IVpnRoute";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("B5731B83-0969-4699-938E-7776DB29CFB3"), exclusiveto, contract] */
                MIDL_INTERFACE("B5731B83-0969-4699-938E-7776DB29CFB3")
                IVpnRoute : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Address(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Address(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PrefixSize(
                        /* [range(0, 128), in] */__RPC__in_range(0,0x80) BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PrefixSize(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnRoute=_uuidof(IVpnRoute);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnRouteAssignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnRouteAssignment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnRouteAssignment[] = L"Windows.Networking.Vpn.IVpnRouteAssignment";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("DB64DE22-CE39-4A76-9550-F61039F80E48"), exclusiveto, contract] */
                MIDL_INTERFACE("DB64DE22-CE39-4A76-9550-F61039F80E48")
                IVpnRouteAssignment : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Ipv4InclusionRoutes(
                        /* [in] */__RPC__in_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Ipv6InclusionRoutes(
                        /* [in] */__RPC__in_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ipv4InclusionRoutes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ipv6InclusionRoutes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Ipv4ExclusionRoutes(
                        /* [in] */__RPC__in_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Ipv6ExclusionRoutes(
                        /* [in] */__RPC__in_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ipv4ExclusionRoutes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ipv6ExclusionRoutes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ExcludeLocalSubnets(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExcludeLocalSubnets(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnRouteAssignment=_uuidof(IVpnRouteAssignment);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnRouteFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnRouteFactory[] = L"Windows.Networking.Vpn.IVpnRouteFactory";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("BDEAB5FF-45CF-4B99-83FB-DB3BC2672B02"), contract] */
                MIDL_INTERFACE("BDEAB5FF-45CF-4B99-83FB-DB3BC2672B02")
                IVpnRouteFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateVpnRoute(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * address,
                        /* [range(0, 128), in] */__RPC__in_range(0,0x80) BYTE prefixSize,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnRoute * * route
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnRouteFactory=_uuidof(IVpnRouteFactory);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnSystemHealth
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnSystemHealth
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnSystemHealth[] = L"Windows.Networking.Vpn.IVpnSystemHealth";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("99A8F8AF-C0EE-4E75-817A-F231AEE5123D"), exclusiveto, contract] */
                MIDL_INTERFACE("99A8F8AF-C0EE-4E75-817A-F231AEE5123D")
                IVpnSystemHealth : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StatementOfHealth(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnSystemHealth=_uuidof(IVpnSystemHealth);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnTrafficFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnTrafficFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnTrafficFilter[] = L"Windows.Networking.Vpn.IVpnTrafficFilter";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("2F691B60-6C9F-47F5-AC36-BB1B042E2C50"), exclusiveto, contract] */
                MIDL_INTERFACE("2F691B60-6C9F-47F5-AC36-BB1B042E2C50")
                IVpnTrafficFilter : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppId(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnAppId * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AppId(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnAppId * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppClaims(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Protocol(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Vpn::VpnIPProtocol * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Protocol(
                        /* [in] */ABI::Windows::Networking::Vpn::VpnIPProtocol value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalPortRanges(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemotePortRanges(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalAddressRanges(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteAddressRanges(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoutingPolicyType(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Vpn::VpnRoutingPolicyType * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RoutingPolicyType(
                        /* [in] */ABI::Windows::Networking::Vpn::VpnRoutingPolicyType value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnTrafficFilter=_uuidof(IVpnTrafficFilter);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnTrafficFilterAssignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnTrafficFilterAssignment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnTrafficFilterAssignment[] = L"Windows.Networking.Vpn.IVpnTrafficFilterAssignment";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("56CCD45C-E664-471E-89CD-601603B9E0F3"), exclusiveto, contract] */
                MIDL_INTERFACE("56CCD45C-E664-471E-89CD-601603B9E0F3")
                IVpnTrafficFilterAssignment : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TrafficFilterList(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllowOutbound(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AllowOutbound(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllowInbound(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AllowInbound(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnTrafficFilterAssignment=_uuidof(IVpnTrafficFilterAssignment);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnTrafficFilterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnTrafficFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnTrafficFilterFactory[] = L"Windows.Networking.Vpn.IVpnTrafficFilterFactory";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Vpn {
                /* [object, uuid("480D41D5-7F99-474C-86EE-96DF168318F1"), exclusiveto, contract] */
                MIDL_INTERFACE("480D41D5-7F99-474C-86EE-96DF168318F1")
                IVpnTrafficFilterFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Vpn::IVpnAppId * appId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Vpn::IVpnTrafficFilter * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVpnTrafficFilterFactory=_uuidof(IVpnTrafficFilterFactory);
                
            } /* Windows */
        } /* Networking */
    } /* Vpn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnAppId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Vpn.IVpnAppIdFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnAppId ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnAppId_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnAppId_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnAppId[] = L"Windows.Networking.Vpn.VpnAppId";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnChannel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Vpn.IVpnChannelStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnChannel ** Default Interface **
 *    Windows.Networking.Vpn.IVpnChannel2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnChannel_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnChannel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnChannel[] = L"Windows.Networking.Vpn.VpnChannel";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnChannelActivityEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnChannelActivityEventArgs ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnChannelActivityEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnChannelActivityEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnChannelActivityEventArgs[] = L"Windows.Networking.Vpn.VpnChannelActivityEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnChannelActivityStateChangedArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnChannelActivityStateChangedArgs ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnChannelActivityStateChangedArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnChannelActivityStateChangedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnChannelActivityStateChangedArgs[] = L"Windows.Networking.Vpn.VpnChannelActivityStateChangedArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnChannelConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnChannelConfiguration ** Default Interface **
 *    Windows.Networking.Vpn.IVpnChannelConfiguration2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnChannelConfiguration_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnChannelConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnChannelConfiguration[] = L"Windows.Networking.Vpn.VpnChannelConfiguration";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCredential
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCredential ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCredential_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCredential_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCredential[] = L"Windows.Networking.Vpn.VpnCredential";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCustomCheckBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCustomCheckBox ** Default Interface **
 *    Windows.Networking.Vpn.IVpnCustomPrompt
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomCheckBox_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomCheckBox_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomCheckBox[] = L"Windows.Networking.Vpn.VpnCustomCheckBox";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCustomComboBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCustomComboBox ** Default Interface **
 *    Windows.Networking.Vpn.IVpnCustomPrompt
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomComboBox_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomComboBox_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomComboBox[] = L"Windows.Networking.Vpn.VpnCustomComboBox";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCustomEditBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCustomEditBox ** Default Interface **
 *    Windows.Networking.Vpn.IVpnCustomPrompt
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomEditBox_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomEditBox_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomEditBox[] = L"Windows.Networking.Vpn.VpnCustomEditBox";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCustomErrorBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCustomErrorBox ** Default Interface **
 *    Windows.Networking.Vpn.IVpnCustomPrompt
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomErrorBox_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomErrorBox_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomErrorBox[] = L"Windows.Networking.Vpn.VpnCustomErrorBox";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCustomPromptBooleanInput
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCustomPromptBooleanInput ** Default Interface **
 *    Windows.Networking.Vpn.IVpnCustomPromptElement
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomPromptBooleanInput_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomPromptBooleanInput_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomPromptBooleanInput[] = L"Windows.Networking.Vpn.VpnCustomPromptBooleanInput";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCustomPromptOptionSelector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCustomPromptOptionSelector ** Default Interface **
 *    Windows.Networking.Vpn.IVpnCustomPromptElement
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomPromptOptionSelector_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomPromptOptionSelector_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomPromptOptionSelector[] = L"Windows.Networking.Vpn.VpnCustomPromptOptionSelector";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCustomPromptText
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCustomPromptText ** Default Interface **
 *    Windows.Networking.Vpn.IVpnCustomPromptElement
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomPromptText_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomPromptText_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomPromptText[] = L"Windows.Networking.Vpn.VpnCustomPromptText";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCustomPromptTextInput
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCustomPromptTextInput ** Default Interface **
 *    Windows.Networking.Vpn.IVpnCustomPromptElement
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomPromptTextInput_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomPromptTextInput_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomPromptTextInput[] = L"Windows.Networking.Vpn.VpnCustomPromptTextInput";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCustomTextBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCustomTextBox ** Default Interface **
 *    Windows.Networking.Vpn.IVpnCustomPrompt
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomTextBox_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomTextBox_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomTextBox[] = L"Windows.Networking.Vpn.VpnCustomTextBox";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnDomainNameAssignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnDomainNameAssignment ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnDomainNameAssignment_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnDomainNameAssignment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnDomainNameAssignment[] = L"Windows.Networking.Vpn.VpnDomainNameAssignment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnDomainNameInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Vpn.IVpnDomainNameInfoFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnDomainNameInfo ** Default Interface **
 *    Windows.Networking.Vpn.IVpnDomainNameInfo2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnDomainNameInfo_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnDomainNameInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnDomainNameInfo[] = L"Windows.Networking.Vpn.VpnDomainNameInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnInterfaceId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Vpn.IVpnInterfaceIdFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnInterfaceId ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnInterfaceId_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnInterfaceId_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnInterfaceId[] = L"Windows.Networking.Vpn.VpnInterfaceId";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnManagementAgent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnManagementAgent ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnManagementAgent_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnManagementAgent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnManagementAgent[] = L"Windows.Networking.Vpn.VpnManagementAgent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnNamespaceAssignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnNamespaceAssignment ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnNamespaceAssignment_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnNamespaceAssignment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnNamespaceAssignment[] = L"Windows.Networking.Vpn.VpnNamespaceAssignment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnNamespaceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Vpn.IVpnNamespaceInfoFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnNamespaceInfo ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnNamespaceInfo_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnNamespaceInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnNamespaceInfo[] = L"Windows.Networking.Vpn.VpnNamespaceInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnNativeProfile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnNativeProfile ** Default Interface **
 *    Windows.Networking.Vpn.IVpnProfile
 *    Windows.Networking.Vpn.IVpnNativeProfile2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnNativeProfile_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnNativeProfile_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnNativeProfile[] = L"Windows.Networking.Vpn.VpnNativeProfile";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnPacketBuffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Vpn.IVpnPacketBufferFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnPacketBuffer ** Default Interface **
 *    Windows.Networking.Vpn.IVpnPacketBuffer2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnPacketBuffer_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnPacketBuffer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnPacketBuffer[] = L"Windows.Networking.Vpn.VpnPacketBuffer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnPacketBufferList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnPacketBufferList ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.Networking.Vpn.VpnPacketBuffer
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnPacketBufferList_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnPacketBufferList_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnPacketBufferList[] = L"Windows.Networking.Vpn.VpnPacketBufferList";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnPickedCredential
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnPickedCredential ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnPickedCredential_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnPickedCredential_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnPickedCredential[] = L"Windows.Networking.Vpn.VpnPickedCredential";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnPlugInProfile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnPlugInProfile ** Default Interface **
 *    Windows.Networking.Vpn.IVpnProfile
 *    Windows.Networking.Vpn.IVpnPlugInProfile2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnPlugInProfile_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnPlugInProfile_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnPlugInProfile[] = L"Windows.Networking.Vpn.VpnPlugInProfile";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnRoute
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Vpn.IVpnRouteFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnRoute ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnRoute_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnRoute_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnRoute[] = L"Windows.Networking.Vpn.VpnRoute";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnRouteAssignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnRouteAssignment ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnRouteAssignment_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnRouteAssignment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnRouteAssignment[] = L"Windows.Networking.Vpn.VpnRouteAssignment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnSystemHealth
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnSystemHealth ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnSystemHealth_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnSystemHealth_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnSystemHealth[] = L"Windows.Networking.Vpn.VpnSystemHealth";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnTrafficFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Vpn.IVpnTrafficFilterFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnTrafficFilter ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnTrafficFilter_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnTrafficFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnTrafficFilter[] = L"Windows.Networking.Vpn.VpnTrafficFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnTrafficFilterAssignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnTrafficFilterAssignment ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnTrafficFilterAssignment_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnTrafficFilterAssignment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnTrafficFilterAssignment[] = L"Windows.Networking.Vpn.VpnTrafficFilterAssignment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2 __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2 __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2 __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory;

#endif // ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt;

typedef struct __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptVtbl;

interface __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt;

typedef  struct __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptVtbl;

interface __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement;

typedef struct __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElementVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElementVtbl;

interface __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElementVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement;

typedef  struct __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElementVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElementVtbl;

interface __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElementVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile;

typedef struct __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl;

interface __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile;

typedef  struct __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl;

interface __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId;

typedef struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl;

interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId;

typedef  struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl;

interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo;

typedef struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl;

interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo;

typedef  struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl;

interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo;

typedef struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl;

interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo;

typedef  struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl;

interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer;

typedef struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBufferVtbl;

interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBufferVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer;

typedef  struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBufferVtbl;

interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute;

typedef struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnRouteVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CVpn__CVpnRouteVtbl;

interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnRouteVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute;

typedef  struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnRouteVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CVpn__CVpnRouteVtbl;

interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnRouteVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter;

typedef struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl;

interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter;

typedef  struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl;

interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt;

typedef struct __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptVtbl;

interface __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement;

typedef struct __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElementVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElementVtbl;

interface __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElementVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile;

typedef struct __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl;

interface __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId;

typedef struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl;

interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo;

typedef struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl;

interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo;

typedef struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl;

interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute;

typedef struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRouteVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRouteVtbl;

interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRouteVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter;

typedef struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl;

interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CNetworking__CVpn__CVpnAppId;

typedef struct __FIVector_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This, /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * *value);

    END_INTERFACE
} __FIVector_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl;

interface __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId
{
    CONST_VTBL struct __FIVector_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CNetworking__CVpn__CVpnAppId_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo;

typedef struct __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * *value);

    END_INTERFACE
} __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl;

interface __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo
{
    CONST_VTBL struct __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo;

typedef struct __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * *value);

    END_INTERFACE
} __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl;

interface __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo
{
    CONST_VTBL struct __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CNetworking__CVpn__CVpnRoute;

typedef struct __FIVector_1_Windows__CNetworking__CVpn__CVpnRouteVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This, /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * *value);

    END_INTERFACE
} __FIVector_1_Windows__CNetworking__CVpn__CVpnRouteVtbl;

interface __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute
{
    CONST_VTBL struct __FIVector_1_Windows__CNetworking__CVpn__CVpnRouteVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CNetworking__CVpn__CVpnRoute_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter;

typedef struct __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * *value);

    END_INTERFACE
} __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl;

interface __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter
{
    CONST_VTBL struct __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredentialVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredentialVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredentialVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential;

typedef struct __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredentialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredentialVtbl;

interface __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredentialVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementErrorStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus;

typedef struct __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementErrorStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatusVtbl;

interface __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs;

typedef struct __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgsVtbl;

interface __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CNetworking__CHostName __FIVector_1_Windows__CNetworking__CHostName;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CNetworking__CHostName;

typedef struct __FIVector_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CHostName **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CIHostName * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CIHostName * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CIHostName * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This, /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CIHostName * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIHostName * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CNetworking_CIHostName * *value);

    END_INTERFACE
} __FIVector_1_Windows__CNetworking__CHostNameVtbl;

interface __FIVector_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIVector_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CNetworking__CHostName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CNetworking__CHostName_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CNetworking__CHostName_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CFoundation__CUri __FIVector_1_Windows__CFoundation__CUri;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CFoundation__CUri;

typedef struct __FIVector_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CUri **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, /* [in] */ __RPC__in __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *value);

    END_INTERFACE
} __FIVector_1_Windows__CFoundation__CUriVtbl;

interface __FIVector_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIVector_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CFoundation__CUri_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CFoundation__CUri_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CFoundation__CUri_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CFoundation__CUri_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CFoundation__CUri_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CFoundation__CUri_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CFoundation__CUri_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CFoundation__CUri_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CFoundation__CUri_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CFoundation__CUri_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CFoundation__CUri_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CFoundation__CUri_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CFoundation__CUri_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CFoundation__CUri_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CFoundation__CUri_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CFoundation__CUri_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CFoundation__CUri_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CFoundation__CUri_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__









#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnAppIdType __x_ABI_CWindows_CNetworking_CVpn_CVpnAppIdType;


typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnAuthenticationMethod __x_ABI_CWindows_CNetworking_CVpn_CVpnAuthenticationMethod;


typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnChannelActivityEventType __x_ABI_CWindows_CNetworking_CVpn_CVpnChannelActivityEventType;


typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnChannelRequestCredentialsOptions __x_ABI_CWindows_CNetworking_CVpn_CVpnChannelRequestCredentialsOptions;


typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnCredentialType __x_ABI_CWindows_CNetworking_CVpn_CVpnCredentialType;


typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnDataPathType __x_ABI_CWindows_CNetworking_CVpn_CVpnDataPathType;


typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnDomainNameType __x_ABI_CWindows_CNetworking_CVpn_CVpnDomainNameType;


typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnIPProtocol __x_ABI_CWindows_CNetworking_CVpn_CVpnIPProtocol;


typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementConnectionStatus __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementConnectionStatus;


typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementErrorStatus __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementErrorStatus;


typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnNativeProtocolType __x_ABI_CWindows_CNetworking_CVpn_CVpnNativeProtocolType;


typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnPacketBufferStatus __x_ABI_CWindows_CNetworking_CVpn_CVpnPacketBufferStatus;


typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnRoutingPolicyType __x_ABI_CWindows_CNetworking_CVpn_CVpnRoutingPolicyType;


























































































/*
 *
 * Struct Windows.Networking.Vpn.VpnAppIdType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnAppIdType
{
    VpnAppIdType_PackageFamilyName = 0,
    VpnAppIdType_FullyQualifiedBinaryName = 1,
    VpnAppIdType_FilePath = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnAuthenticationMethod
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnAuthenticationMethod
{
    VpnAuthenticationMethod_Mschapv2 = 0,
    VpnAuthenticationMethod_Eap = 1,
    VpnAuthenticationMethod_Certificate = 2,
    VpnAuthenticationMethod_PresharedKey = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnChannelActivityEventType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnChannelActivityEventType
{
    VpnChannelActivityEventType_Idle = 0,
    VpnChannelActivityEventType_Active = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnChannelRequestCredentialsOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnChannelRequestCredentialsOptions
{
    VpnChannelRequestCredentialsOptions_None = 0,
    VpnChannelRequestCredentialsOptions_Retrying = 0x1,
    VpnChannelRequestCredentialsOptions_UseForSingleSignIn = 0x2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnCredentialType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnCredentialType
{
    VpnCredentialType_UsernamePassword = 0,
    VpnCredentialType_UsernameOtpPin = 1,
    VpnCredentialType_UsernamePasswordAndPin = 2,
    VpnCredentialType_UsernamePasswordChange = 3,
    VpnCredentialType_SmartCard = 4,
    VpnCredentialType_ProtectedCertificate = 5,
    VpnCredentialType_UnProtectedCertificate = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnDataPathType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnDataPathType
{
    VpnDataPathType_Send = 0,
    VpnDataPathType_Receive = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnDomainNameType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnDomainNameType
{
    VpnDomainNameType_Suffix = 0,
    VpnDomainNameType_FullyQualified = 1,
    VpnDomainNameType_Reserved = 65535,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnIPProtocol
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnIPProtocol
{
    VpnIPProtocol_None = 0,
    VpnIPProtocol_Tcp = 6,
    VpnIPProtocol_Udp = 17,
    VpnIPProtocol_Icmp = 1,
    VpnIPProtocol_Ipv6Icmp = 58,
    VpnIPProtocol_Igmp = 2,
    VpnIPProtocol_Pgm = 113,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnManagementConnectionStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementConnectionStatus
{
    VpnManagementConnectionStatus_Disconnected = 0,
    VpnManagementConnectionStatus_Disconnecting = 1,
    VpnManagementConnectionStatus_Connected = 2,
    VpnManagementConnectionStatus_Connecting = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnManagementErrorStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementErrorStatus
{
    VpnManagementErrorStatus_Ok = 0,
    VpnManagementErrorStatus_Other = 1,
    VpnManagementErrorStatus_InvalidXmlSyntax = 2,
    VpnManagementErrorStatus_ProfileNameTooLong = 3,
    VpnManagementErrorStatus_ProfileInvalidAppId = 4,
    VpnManagementErrorStatus_AccessDenied = 5,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    VpnManagementErrorStatus_CannotFindProfile = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    VpnManagementErrorStatus_AlreadyDisconnecting = 7,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    VpnManagementErrorStatus_AlreadyConnected = 8,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    VpnManagementErrorStatus_GeneralAuthenticationFailure = 9,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    VpnManagementErrorStatus_EapFailure = 10,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    VpnManagementErrorStatus_SmartCardFailure = 11,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    VpnManagementErrorStatus_CertificateFailure = 12,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    VpnManagementErrorStatus_ServerConfiguration = 13,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    VpnManagementErrorStatus_NoConnection = 14,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    VpnManagementErrorStatus_ServerConnection = 15,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    VpnManagementErrorStatus_UserNamePassword = 16,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    VpnManagementErrorStatus_DnsNotResolvable = 17,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    VpnManagementErrorStatus_InvalidIP = 18,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnNativeProtocolType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnNativeProtocolType
{
    VpnNativeProtocolType_Pptp = 0,
    VpnNativeProtocolType_L2tp = 1,
    VpnNativeProtocolType_IpsecIkev2 = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnPacketBufferStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnPacketBufferStatus
{
    VpnPacketBufferStatus_Ok = 0,
    VpnPacketBufferStatus_InvalidBufferSize = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Vpn.VpnRoutingPolicyType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnRoutingPolicyType
{
    VpnRoutingPolicyType_SplitRouting = 0,
    VpnRoutingPolicyType_ForceAllTrafficOverVpn = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnAppId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnAppId
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnAppId[] = L"Windows.Networking.Vpn.IVpnAppId";
/* [object, uuid("7B06A635-5C58-41D9-94A7-BFBCF1D8CA54"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnAppIdType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Type )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CVpn_CVpnAppIdType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_put_Type(This,value) \
    ( (This)->lpVtbl->put_Type(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnAppIdFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnAppId
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnAppIdFactory[] = L"Windows.Networking.Vpn.IVpnAppIdFactory";
/* [object, uuid("46ADFD2A-0AAB-4FDB-821D-D3DDC919788B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CVpn_CVpnAppIdType type,
        /* [in] */__RPC__in HSTRING value,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactoryVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_Create(This,type,value,result) \
    ( (This)->lpVtbl->Create(This,type,value,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnChannel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnChannel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannel[] = L"Windows.Networking.Vpn.IVpnChannel";
/* [object, uuid("4AC78D07-D1A8-4303-A091-C8D2E0915BC3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AssociateTransport )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
        /* [in] */__RPC__in_opt IInspectable * mainOuterTunnelTransport,
        /* [in] */__RPC__in_opt IInspectable * optionalOuterTunnelTransport
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIPv4list,
        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIPv6list,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * vpnInterfaceId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * routeScope,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * namespaceScope,
        /* [in] */UINT32 mtuSize,
        /* [in] */UINT32 maxFrameSize,
        /* [in] */boolean optimizeForLowCostNetwork,
        /* [in] */__RPC__in_opt IInspectable * mainOuterTunnelTransport,
        /* [in] */__RPC__in_opt IInspectable * optionalOuterTunnelTransport
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This
        );
    HRESULT ( STDMETHODCALLTYPE *RequestCredentials )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CVpn_CVpnCredentialType credType,
        /* [in] */boolean isRetry,
        /* [in] */boolean isSingleSignOnCredential,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * certificate,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * * credential
        );
    HRESULT ( STDMETHODCALLTYPE *RequestVpnPacketBuffer )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CVpn_CVpnDataPathType type,
        /* [out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * * vpnPacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *LogDiagnosticMessage )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
        /* [in] */__RPC__in HSTRING message
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Configuration )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ActivityChange )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ActivityChange )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PlugInContext )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PlugInContext )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SystemHealth )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestCustomPrompt )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * customPrompt
        );
    HRESULT ( STDMETHODCALLTYPE *SetErrorMessage )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
        /* [in] */__RPC__in HSTRING message
        );
    HRESULT ( STDMETHODCALLTYPE *SetAllowedSslTlsVersions )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
        /* [in] */__RPC__in_opt IInspectable * tunnelTransport,
        /* [in] */boolean useTls12
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_AssociateTransport(This,mainOuterTunnelTransport,optionalOuterTunnelTransport) \
    ( (This)->lpVtbl->AssociateTransport(This,mainOuterTunnelTransport,optionalOuterTunnelTransport) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_Start(This,assignedClientIPv4list,assignedClientIPv6list,vpnInterfaceId,routeScope,namespaceScope,mtuSize,maxFrameSize,optimizeForLowCostNetwork,mainOuterTunnelTransport,optionalOuterTunnelTransport) \
    ( (This)->lpVtbl->Start(This,assignedClientIPv4list,assignedClientIPv6list,vpnInterfaceId,routeScope,namespaceScope,mtuSize,maxFrameSize,optimizeForLowCostNetwork,mainOuterTunnelTransport,optionalOuterTunnelTransport) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_RequestCredentials(This,credType,isRetry,isSingleSignOnCredential,certificate,credential) \
    ( (This)->lpVtbl->RequestCredentials(This,credType,isRetry,isSingleSignOnCredential,certificate,credential) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_RequestVpnPacketBuffer(This,type,vpnPacketBuffer) \
    ( (This)->lpVtbl->RequestVpnPacketBuffer(This,type,vpnPacketBuffer) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_LogDiagnosticMessage(This,message) \
    ( (This)->lpVtbl->LogDiagnosticMessage(This,message) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_get_Configuration(This,value) \
    ( (This)->lpVtbl->get_Configuration(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_add_ActivityChange(This,handler,token) \
    ( (This)->lpVtbl->add_ActivityChange(This,handler,token) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_remove_ActivityChange(This,token) \
    ( (This)->lpVtbl->remove_ActivityChange(This,token) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_put_PlugInContext(This,value) \
    ( (This)->lpVtbl->put_PlugInContext(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_get_PlugInContext(This,value) \
    ( (This)->lpVtbl->get_PlugInContext(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_get_SystemHealth(This,value) \
    ( (This)->lpVtbl->get_SystemHealth(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_RequestCustomPrompt(This,customPrompt) \
    ( (This)->lpVtbl->RequestCustomPrompt(This,customPrompt) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_SetErrorMessage(This,message) \
    ( (This)->lpVtbl->SetErrorMessage(This,message) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_SetAllowedSslTlsVersions(This,tunnelTransport,useTls12) \
    ( (This)->lpVtbl->SetAllowedSslTlsVersions(This,tunnelTransport,useTls12) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnChannel2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnChannel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannel2[] = L"Windows.Networking.Vpn.IVpnChannel2";
/* [object, uuid("2255D165-993B-4629-AD60-F1C3F3537F50"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StartWithMainTransport )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIPv4list,
        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIPv6list,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * vpnInterfaceId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * assignedRoutes,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * assignedDomainName,
        /* [in] */UINT32 mtuSize,
        /* [in] */UINT32 maxFrameSize,
        /* [in] */boolean Reserved,
        /* [in] */__RPC__in_opt IInspectable * mainOuterTunnelTransport
        );
    HRESULT ( STDMETHODCALLTYPE *StartExistingTransports )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIPv4list,
        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIPv6list,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * vpnInterfaceId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * assignedRoutes,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * assignedDomainName,
        /* [in] */UINT32 mtuSize,
        /* [in] */UINT32 maxFrameSize,
        /* [in] */boolean Reserved
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ActivityStateChange )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ActivityStateChange )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetVpnSendPacketBuffer )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * * vpnSendPacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *GetVpnReceivePacketBuffer )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * * vpnReceivePacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *RequestCustomPromptAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * customPromptElement,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestCredentialsWithCertificateAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CVpn_CVpnCredentialType credType,
        /* [in] */UINT32 credOptions,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * certificate,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * * credential
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestCredentialsWithOptionsAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CVpn_CVpnCredentialType credType,
        /* [in] */UINT32 credOptions,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * * credential
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestCredentialsSimpleAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CVpn_CVpnCredentialType credType,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * * credential
        );
    HRESULT ( STDMETHODCALLTYPE *TerminateConnection )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
        /* [in] */__RPC__in HSTRING message
        );
    HRESULT ( STDMETHODCALLTYPE *StartWithTrafficFilter )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIpv4List,
        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIpv6List,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * vpnInterfaceId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * assignedRoutes,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * assignedNamespace,
        /* [in] */UINT32 mtuSize,
        /* [in] */UINT32 maxFrameSize,
        /* [in] */boolean reserved,
        /* [in] */__RPC__in_opt IInspectable * mainOuterTunnelTransport,
        /* [in] */__RPC__in_opt IInspectable * optionalOuterTunnelTransport,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * assignedTrafficFilters
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2Vtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_StartWithMainTransport(This,assignedClientIPv4list,assignedClientIPv6list,vpnInterfaceId,assignedRoutes,assignedDomainName,mtuSize,maxFrameSize,Reserved,mainOuterTunnelTransport) \
    ( (This)->lpVtbl->StartWithMainTransport(This,assignedClientIPv4list,assignedClientIPv6list,vpnInterfaceId,assignedRoutes,assignedDomainName,mtuSize,maxFrameSize,Reserved,mainOuterTunnelTransport) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_StartExistingTransports(This,assignedClientIPv4list,assignedClientIPv6list,vpnInterfaceId,assignedRoutes,assignedDomainName,mtuSize,maxFrameSize,Reserved) \
    ( (This)->lpVtbl->StartExistingTransports(This,assignedClientIPv4list,assignedClientIPv6list,vpnInterfaceId,assignedRoutes,assignedDomainName,mtuSize,maxFrameSize,Reserved) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_add_ActivityStateChange(This,handler,token) \
    ( (This)->lpVtbl->add_ActivityStateChange(This,handler,token) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_remove_ActivityStateChange(This,token) \
    ( (This)->lpVtbl->remove_ActivityStateChange(This,token) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_GetVpnSendPacketBuffer(This,vpnSendPacketBuffer) \
    ( (This)->lpVtbl->GetVpnSendPacketBuffer(This,vpnSendPacketBuffer) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_GetVpnReceivePacketBuffer(This,vpnReceivePacketBuffer) \
    ( (This)->lpVtbl->GetVpnReceivePacketBuffer(This,vpnReceivePacketBuffer) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_RequestCustomPromptAsync(This,customPromptElement,action) \
    ( (This)->lpVtbl->RequestCustomPromptAsync(This,customPromptElement,action) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_RequestCredentialsWithCertificateAsync(This,credType,credOptions,certificate,credential) \
    ( (This)->lpVtbl->RequestCredentialsWithCertificateAsync(This,credType,credOptions,certificate,credential) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_RequestCredentialsWithOptionsAsync(This,credType,credOptions,credential) \
    ( (This)->lpVtbl->RequestCredentialsWithOptionsAsync(This,credType,credOptions,credential) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_RequestCredentialsSimpleAsync(This,credType,credential) \
    ( (This)->lpVtbl->RequestCredentialsSimpleAsync(This,credType,credential) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_TerminateConnection(This,message) \
    ( (This)->lpVtbl->TerminateConnection(This,message) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_StartWithTrafficFilter(This,assignedClientIpv4List,assignedClientIpv6List,vpnInterfaceId,assignedRoutes,assignedNamespace,mtuSize,maxFrameSize,reserved,mainOuterTunnelTransport,optionalOuterTunnelTransport,assignedTrafficFilters) \
    ( (This)->lpVtbl->StartWithTrafficFilter(This,assignedClientIpv4List,assignedClientIpv6List,vpnInterfaceId,assignedRoutes,assignedNamespace,mtuSize,maxFrameSize,reserved,mainOuterTunnelTransport,optionalOuterTunnelTransport,assignedTrafficFilters) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnChannelActivityEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnChannelActivityEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannelActivityEventArgs[] = L"Windows.Networking.Vpn.IVpnChannelActivityEventArgs";
/* [object, uuid("A36C88F2-AFDC-4775-855D-D4AC0A35FC55"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnChannelActivityEventType * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgsVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnChannelActivityStateChangedArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnChannelActivityStateChangedArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannelActivityStateChangedArgs[] = L"Windows.Networking.Vpn.IVpnChannelActivityStateChangedArgs";
/* [object, uuid("3D750565-FDC0-4BBE-A23B-45FFFC6D97A1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivityState )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnChannelActivityEventType * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgsVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_get_ActivityState(This,value) \
    ( (This)->lpVtbl->get_ActivityState(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnChannelConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnChannelConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannelConfiguration[] = L"Windows.Networking.Vpn.IVpnChannelConfiguration";
/* [object, uuid("0E2DDCA2-2012-4FE4-B179-8C652C6D107E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerServiceName )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerHostNameList )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CHostName * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CustomField )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfigurationVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfigurationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_get_ServerServiceName(This,value) \
    ( (This)->lpVtbl->get_ServerServiceName(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_get_ServerHostNameList(This,value) \
    ( (This)->lpVtbl->get_ServerHostNameList(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_get_CustomField(This,value) \
    ( (This)->lpVtbl->get_CustomField(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnChannelConfiguration2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnChannelConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannelConfiguration2[] = L"Windows.Networking.Vpn.IVpnChannelConfiguration2";
/* [object, uuid("F30B574C-7824-471C-A118-63DBC93AE4C7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerUris )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CUri * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2Vtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_get_ServerUris(This,value) \
    ( (This)->lpVtbl->get_ServerUris(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnChannelStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannelStatics[] = L"Windows.Networking.Vpn.IVpnChannelStatics";
/* [object, uuid("88EB062D-E818-4FFD-98A6-363E3736C95D"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ProcessEventAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics * This,
        /* [in] */__RPC__in_opt IInspectable * thirdPartyPlugIn,
        /* [in] */__RPC__in_opt IInspectable * event
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStaticsVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_ProcessEventAsync(This,thirdPartyPlugIn,event) \
    ( (This)->lpVtbl->ProcessEventAsync(This,thirdPartyPlugIn,event) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCredential
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCredential[] = L"Windows.Networking.Vpn.IVpnCredential";
/* [object, uuid("B7E78AF3-A46D-404B-8729-1832522853AC"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredentialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PasskeyCredential )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CertificateCredential )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AdditionalPin )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OldPasswordCredential )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredentialVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredentialVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_get_PasskeyCredential(This,value) \
    ( (This)->lpVtbl->get_PasskeyCredential(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_get_CertificateCredential(This,value) \
    ( (This)->lpVtbl->get_CertificateCredential(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_get_AdditionalPin(This,value) \
    ( (This)->lpVtbl->get_AdditionalPin(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_get_OldPasswordCredential(This,value) \
    ( (This)->lpVtbl->get_OldPasswordCredential(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomCheckBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnCustomCheckBox
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnCustomPrompt
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomCheckBox[] = L"Windows.Networking.Vpn.IVpnCustomCheckBox";
/* [object, uuid("43878753-03C5-4E61-93D7-A957714C4282"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InitialCheckState )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InitialCheckState )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Checked )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBoxVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBoxVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_put_InitialCheckState(This,value) \
    ( (This)->lpVtbl->put_InitialCheckState(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_get_InitialCheckState(This,value) \
    ( (This)->lpVtbl->get_InitialCheckState(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_get_Checked(This,value) \
    ( (This)->lpVtbl->get_Checked(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomComboBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnCustomComboBox
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnCustomPrompt
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomComboBox[] = L"Windows.Networking.Vpn.IVpnCustomComboBox";
/* [object, uuid("9A24158E-DBA1-4C6F-8270-DCF3C9761C4C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OptionsText )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox * This,
        /* [in] */__RPC__in_opt __FIVectorView_1_HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OptionsText )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Selected )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBoxVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBoxVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_put_OptionsText(This,value) \
    ( (This)->lpVtbl->put_OptionsText(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_get_OptionsText(This,value) \
    ( (This)->lpVtbl->get_OptionsText(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_get_Selected(This,value) \
    ( (This)->lpVtbl->get_Selected(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomEditBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnCustomEditBox
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnCustomPrompt
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomEditBox[] = L"Windows.Networking.Vpn.IVpnCustomEditBox";
/* [object, uuid("3002D9A0-CFBF-4C0B-8F3C-66F503C20B39"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DefaultText )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultText )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NoEcho )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NoEcho )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBoxVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBoxVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_put_DefaultText(This,value) \
    ( (This)->lpVtbl->put_DefaultText(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_get_DefaultText(This,value) \
    ( (This)->lpVtbl->get_DefaultText(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_put_NoEcho(This,value) \
    ( (This)->lpVtbl->put_NoEcho(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_get_NoEcho(This,value) \
    ( (This)->lpVtbl->get_NoEcho(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_get_Text(This,value) \
    ( (This)->lpVtbl->get_Text(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomErrorBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnCustomErrorBox
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnCustomPrompt
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomErrorBox[] = L"Windows.Networking.Vpn.IVpnCustomErrorBox";
/* [object, uuid("9EC4EFB2-C942-42AF-B223-588B48328721"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBoxVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBoxVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomPrompt
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomPrompt[] = L"Windows.Networking.Vpn.IVpnCustomPrompt";
/* [object, uuid("9B2EBE7B-87D5-433C-B4F6-EEE6AA68A244"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Label )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Label )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Compulsory )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Compulsory )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Bordered )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bordered )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_put_Label(This,value) \
    ( (This)->lpVtbl->put_Label(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_get_Label(This,value) \
    ( (This)->lpVtbl->get_Label(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_put_Compulsory(This,value) \
    ( (This)->lpVtbl->put_Compulsory(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_get_Compulsory(This,value) \
    ( (This)->lpVtbl->get_Compulsory(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_put_Bordered(This,value) \
    ( (This)->lpVtbl->put_Bordered(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_get_Bordered(This,value) \
    ( (This)->lpVtbl->get_Bordered(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomPromptBooleanInput
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnCustomPromptBooleanInput
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnCustomPromptElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomPromptBooleanInput[] = L"Windows.Networking.Vpn.IVpnCustomPromptBooleanInput";
/* [object, uuid("C4C9A69E-FF47-4527-9F27-A49292019979"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInputVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InitialValue )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InitialValue )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInputVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInputVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_put_InitialValue(This,value) \
    ( (This)->lpVtbl->put_InitialValue(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_get_InitialValue(This,value) \
    ( (This)->lpVtbl->get_InitialValue(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomPromptElement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomPromptElement[] = L"Windows.Networking.Vpn.IVpnCustomPromptElement";
/* [object, uuid("73BD5638-6F04-404D-93DD-50A44924A38B"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Compulsory )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Compulsory )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Emphasized )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Emphasized )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElementVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElementVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_put_DisplayName(This,value) \
    ( (This)->lpVtbl->put_DisplayName(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_put_Compulsory(This,value) \
    ( (This)->lpVtbl->put_Compulsory(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_get_Compulsory(This,value) \
    ( (This)->lpVtbl->get_Compulsory(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_put_Emphasized(This,value) \
    ( (This)->lpVtbl->put_Emphasized(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_get_Emphasized(This,value) \
    ( (This)->lpVtbl->get_Emphasized(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomPromptOptionSelector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnCustomPromptOptionSelector
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnCustomPromptElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomPromptOptionSelector[] = L"Windows.Networking.Vpn.IVpnCustomPromptOptionSelector";
/* [object, uuid("3B8F34D9-8EC1-4E95-9A4E-7BA64D38F330"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedIndex )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelectorVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelectorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_get_Options(This,value) \
    ( (This)->lpVtbl->get_Options(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_get_SelectedIndex(This,value) \
    ( (This)->lpVtbl->get_SelectedIndex(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomPromptText
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnCustomPromptText
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnCustomPromptElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomPromptText[] = L"Windows.Networking.Vpn.IVpnCustomPromptText";
/* [object, uuid("3BC8BDEE-3A42-49A3-ABDD-07B2EDEA752D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_put_Text(This,value) \
    ( (This)->lpVtbl->put_Text(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_get_Text(This,value) \
    ( (This)->lpVtbl->get_Text(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomPromptTextInput
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnCustomPromptTextInput
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnCustomPromptElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomPromptTextInput[] = L"Windows.Networking.Vpn.IVpnCustomPromptTextInput";
/* [object, uuid("C9DA9C75-913C-47D5-88BA-48FC48930235"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInputVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PlaceholderText )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PlaceholderText )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsTextHidden )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTextHidden )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInputVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInputVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_put_PlaceholderText(This,value) \
    ( (This)->lpVtbl->put_PlaceholderText(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_get_PlaceholderText(This,value) \
    ( (This)->lpVtbl->get_PlaceholderText(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_put_IsTextHidden(This,value) \
    ( (This)->lpVtbl->put_IsTextHidden(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_get_IsTextHidden(This,value) \
    ( (This)->lpVtbl->get_IsTextHidden(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_get_Text(This,value) \
    ( (This)->lpVtbl->get_Text(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnCustomTextBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnCustomTextBox
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnCustomPrompt
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomTextBox[] = L"Windows.Networking.Vpn.IVpnCustomTextBox";
/* [object, uuid("DAA4C3CA-8F23-4D36-91F1-76D937827942"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayText )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayText )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBoxVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBoxVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_put_DisplayText(This,value) \
    ( (This)->lpVtbl->put_DisplayText(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_get_DisplayText(This,value) \
    ( (This)->lpVtbl->get_DisplayText(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnDomainNameAssignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnDomainNameAssignment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnDomainNameAssignment[] = L"Windows.Networking.Vpn.IVpnDomainNameAssignment";
/* [object, uuid("4135B141-CCDB-49B5-9401-039A8AE767E9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DomainNameList )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProxyAutoConfigurationUri )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProxyAutoConfigurationUri )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignmentVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_get_DomainNameList(This,value) \
    ( (This)->lpVtbl->get_DomainNameList(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_put_ProxyAutoConfigurationUri(This,value) \
    ( (This)->lpVtbl->put_ProxyAutoConfigurationUri(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_get_ProxyAutoConfigurationUri(This,value) \
    ( (This)->lpVtbl->get_ProxyAutoConfigurationUri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnDomainNameInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnDomainNameInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnDomainNameInfo[] = L"Windows.Networking.Vpn.IVpnDomainNameInfo";
/* [object, uuid("AD2EB82F-EA8E-4F7A-843E-1A87E32E1B9A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DomainName )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DomainName )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DomainNameType )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CVpn_CVpnDomainNameType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DomainNameType )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnDomainNameType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DnsServers )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CHostName * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebProxyServers )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CHostName * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_put_DomainName(This,value) \
    ( (This)->lpVtbl->put_DomainName(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_get_DomainName(This,value) \
    ( (This)->lpVtbl->get_DomainName(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_put_DomainNameType(This,value) \
    ( (This)->lpVtbl->put_DomainNameType(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_get_DomainNameType(This,value) \
    ( (This)->lpVtbl->get_DomainNameType(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_get_DnsServers(This,value) \
    ( (This)->lpVtbl->get_DnsServers(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_get_WebProxyServers(This,value) \
    ( (This)->lpVtbl->get_WebProxyServers(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnDomainNameInfo2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnDomainNameInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnDomainNameInfo2[] = L"Windows.Networking.Vpn.IVpnDomainNameInfo2";
/* [object, uuid("AB871151-6C53-4828-9883-D886DE104407"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebProxyUris )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CFoundation__CUri * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2Vtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_get_WebProxyUris(This,value) \
    ( (This)->lpVtbl->get_WebProxyUris(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnDomainNameInfoFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnDomainNameInfoFactory[] = L"Windows.Networking.Vpn.IVpnDomainNameInfoFactory";
/* [object, uuid("2507BB75-028F-4688-8D3A-C4531DF37DA8"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateVpnDomainNameInfo )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CNetworking_CVpn_CVpnDomainNameType nameType,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CNetworking__CHostName * dnsServerList,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CNetworking__CHostName * proxyServerList,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * * domainNameInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactoryVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_CreateVpnDomainNameInfo(This,name,nameType,dnsServerList,proxyServerList,domainNameInfo) \
    ( (This)->lpVtbl->CreateVpnDomainNameInfo(This,name,nameType,dnsServerList,proxyServerList,domainNameInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnInterfaceId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnInterfaceId
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnInterfaceId[] = L"Windows.Networking.Vpn.IVpnInterfaceId";
/* [object, uuid("9E2DDCA2-1712-4CE4-B179-8C652C6D1011"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAddressInfo )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * This,
        /* [out] */__RPC__out UINT32 * __idSize,
        /* [size_is(, *(__idSize)), out] */__RPC__deref_out_ecount_full_opt(*(__idSize)) BYTE * * id
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_GetAddressInfo(This,__idSize,id) \
    ( (This)->lpVtbl->GetAddressInfo(This,__idSize,id) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnInterfaceIdFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnInterfaceIdFactory[] = L"Windows.Networking.Vpn.IVpnInterfaceIdFactory";
/* [object, uuid("9E2DDCA2-1712-4CE4-B179-8C652C6D1000"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateVpnInterfaceId )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory * This,
        /* [in, range(0, 8)] */__RPC__in_range(0,0x8) UINT32 __addressSize,
        /* [size_is(__addressSize), in] */__RPC__in_ecount_full(__addressSize) BYTE * address,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * * vpnInterfaceId
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactoryVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_CreateVpnInterfaceId(This,__addressSize,address,vpnInterfaceId) \
    ( (This)->lpVtbl->CreateVpnInterfaceId(This,__addressSize,address,vpnInterfaceId) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnManagementAgent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnManagementAgent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnManagementAgent[] = L"Windows.Networking.Vpn.IVpnManagementAgent";
/* [object, uuid("193696CD-A5C4-4ABE-852B-785BE4CB3E34"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddProfileFromXmlAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
        /* [in] */__RPC__in HSTRING xml,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *AddProfileFromObjectAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * profile,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateProfileFromXmlAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
        /* [in] */__RPC__in HSTRING xml,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateProfileFromObjectAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * profile,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetProfilesAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteProfileAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * profile,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ConnectProfileAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * profile,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ConnectProfileWithPasswordCredentialAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * profile,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * passwordCredential,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DisconnectProfileAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * profile,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgentVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_AddProfileFromXmlAsync(This,xml,operation) \
    ( (This)->lpVtbl->AddProfileFromXmlAsync(This,xml,operation) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_AddProfileFromObjectAsync(This,profile,operation) \
    ( (This)->lpVtbl->AddProfileFromObjectAsync(This,profile,operation) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_UpdateProfileFromXmlAsync(This,xml,operation) \
    ( (This)->lpVtbl->UpdateProfileFromXmlAsync(This,xml,operation) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_UpdateProfileFromObjectAsync(This,profile,operation) \
    ( (This)->lpVtbl->UpdateProfileFromObjectAsync(This,profile,operation) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_GetProfilesAsync(This,operation) \
    ( (This)->lpVtbl->GetProfilesAsync(This,operation) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_DeleteProfileAsync(This,profile,operation) \
    ( (This)->lpVtbl->DeleteProfileAsync(This,profile,operation) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_ConnectProfileAsync(This,profile,operation) \
    ( (This)->lpVtbl->ConnectProfileAsync(This,profile,operation) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_ConnectProfileWithPasswordCredentialAsync(This,profile,passwordCredential,operation) \
    ( (This)->lpVtbl->ConnectProfileWithPasswordCredentialAsync(This,profile,passwordCredential,operation) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_DisconnectProfileAsync(This,profile,operation) \
    ( (This)->lpVtbl->DisconnectProfileAsync(This,profile,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnNamespaceAssignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnNamespaceAssignment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnNamespaceAssignment[] = L"Windows.Networking.Vpn.IVpnNamespaceAssignment";
/* [object, uuid("D7F7DB18-307D-4C0E-BD62-8FA270BBADD6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NamespaceList )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This,
        /* [in] */__RPC__in_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NamespaceList )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProxyAutoConfigUri )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProxyAutoConfigUri )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignmentVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_put_NamespaceList(This,value) \
    ( (This)->lpVtbl->put_NamespaceList(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_get_NamespaceList(This,value) \
    ( (This)->lpVtbl->get_NamespaceList(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_put_ProxyAutoConfigUri(This,value) \
    ( (This)->lpVtbl->put_ProxyAutoConfigUri(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_get_ProxyAutoConfigUri(This,value) \
    ( (This)->lpVtbl->get_ProxyAutoConfigUri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnNamespaceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnNamespaceInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnNamespaceInfo[] = L"Windows.Networking.Vpn.IVpnNamespaceInfo";
/* [object, uuid("30EDFB43-444F-44C5-8167-A35A91F1AF94"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Namespace )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Namespace )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DnsServers )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
        /* [in] */__RPC__in_opt __FIVector_1_Windows__CNetworking__CHostName * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DnsServers )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CHostName * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_WebProxyServers )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
        /* [in] */__RPC__in_opt __FIVector_1_Windows__CNetworking__CHostName * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebProxyServers )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CHostName * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_put_Namespace(This,value) \
    ( (This)->lpVtbl->put_Namespace(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_get_Namespace(This,value) \
    ( (This)->lpVtbl->get_Namespace(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_put_DnsServers(This,value) \
    ( (This)->lpVtbl->put_DnsServers(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_get_DnsServers(This,value) \
    ( (This)->lpVtbl->get_DnsServers(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_put_WebProxyServers(This,value) \
    ( (This)->lpVtbl->put_WebProxyServers(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_get_WebProxyServers(This,value) \
    ( (This)->lpVtbl->get_WebProxyServers(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnNamespaceInfoFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnNamespaceInfoFactory[] = L"Windows.Networking.Vpn.IVpnNamespaceInfoFactory";
/* [object, uuid("CB3E951A-B0CE-442B-ACBB-5F99B202C31C"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateVpnNamespaceInfo )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in_opt __FIVector_1_Windows__CNetworking__CHostName * dnsServerList,
        /* [in] */__RPC__in_opt __FIVector_1_Windows__CNetworking__CHostName * proxyServerList,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * * namespaceInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactoryVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_CreateVpnNamespaceInfo(This,name,dnsServerList,proxyServerList,namespaceInfo) \
    ( (This)->lpVtbl->CreateVpnNamespaceInfo(This,name,dnsServerList,proxyServerList,namespaceInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnNativeProfile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnNativeProfile
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnNativeProfile[] = L"Windows.Networking.Vpn.IVpnNativeProfile";
/* [object, uuid("A4AEE29E-6417-4333-9842-F0A66DB69802"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Servers )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RoutingPolicyType )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnRoutingPolicyType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RoutingPolicyType )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CVpn_CVpnRoutingPolicyType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NativeProtocolType )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnNativeProtocolType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NativeProtocolType )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CVpn_CVpnNativeProtocolType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserAuthenticationMethod )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnAuthenticationMethod * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UserAuthenticationMethod )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CVpn_CVpnAuthenticationMethod value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TunnelAuthenticationMethod )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnAuthenticationMethod * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TunnelAuthenticationMethod )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CVpn_CVpnAuthenticationMethod value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EapConfiguration )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * Value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_EapConfiguration )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfileVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_get_Servers(This,value) \
    ( (This)->lpVtbl->get_Servers(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_get_RoutingPolicyType(This,value) \
    ( (This)->lpVtbl->get_RoutingPolicyType(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_put_RoutingPolicyType(This,value) \
    ( (This)->lpVtbl->put_RoutingPolicyType(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_get_NativeProtocolType(This,value) \
    ( (This)->lpVtbl->get_NativeProtocolType(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_put_NativeProtocolType(This,value) \
    ( (This)->lpVtbl->put_NativeProtocolType(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_get_UserAuthenticationMethod(This,value) \
    ( (This)->lpVtbl->get_UserAuthenticationMethod(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_put_UserAuthenticationMethod(This,value) \
    ( (This)->lpVtbl->put_UserAuthenticationMethod(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_get_TunnelAuthenticationMethod(This,value) \
    ( (This)->lpVtbl->get_TunnelAuthenticationMethod(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_put_TunnelAuthenticationMethod(This,value) \
    ( (This)->lpVtbl->put_TunnelAuthenticationMethod(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_get_EapConfiguration(This,Value) \
    ( (This)->lpVtbl->get_EapConfiguration(This,Value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_put_EapConfiguration(This,value) \
    ( (This)->lpVtbl->put_EapConfiguration(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnNativeProfile2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnNativeProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnNativeProfile2[] = L"Windows.Networking.Vpn.IVpnNativeProfile2";
/* [object, uuid("0FEC2467-CDB5-4AC7-B5A3-0AFB5EC47682"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequireVpnClientAppUI )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RequireVpnClientAppUI )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConnectionStatus )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementConnectionStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2Vtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_get_RequireVpnClientAppUI(This,value) \
    ( (This)->lpVtbl->get_RequireVpnClientAppUI(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_put_RequireVpnClientAppUI(This,value) \
    ( (This)->lpVtbl->put_RequireVpnClientAppUI(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_get_ConnectionStatus(This,value) \
    ( (This)->lpVtbl->get_ConnectionStatus(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnPacketBuffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnPacketBuffer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPacketBuffer[] = L"Windows.Networking.Vpn.IVpnPacketBuffer";
/* [object, uuid("C2F891FC-4D5C-4A63-B70D-4E307EACCE55"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Buffer )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Status )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CVpn_CVpnPacketBufferStatus value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnPacketBufferStatus * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TransportAffinity )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TransportAffinity )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_get_Buffer(This,value) \
    ( (This)->lpVtbl->get_Buffer(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_put_Status(This,value) \
    ( (This)->lpVtbl->put_Status(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_put_TransportAffinity(This,value) \
    ( (This)->lpVtbl->put_TransportAffinity(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_get_TransportAffinity(This,value) \
    ( (This)->lpVtbl->get_TransportAffinity(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnPacketBuffer2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnPacketBuffer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPacketBuffer2[] = L"Windows.Networking.Vpn.IVpnPacketBuffer2";
/* [object, uuid("665E91F0-8805-4BF5-A619-2E84882E6B4F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppId )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2Vtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_get_AppId(This,value) \
    ( (This)->lpVtbl->get_AppId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnPacketBufferFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPacketBufferFactory[] = L"Windows.Networking.Vpn.IVpnPacketBufferFactory";
/* [object, uuid("9E2DDCA2-1712-4CE4-B179-8C652C6D9999"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateVpnPacketBuffer )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * parentBuffer,
        /* [in] */UINT32 offset,
        /* [in] */UINT32 length,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * * vpnPacketBuffer
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactoryVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_CreateVpnPacketBuffer(This,parentBuffer,offset,length,vpnPacketBuffer) \
    ( (This)->lpVtbl->CreateVpnPacketBuffer(This,parentBuffer,offset,length,vpnPacketBuffer) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnPacketBufferList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnPacketBufferList
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IIterable_1_Windows.Networking.Vpn.VpnPacketBuffer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPacketBufferList[] = L"Windows.Networking.Vpn.IVpnPacketBufferList";
/* [object, uuid("C2F891FC-4D5C-4A63-B70D-4E307EACCE77"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Append )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * nextVpnPacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *AddAtBegin )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * nextVpnPacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * * nextVpnPacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAtBegin )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * * nextVpnPacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Status )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CVpn_CVpnPacketBufferStatus value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnPacketBufferStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferListVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferListVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_Append(This,nextVpnPacketBuffer) \
    ( (This)->lpVtbl->Append(This,nextVpnPacketBuffer) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_AddAtBegin(This,nextVpnPacketBuffer) \
    ( (This)->lpVtbl->AddAtBegin(This,nextVpnPacketBuffer) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_RemoveAtEnd(This,nextVpnPacketBuffer) \
    ( (This)->lpVtbl->RemoveAtEnd(This,nextVpnPacketBuffer) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_RemoveAtBegin(This,nextVpnPacketBuffer) \
    ( (This)->lpVtbl->RemoveAtBegin(This,nextVpnPacketBuffer) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_Clear(This) \
    ( (This)->lpVtbl->Clear(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_put_Status(This,value) \
    ( (This)->lpVtbl->put_Status(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_get_Size(This,value) \
    ( (This)->lpVtbl->get_Size(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnPacketBufferList2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnPacketBufferList
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IIterable_1_Windows.Networking.Vpn.VpnPacketBuffer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPacketBufferList2[] = L"Windows.Networking.Vpn.IVpnPacketBufferList2";
/* [object, uuid("3E7ACFE5-EA1E-482A-8D98-C065F57D89EA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddLeadingPacket )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * nextVpnPacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveLeadingPacket )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * * nextVpnPacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *AddTrailingPacket )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * nextVpnPacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveTrailingPacket )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * * nextVpnPacketBuffer
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2Vtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_AddLeadingPacket(This,nextVpnPacketBuffer) \
    ( (This)->lpVtbl->AddLeadingPacket(This,nextVpnPacketBuffer) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_RemoveLeadingPacket(This,nextVpnPacketBuffer) \
    ( (This)->lpVtbl->RemoveLeadingPacket(This,nextVpnPacketBuffer) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_AddTrailingPacket(This,nextVpnPacketBuffer) \
    ( (This)->lpVtbl->AddTrailingPacket(This,nextVpnPacketBuffer) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_RemoveTrailingPacket(This,nextVpnPacketBuffer) \
    ( (This)->lpVtbl->RemoveTrailingPacket(This,nextVpnPacketBuffer) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnPickedCredential
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnPickedCredential
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPickedCredential[] = L"Windows.Networking.Vpn.IVpnPickedCredential";
/* [object, uuid("9A793AC7-8854-4E52-AD97-24DD9A842BCE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredentialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PasskeyCredential )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AdditionalPin )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OldPasswordCredential )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredentialVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredentialVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_get_PasskeyCredential(This,value) \
    ( (This)->lpVtbl->get_PasskeyCredential(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_get_AdditionalPin(This,value) \
    ( (This)->lpVtbl->get_AdditionalPin(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_get_OldPasswordCredential(This,value) \
    ( (This)->lpVtbl->get_OldPasswordCredential(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnPlugIn
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPlugIn[] = L"Windows.Networking.Vpn.IVpnPlugIn";
/* [object, uuid("CEB78D07-D0A8-4703-A091-C8C2C0915BC4"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Connect )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * channel
        );
    HRESULT ( STDMETHODCALLTYPE *Disconnect )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * channel
        );
    HRESULT ( STDMETHODCALLTYPE *GetKeepAlivePayload )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * channel,
        /* [out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * * keepAlivePacket
        );
    HRESULT ( STDMETHODCALLTYPE *Encapsulate )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * channel,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * packets,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * encapulatedPackets
        );
    HRESULT ( STDMETHODCALLTYPE *Decapsulate )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * channel,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * encapBuffer,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * decapsulatedPackets,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * controlPacketsToSend
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_Connect(This,channel) \
    ( (This)->lpVtbl->Connect(This,channel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_Disconnect(This,channel) \
    ( (This)->lpVtbl->Disconnect(This,channel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_GetKeepAlivePayload(This,channel,keepAlivePacket) \
    ( (This)->lpVtbl->GetKeepAlivePayload(This,channel,keepAlivePacket) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_Encapsulate(This,channel,packets,encapulatedPackets) \
    ( (This)->lpVtbl->Encapsulate(This,channel,packets,encapulatedPackets) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_Decapsulate(This,channel,encapBuffer,decapsulatedPackets,controlPacketsToSend) \
    ( (This)->lpVtbl->Decapsulate(This,channel,encapBuffer,decapsulatedPackets,controlPacketsToSend) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnPlugInProfile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnPlugInProfile
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPlugInProfile[] = L"Windows.Networking.Vpn.IVpnPlugInProfile";
/* [object, uuid("0EDF0DA4-4F00-4589-8D7B-4BF988F6542C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerUris )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CFoundation__CUri * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CustomConfiguration )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CustomConfiguration )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VpnPluginPackageFamilyName )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_VpnPluginPackageFamilyName )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfileVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_get_ServerUris(This,value) \
    ( (This)->lpVtbl->get_ServerUris(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_get_CustomConfiguration(This,value) \
    ( (This)->lpVtbl->get_CustomConfiguration(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_put_CustomConfiguration(This,value) \
    ( (This)->lpVtbl->put_CustomConfiguration(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_get_VpnPluginPackageFamilyName(This,value) \
    ( (This)->lpVtbl->get_VpnPluginPackageFamilyName(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_put_VpnPluginPackageFamilyName(This,value) \
    ( (This)->lpVtbl->put_VpnPluginPackageFamilyName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnPlugInProfile2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnPlugInProfile
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Vpn.IVpnProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPlugInProfile2[] = L"Windows.Networking.Vpn.IVpnPlugInProfile2";
/* [object, uuid("611C4892-CF94-4AD6-BA99-00F4FF34565E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequireVpnClientAppUI )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RequireVpnClientAppUI )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConnectionStatus )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementConnectionStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2Vtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_get_RequireVpnClientAppUI(This,value) \
    ( (This)->lpVtbl->get_RequireVpnClientAppUI(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_put_RequireVpnClientAppUI(This,value) \
    ( (This)->lpVtbl->put_RequireVpnClientAppUI(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_get_ConnectionStatus(This,value) \
    ( (This)->lpVtbl->get_ConnectionStatus(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnProfile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnProfile[] = L"Windows.Networking.Vpn.IVpnProfile";
/* [object, uuid("7875B751-B0D7-43DB-8A93-D3FE2479E56A"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProfileName )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProfileName )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppTriggers )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Routes )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DomainNameInfoList )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TrafficFilters )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RememberCredentials )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RememberCredentials )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlwaysOn )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AlwaysOn )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfileVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_get_ProfileName(This,value) \
    ( (This)->lpVtbl->get_ProfileName(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_put_ProfileName(This,value) \
    ( (This)->lpVtbl->put_ProfileName(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_get_AppTriggers(This,value) \
    ( (This)->lpVtbl->get_AppTriggers(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_get_Routes(This,value) \
    ( (This)->lpVtbl->get_Routes(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_get_DomainNameInfoList(This,value) \
    ( (This)->lpVtbl->get_DomainNameInfoList(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_get_TrafficFilters(This,value) \
    ( (This)->lpVtbl->get_TrafficFilters(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_get_RememberCredentials(This,value) \
    ( (This)->lpVtbl->get_RememberCredentials(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_put_RememberCredentials(This,value) \
    ( (This)->lpVtbl->put_RememberCredentials(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_get_AlwaysOn(This,value) \
    ( (This)->lpVtbl->get_AlwaysOn(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_put_AlwaysOn(This,value) \
    ( (This)->lpVtbl->put_AlwaysOn(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnRoute
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnRoute
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnRoute[] = L"Windows.Networking.Vpn.IVpnRoute";
/* [object, uuid("B5731B83-0969-4699-938E-7776DB29CFB3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Address )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Address )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PrefixSize )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This,
        /* [range(0, 128), in] */__RPC__in_range(0,0x80) BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PrefixSize )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_put_Address(This,value) \
    ( (This)->lpVtbl->put_Address(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_get_Address(This,value) \
    ( (This)->lpVtbl->get_Address(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_put_PrefixSize(This,value) \
    ( (This)->lpVtbl->put_PrefixSize(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_get_PrefixSize(This,value) \
    ( (This)->lpVtbl->get_PrefixSize(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnRouteAssignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnRouteAssignment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnRouteAssignment[] = L"Windows.Networking.Vpn.IVpnRouteAssignment";
/* [object, uuid("DB64DE22-CE39-4A76-9550-F61039F80E48"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Ipv4InclusionRoutes )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
        /* [in] */__RPC__in_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Ipv6InclusionRoutes )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
        /* [in] */__RPC__in_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ipv4InclusionRoutes )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ipv6InclusionRoutes )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Ipv4ExclusionRoutes )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
        /* [in] */__RPC__in_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Ipv6ExclusionRoutes )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
        /* [in] */__RPC__in_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ipv4ExclusionRoutes )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ipv6ExclusionRoutes )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ExcludeLocalSubnets )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExcludeLocalSubnets )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignmentVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_put_Ipv4InclusionRoutes(This,value) \
    ( (This)->lpVtbl->put_Ipv4InclusionRoutes(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_put_Ipv6InclusionRoutes(This,value) \
    ( (This)->lpVtbl->put_Ipv6InclusionRoutes(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_get_Ipv4InclusionRoutes(This,value) \
    ( (This)->lpVtbl->get_Ipv4InclusionRoutes(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_get_Ipv6InclusionRoutes(This,value) \
    ( (This)->lpVtbl->get_Ipv6InclusionRoutes(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_put_Ipv4ExclusionRoutes(This,value) \
    ( (This)->lpVtbl->put_Ipv4ExclusionRoutes(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_put_Ipv6ExclusionRoutes(This,value) \
    ( (This)->lpVtbl->put_Ipv6ExclusionRoutes(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_get_Ipv4ExclusionRoutes(This,value) \
    ( (This)->lpVtbl->get_Ipv4ExclusionRoutes(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_get_Ipv6ExclusionRoutes(This,value) \
    ( (This)->lpVtbl->get_Ipv6ExclusionRoutes(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_put_ExcludeLocalSubnets(This,value) \
    ( (This)->lpVtbl->put_ExcludeLocalSubnets(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_get_ExcludeLocalSubnets(This,value) \
    ( (This)->lpVtbl->get_ExcludeLocalSubnets(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnRouteFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnRouteFactory[] = L"Windows.Networking.Vpn.IVpnRouteFactory";
/* [object, uuid("BDEAB5FF-45CF-4B99-83FB-DB3BC2672B02"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateVpnRoute )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * address,
        /* [range(0, 128), in] */__RPC__in_range(0,0x80) BYTE prefixSize,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * * route
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactoryVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_CreateVpnRoute(This,address,prefixSize,route) \
    ( (This)->lpVtbl->CreateVpnRoute(This,address,prefixSize,route) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnSystemHealth
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnSystemHealth
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnSystemHealth[] = L"Windows.Networking.Vpn.IVpnSystemHealth";
/* [object, uuid("99A8F8AF-C0EE-4E75-817A-F231AEE5123D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealthVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StatementOfHealth )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealthVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealthVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_get_StatementOfHealth(This,value) \
    ( (This)->lpVtbl->get_StatementOfHealth(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnTrafficFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnTrafficFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnTrafficFilter[] = L"Windows.Networking.Vpn.IVpnTrafficFilter";
/* [object, uuid("2F691B60-6C9F-47F5-AC36-BB1B042E2C50"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppId )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AppId )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppClaims )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Protocol )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnIPProtocol * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Protocol )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CVpn_CVpnIPProtocol value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalPortRanges )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemotePortRanges )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalAddressRanges )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteAddressRanges )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RoutingPolicyType )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnRoutingPolicyType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RoutingPolicyType )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CVpn_CVpnRoutingPolicyType value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_get_AppId(This,value) \
    ( (This)->lpVtbl->get_AppId(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_put_AppId(This,value) \
    ( (This)->lpVtbl->put_AppId(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_get_AppClaims(This,value) \
    ( (This)->lpVtbl->get_AppClaims(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_get_Protocol(This,value) \
    ( (This)->lpVtbl->get_Protocol(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_put_Protocol(This,value) \
    ( (This)->lpVtbl->put_Protocol(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_get_LocalPortRanges(This,value) \
    ( (This)->lpVtbl->get_LocalPortRanges(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_get_RemotePortRanges(This,value) \
    ( (This)->lpVtbl->get_RemotePortRanges(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_get_LocalAddressRanges(This,value) \
    ( (This)->lpVtbl->get_LocalAddressRanges(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_get_RemoteAddressRanges(This,value) \
    ( (This)->lpVtbl->get_RemoteAddressRanges(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_get_RoutingPolicyType(This,value) \
    ( (This)->lpVtbl->get_RoutingPolicyType(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_put_RoutingPolicyType(This,value) \
    ( (This)->lpVtbl->put_RoutingPolicyType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnTrafficFilterAssignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnTrafficFilterAssignment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnTrafficFilterAssignment[] = L"Windows.Networking.Vpn.IVpnTrafficFilterAssignment";
/* [object, uuid("56CCD45C-E664-471E-89CD-601603B9E0F3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TrafficFilterList )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllowOutbound )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AllowOutbound )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllowInbound )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AllowInbound )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignmentVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_get_TrafficFilterList(This,value) \
    ( (This)->lpVtbl->get_TrafficFilterList(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_get_AllowOutbound(This,value) \
    ( (This)->lpVtbl->get_AllowOutbound(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_put_AllowOutbound(This,value) \
    ( (This)->lpVtbl->put_AllowOutbound(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_get_AllowInbound(This,value) \
    ( (This)->lpVtbl->get_AllowInbound(This,value) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_put_AllowInbound(This,value) \
    ( (This)->lpVtbl->put_AllowInbound(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Vpn.IVpnTrafficFilterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Vpn.VpnTrafficFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnTrafficFilterFactory[] = L"Windows.Networking.Vpn.IVpnTrafficFilterFactory";
/* [object, uuid("480D41D5-7F99-474C-86EE-96DF168318F1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * appId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactoryVtbl;

interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_Create(This,appId,result) \
    ( (This)->lpVtbl->Create(This,appId,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnAppId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Vpn.IVpnAppIdFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnAppId ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnAppId_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnAppId_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnAppId[] = L"Windows.Networking.Vpn.VpnAppId";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnChannel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Vpn.IVpnChannelStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnChannel ** Default Interface **
 *    Windows.Networking.Vpn.IVpnChannel2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnChannel_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnChannel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnChannel[] = L"Windows.Networking.Vpn.VpnChannel";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnChannelActivityEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnChannelActivityEventArgs ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnChannelActivityEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnChannelActivityEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnChannelActivityEventArgs[] = L"Windows.Networking.Vpn.VpnChannelActivityEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnChannelActivityStateChangedArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnChannelActivityStateChangedArgs ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnChannelActivityStateChangedArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnChannelActivityStateChangedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnChannelActivityStateChangedArgs[] = L"Windows.Networking.Vpn.VpnChannelActivityStateChangedArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnChannelConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnChannelConfiguration ** Default Interface **
 *    Windows.Networking.Vpn.IVpnChannelConfiguration2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnChannelConfiguration_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnChannelConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnChannelConfiguration[] = L"Windows.Networking.Vpn.VpnChannelConfiguration";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCredential
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCredential ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCredential_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCredential_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCredential[] = L"Windows.Networking.Vpn.VpnCredential";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCustomCheckBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCustomCheckBox ** Default Interface **
 *    Windows.Networking.Vpn.IVpnCustomPrompt
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomCheckBox_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomCheckBox_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomCheckBox[] = L"Windows.Networking.Vpn.VpnCustomCheckBox";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCustomComboBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCustomComboBox ** Default Interface **
 *    Windows.Networking.Vpn.IVpnCustomPrompt
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomComboBox_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomComboBox_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomComboBox[] = L"Windows.Networking.Vpn.VpnCustomComboBox";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCustomEditBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCustomEditBox ** Default Interface **
 *    Windows.Networking.Vpn.IVpnCustomPrompt
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomEditBox_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomEditBox_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomEditBox[] = L"Windows.Networking.Vpn.VpnCustomEditBox";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCustomErrorBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCustomErrorBox ** Default Interface **
 *    Windows.Networking.Vpn.IVpnCustomPrompt
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomErrorBox_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomErrorBox_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomErrorBox[] = L"Windows.Networking.Vpn.VpnCustomErrorBox";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCustomPromptBooleanInput
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCustomPromptBooleanInput ** Default Interface **
 *    Windows.Networking.Vpn.IVpnCustomPromptElement
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomPromptBooleanInput_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomPromptBooleanInput_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomPromptBooleanInput[] = L"Windows.Networking.Vpn.VpnCustomPromptBooleanInput";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCustomPromptOptionSelector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCustomPromptOptionSelector ** Default Interface **
 *    Windows.Networking.Vpn.IVpnCustomPromptElement
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomPromptOptionSelector_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomPromptOptionSelector_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomPromptOptionSelector[] = L"Windows.Networking.Vpn.VpnCustomPromptOptionSelector";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCustomPromptText
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCustomPromptText ** Default Interface **
 *    Windows.Networking.Vpn.IVpnCustomPromptElement
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomPromptText_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomPromptText_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomPromptText[] = L"Windows.Networking.Vpn.VpnCustomPromptText";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCustomPromptTextInput
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCustomPromptTextInput ** Default Interface **
 *    Windows.Networking.Vpn.IVpnCustomPromptElement
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomPromptTextInput_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomPromptTextInput_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomPromptTextInput[] = L"Windows.Networking.Vpn.VpnCustomPromptTextInput";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnCustomTextBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnCustomTextBox ** Default Interface **
 *    Windows.Networking.Vpn.IVpnCustomPrompt
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomTextBox_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnCustomTextBox_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomTextBox[] = L"Windows.Networking.Vpn.VpnCustomTextBox";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnDomainNameAssignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnDomainNameAssignment ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnDomainNameAssignment_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnDomainNameAssignment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnDomainNameAssignment[] = L"Windows.Networking.Vpn.VpnDomainNameAssignment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnDomainNameInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Vpn.IVpnDomainNameInfoFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnDomainNameInfo ** Default Interface **
 *    Windows.Networking.Vpn.IVpnDomainNameInfo2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnDomainNameInfo_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnDomainNameInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnDomainNameInfo[] = L"Windows.Networking.Vpn.VpnDomainNameInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnInterfaceId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Vpn.IVpnInterfaceIdFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnInterfaceId ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnInterfaceId_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnInterfaceId_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnInterfaceId[] = L"Windows.Networking.Vpn.VpnInterfaceId";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnManagementAgent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnManagementAgent ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnManagementAgent_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnManagementAgent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnManagementAgent[] = L"Windows.Networking.Vpn.VpnManagementAgent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnNamespaceAssignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnNamespaceAssignment ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnNamespaceAssignment_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnNamespaceAssignment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnNamespaceAssignment[] = L"Windows.Networking.Vpn.VpnNamespaceAssignment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnNamespaceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Vpn.IVpnNamespaceInfoFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnNamespaceInfo ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnNamespaceInfo_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnNamespaceInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnNamespaceInfo[] = L"Windows.Networking.Vpn.VpnNamespaceInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnNativeProfile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnNativeProfile ** Default Interface **
 *    Windows.Networking.Vpn.IVpnProfile
 *    Windows.Networking.Vpn.IVpnNativeProfile2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnNativeProfile_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnNativeProfile_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnNativeProfile[] = L"Windows.Networking.Vpn.VpnNativeProfile";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnPacketBuffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Vpn.IVpnPacketBufferFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnPacketBuffer ** Default Interface **
 *    Windows.Networking.Vpn.IVpnPacketBuffer2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnPacketBuffer_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnPacketBuffer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnPacketBuffer[] = L"Windows.Networking.Vpn.VpnPacketBuffer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnPacketBufferList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnPacketBufferList ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.Networking.Vpn.VpnPacketBuffer
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnPacketBufferList_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnPacketBufferList_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnPacketBufferList[] = L"Windows.Networking.Vpn.VpnPacketBufferList";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnPickedCredential
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnPickedCredential ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnPickedCredential_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnPickedCredential_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnPickedCredential[] = L"Windows.Networking.Vpn.VpnPickedCredential";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnPlugInProfile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnPlugInProfile ** Default Interface **
 *    Windows.Networking.Vpn.IVpnProfile
 *    Windows.Networking.Vpn.IVpnPlugInProfile2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnPlugInProfile_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnPlugInProfile_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnPlugInProfile[] = L"Windows.Networking.Vpn.VpnPlugInProfile";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnRoute
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Vpn.IVpnRouteFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnRoute ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnRoute_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnRoute_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnRoute[] = L"Windows.Networking.Vpn.VpnRoute";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnRouteAssignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnRouteAssignment ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnRouteAssignment_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnRouteAssignment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnRouteAssignment[] = L"Windows.Networking.Vpn.VpnRouteAssignment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnSystemHealth
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnSystemHealth ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnSystemHealth_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnSystemHealth_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnSystemHealth[] = L"Windows.Networking.Vpn.VpnSystemHealth";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnTrafficFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Vpn.IVpnTrafficFilterFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnTrafficFilter ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnTrafficFilter_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnTrafficFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnTrafficFilter[] = L"Windows.Networking.Vpn.VpnTrafficFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Vpn.VpnTrafficFilterAssignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Vpn.IVpnTrafficFilterAssignment ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Vpn_VpnTrafficFilterAssignment_DEFINED
#define RUNTIMECLASS_Windows_Networking_Vpn_VpnTrafficFilterAssignment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnTrafficFilterAssignment[] = L"Windows.Networking.Vpn.VpnTrafficFilterAssignment";
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
#endif // __windows2Enetworking2Evpn_p_h__

#endif // __windows2Enetworking2Evpn_h__
