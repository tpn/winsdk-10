/* Header file automatically generated from windows.system.remotesystems.idl */
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
#ifndef __windows2Esystem2Eremotesystems_h__
#define __windows2Esystem2Eremotesystems_h__
#ifndef __windows2Esystem2Eremotesystems_p_h__
#define __windows2Esystem2Eremotesystems_p_h__


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
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IKnownRemoteSystemCapabilitiesStatics;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics ABI::Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystem;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem ABI::Windows::System::RemoteSystems::IRemoteSystem

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystem2;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 ABI::Windows::System::RemoteSystems::IRemoteSystem2

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystem3;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 ABI::Windows::System::RemoteSystems::IRemoteSystem3

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemAddedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs ABI::Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemAuthorizationKindFilter;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter ABI::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemAuthorizationKindFilterFactory;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory ABI::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemConnectionRequest;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest ABI::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemConnectionRequestFactory;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory ABI::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemDiscoveryTypeFilter;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter ABI::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemDiscoveryTypeFilterFactory;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory ABI::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemFilter;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter ABI::Windows::System::RemoteSystems::IRemoteSystemFilter

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemKindFilter;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter ABI::Windows::System::RemoteSystems::IRemoteSystemKindFilter

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemKindFilterFactory;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory ABI::Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemKindStatics;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics ABI::Windows::System::RemoteSystems::IRemoteSystemKindStatics

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemKindStatics2;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 ABI::Windows::System::RemoteSystems::IRemoteSystemKindStatics2

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemRemovedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs ABI::Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSession;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession ABI::Windows::System::RemoteSystems::IRemoteSystemSession

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionAddedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs ABI::Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionController;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController ABI::Windows::System::RemoteSystems::IRemoteSystemSessionController

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionControllerFactory;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory ABI::Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionCreationResult;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult ABI::Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionDisconnectedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs ABI::Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionInfo;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInfo

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionInvitation;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInvitation

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionInvitationListener;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionInvitationReceivedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionJoinRequest;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest ABI::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionJoinRequestedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs ABI::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionJoinResult;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult ABI::Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionMessageChannel;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel ABI::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionMessageChannelFactory;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory ABI::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionOptions;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions ABI::Windows::System::RemoteSystems::IRemoteSystemSessionOptions

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionParticipant;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionParticipantAddedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionParticipantRemovedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionParticipantWatcher;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionRemovedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs ABI::Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionStatics;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics ABI::Windows::System::RemoteSystems::IRemoteSystemSessionStatics

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionUpdatedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs ABI::Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionValueSetReceivedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs ABI::Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSessionWatcher;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher ABI::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemStatics;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics ABI::Windows::System::RemoteSystems::IRemoteSystemStatics

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemStatics2;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2 ABI::Windows::System::RemoteSystems::IRemoteSystemStatics2

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemStatusTypeFilter;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter ABI::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemStatusTypeFilterFactory;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory ABI::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemUpdatedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs ABI::Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemWatcher;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher ABI::Windows::System::RemoteSystems::IRemoteSystemWatcher

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_USE
#define DEF___FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6a2c5aef-9f30-58ae-a6cb-9ac9c8092a41"))
IIterator<ABI::Windows::System::RemoteSystems::IRemoteSystemFilter*> : IIterator_impl<ABI::Windows::System::RemoteSystems::IRemoteSystemFilter*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.System.RemoteSystems.IRemoteSystemFilter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::System::RemoteSystems::IRemoteSystemFilter*> __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_t;
#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::System::RemoteSystems::IRemoteSystemFilter*>
//#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::System::RemoteSystems::IRemoteSystemFilter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_USE
#define DEF___FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("13966c92-a8de-50c0-b16b-00c2c48f5f37"))
IIterable<ABI::Windows::System::RemoteSystems::IRemoteSystemFilter*> : IIterable_impl<ABI::Windows::System::RemoteSystems::IRemoteSystemFilter*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.System.RemoteSystems.IRemoteSystemFilter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::System::RemoteSystems::IRemoteSystemFilter*> __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_t;
#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::System::RemoteSystems::IRemoteSystemFilter*>
//#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::System::RemoteSystems::IRemoteSystemFilter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionParticipant;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_USE
#define DEF___FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("05fec44b-3dd9-5cf1-a100-bedc9233292d"))
IIterator<ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipant*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipant*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.System.RemoteSystems.RemoteSystemSessionParticipant>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipant*> __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_t;
#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant*>
//#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_USE
#define DEF___FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("00189d10-16ec-5d1a-8369-4870c69e52b3"))
IIterable<ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipant*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipant*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.System.RemoteSystems.RemoteSystemSessionParticipant>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipant*> __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_t;
#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant*>
//#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystem;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3a0b522d-98d0-5d34-ace6-2c7346613f1d"))
IAsyncOperationCompletedHandler<ABI::Windows::System::RemoteSystems::RemoteSystem*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystem*, ABI::Windows::System::RemoteSystems::IRemoteSystem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.System.RemoteSystems.RemoteSystem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::System::RemoteSystems::RemoteSystem*> __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::System::RemoteSystems::IRemoteSystem*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::System::RemoteSystems::IRemoteSystem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_USE
#define DEF___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0d39f546-0eca-5236-a5ca-7e3660658462"))
IAsyncOperation<ABI::Windows::System::RemoteSystems::RemoteSystem*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystem*, ABI::Windows::System::RemoteSystems::IRemoteSystem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.System.RemoteSystems.RemoteSystem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::System::RemoteSystems::RemoteSystem*> __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_t;
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::System::RemoteSystems::IRemoteSystem*>
//#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::System::RemoteSystems::IRemoteSystem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                enum RemoteSystemAccessStatus : int;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("543a221d-ef39-57f5-9741-b052dbc29249"))
IAsyncOperationCompletedHandler<enum ABI::Windows::System::RemoteSystems::RemoteSystemAccessStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::System::RemoteSystems::RemoteSystemAccessStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.System.RemoteSystems.RemoteSystemAccessStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::System::RemoteSystems::RemoteSystemAccessStatus> __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::System::RemoteSystems::RemoteSystemAccessStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::System::RemoteSystems::RemoteSystemAccessStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d76da678-dd76-5460-8745-915b4410c905"))
IAsyncOperation<enum ABI::Windows::System::RemoteSystems::RemoteSystemAccessStatus> : IAsyncOperation_impl<enum ABI::Windows::System::RemoteSystems::RemoteSystemAccessStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.System.RemoteSystems.RemoteSystemAccessStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::System::RemoteSystems::RemoteSystemAccessStatus> __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_t;
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::System::RemoteSystems::RemoteSystemAccessStatus>
//#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::System::RemoteSystems::RemoteSystemAccessStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_USE */



namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionCreationResult;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6e72c549-73aa-5168-8560-c7236493b504"))
IAsyncOperationCompletedHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionCreationResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionCreationResult*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.System.RemoteSystems.RemoteSystemSessionCreationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionCreationResult*> __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_USE
#define DEF___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("90364bf5-d084-5f50-9729-82025326abef"))
IAsyncOperation<ABI::Windows::System::RemoteSystems::RemoteSystemSessionCreationResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionCreationResult*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.System.RemoteSystems.RemoteSystemSessionCreationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::System::RemoteSystems::RemoteSystemSessionCreationResult*> __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_t;
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult*>
//#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionJoinResult;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("379adf35-4cb4-522f-91be-913b5690568f"))
IAsyncOperationCompletedHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionJoinResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionJoinResult*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.System.RemoteSystems.RemoteSystemSessionJoinResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionJoinResult*> __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_USE
#define DEF___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c58dbd1e-e300-55a8-ada5-e25aaaa86667"))
IAsyncOperation<ABI::Windows::System::RemoteSystems::RemoteSystemSessionJoinResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionJoinResult*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.System.RemoteSystems.RemoteSystemSessionJoinResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::System::RemoteSystems::RemoteSystemSessionJoinResult*> __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_t;
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult*>
//#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSession;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionDisconnectedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fba14773-5038-511a-95a3-4ba45349100a"))
ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSession*,ABI::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSession*, ABI::Windows::System::RemoteSystems::IRemoteSystemSession*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.System.RemoteSystems.RemoteSystemSession, Windows.System.RemoteSystems.RemoteSystemSessionDisconnectedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSession*,ABI::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs*> __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSession*,ABI::Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSession*,ABI::Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionController;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionJoinRequestedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d8e04916-b452-5322-aec9-e3d4d581c772"))
ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionController*,ABI::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionController*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionController*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.System.RemoteSystems.RemoteSystemSessionController, Windows.System.RemoteSystems.RemoteSystemSessionJoinRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionController*,ABI::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs*> __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionController*,ABI::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionController*,ABI::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionInvitationListener;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionInvitationReceivedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("18a242bb-d338-56c4-9559-568d5c2c3e93"))
ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener*,ABI::Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.System.RemoteSystems.RemoteSystemSessionInvitationListener, Windows.System.RemoteSystems.RemoteSystemSessionInvitationReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener*,ABI::Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs*> __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener*,ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener*,ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionMessageChannel;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionValueSetReceivedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c476232d-8c76-5ba6-99f5-14557484c20d"))
ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel*,ABI::Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.System.RemoteSystems.RemoteSystemSessionMessageChannel, Windows.System.RemoteSystems.RemoteSystemSessionValueSetReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel*,ABI::Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs*> __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel*,ABI::Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel*,ABI::Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionParticipantWatcher;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d4cf5bda-cc7a-52ef-a256-c4b36163beec"))
ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.System.RemoteSystems.RemoteSystemSessionParticipantWatcher, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher*,IInspectable*> __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionParticipantAddedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7d42fff3-fd21-5e15-b21a-75e1bbcd13c7"))
ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher*,ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.System.RemoteSystems.RemoteSystemSessionParticipantWatcher, Windows.System.RemoteSystems.RemoteSystemSessionParticipantAddedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher*,ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs*> __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher*,ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher*,ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionParticipantRemovedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("73d7e8b3-7d44-50c8-afad-450de59fd0ae"))
ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher*,ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.System.RemoteSystems.RemoteSystemSessionParticipantWatcher, Windows.System.RemoteSystems.RemoteSystemSessionParticipantRemovedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher*,ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs*> __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher*,ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher*,ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionWatcher;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionAddedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1b036c4f-6b8f-55d6-b6df-45e46a823b1d"))
ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionWatcher*,ABI::Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionWatcher*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.System.RemoteSystems.RemoteSystemSessionWatcher, Windows.System.RemoteSystems.RemoteSystemSessionAddedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionWatcher*,ABI::Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs*> __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher*,ABI::Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher*,ABI::Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionRemovedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1cbc54f0-0c9d-59cc-8055-5e017a317812"))
ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionWatcher*,ABI::Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionWatcher*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.System.RemoteSystems.RemoteSystemSessionWatcher, Windows.System.RemoteSystems.RemoteSystemSessionRemovedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionWatcher*,ABI::Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs*> __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher*,ABI::Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher*,ABI::Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionUpdatedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("040f48b7-0d41-5aa2-85e8-6311666f0324"))
ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionWatcher*,ABI::Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionWatcher*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs*, ABI::Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.System.RemoteSystems.RemoteSystemSessionWatcher, Windows.System.RemoteSystems.RemoteSystemSessionUpdatedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemSessionWatcher*,ABI::Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs*> __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher*,ABI::Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher*,ABI::Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemWatcher;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemAddedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a9b98f4a-b63d-5d07-92bb-e2acb39455d1"))
ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemWatcher*,ABI::Windows::System::RemoteSystems::RemoteSystemAddedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemWatcher*, ABI::Windows::System::RemoteSystems::IRemoteSystemWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemAddedEventArgs*, ABI::Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.System.RemoteSystems.RemoteSystemWatcher, Windows.System.RemoteSystems.RemoteSystemAddedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemWatcher*,ABI::Windows::System::RemoteSystems::RemoteSystemAddedEventArgs*> __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemWatcher*,ABI::Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemWatcher*,ABI::Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemRemovedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c290fb5a-3ed0-5858-af19-f85553cb96b8"))
ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemWatcher*,ABI::Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemWatcher*, ABI::Windows::System::RemoteSystems::IRemoteSystemWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs*, ABI::Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.System.RemoteSystems.RemoteSystemWatcher, Windows.System.RemoteSystems.RemoteSystemRemovedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemWatcher*,ABI::Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs*> __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemWatcher*,ABI::Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemWatcher*,ABI::Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemUpdatedEventArgs;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("88f9d23f-8946-5a1e-8da1-82c66982a6d2"))
ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemWatcher*,ABI::Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemWatcher*, ABI::Windows::System::RemoteSystems::IRemoteSystemWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs*, ABI::Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.System.RemoteSystems.RemoteSystemWatcher, Windows.System.RemoteSystems.RemoteSystemUpdatedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::System::RemoteSystems::RemoteSystemWatcher*,ABI::Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs*> __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemWatcher*,ABI::Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::System::RemoteSystems::IRemoteSystemWatcher*,ABI::Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


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
        namespace System {
            namespace RemoteSystems {
                
                typedef enum RemoteSystemAccessStatus : int RemoteSystemAccessStatus;
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                
                typedef enum RemoteSystemAuthorizationKind : int RemoteSystemAuthorizationKind;
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                
                typedef enum RemoteSystemDiscoveryType : int RemoteSystemDiscoveryType;
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                
                typedef enum RemoteSystemSessionCreationStatus : int RemoteSystemSessionCreationStatus;
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                
                typedef enum RemoteSystemSessionDisconnectedReason : int RemoteSystemSessionDisconnectedReason;
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                
                typedef enum RemoteSystemSessionJoinStatus : int RemoteSystemSessionJoinStatus;
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                
                typedef enum RemoteSystemSessionMessageChannelReliability : int RemoteSystemSessionMessageChannelReliability;
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                
                typedef enum RemoteSystemSessionParticipantWatcherStatus : int RemoteSystemSessionParticipantWatcherStatus;
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                
                typedef enum RemoteSystemSessionWatcherStatus : int RemoteSystemSessionWatcherStatus;
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                
                typedef enum RemoteSystemStatus : int RemoteSystemStatus;
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                
                typedef enum RemoteSystemStatusType : int RemoteSystemStatusType;
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */




















































namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemAuthorizationKindFilter;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemConnectionRequest;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemDiscoveryTypeFilter;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemKindFilter;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */









namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionInfo;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionInvitation;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionJoinRequest;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSessionOptions;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */










namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemStatusTypeFilter;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */












/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemAccessStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [v1_enum, contract] */
                enum RemoteSystemAccessStatus : int
                {
                    RemoteSystemAccessStatus_Unspecified = 0,
                    RemoteSystemAccessStatus_Allowed = 1,
                    RemoteSystemAccessStatus_DeniedByUser = 2,
                    RemoteSystemAccessStatus_DeniedBySystem = 3,
                };
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemAuthorizationKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [v1_enum, contract] */
                enum RemoteSystemAuthorizationKind : int
                {
                    RemoteSystemAuthorizationKind_SameUser = 0,
                    RemoteSystemAuthorizationKind_Anonymous = 1,
                };
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemDiscoveryType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [v1_enum, contract] */
                enum RemoteSystemDiscoveryType : int
                {
                    RemoteSystemDiscoveryType_Any = 0,
                    RemoteSystemDiscoveryType_Proximal = 1,
                    RemoteSystemDiscoveryType_Cloud = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
                    RemoteSystemDiscoveryType_SpatiallyProximal = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
                };
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemSessionCreationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [v1_enum, contract] */
                enum RemoteSystemSessionCreationStatus : int
                {
                    RemoteSystemSessionCreationStatus_Success = 0,
                    RemoteSystemSessionCreationStatus_SessionLimitsExceeded = 1,
                    RemoteSystemSessionCreationStatus_OperationAborted = 2,
                };
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemSessionDisconnectedReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [v1_enum, contract] */
                enum RemoteSystemSessionDisconnectedReason : int
                {
                    RemoteSystemSessionDisconnectedReason_SessionUnavailable = 0,
                    RemoteSystemSessionDisconnectedReason_RemovedByController = 1,
                    RemoteSystemSessionDisconnectedReason_SessionClosed = 2,
                };
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemSessionJoinStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [v1_enum, contract] */
                enum RemoteSystemSessionJoinStatus : int
                {
                    RemoteSystemSessionJoinStatus_Success = 0,
                    RemoteSystemSessionJoinStatus_SessionLimitsExceeded = 1,
                    RemoteSystemSessionJoinStatus_OperationAborted = 2,
                    RemoteSystemSessionJoinStatus_SessionUnavailable = 3,
                    RemoteSystemSessionJoinStatus_RejectedByController = 4,
                };
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemSessionMessageChannelReliability
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [v1_enum, contract] */
                enum RemoteSystemSessionMessageChannelReliability : int
                {
                    RemoteSystemSessionMessageChannelReliability_Reliable = 0,
                    RemoteSystemSessionMessageChannelReliability_Unreliable = 1,
                };
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemSessionParticipantWatcherStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [v1_enum, contract] */
                enum RemoteSystemSessionParticipantWatcherStatus : int
                {
                    RemoteSystemSessionParticipantWatcherStatus_Created = 0,
                    RemoteSystemSessionParticipantWatcherStatus_Started = 1,
                    RemoteSystemSessionParticipantWatcherStatus_EnumerationCompleted = 2,
                    RemoteSystemSessionParticipantWatcherStatus_Stopping = 3,
                    RemoteSystemSessionParticipantWatcherStatus_Stopped = 4,
                    RemoteSystemSessionParticipantWatcherStatus_Aborted = 5,
                };
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemSessionWatcherStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [v1_enum, contract] */
                enum RemoteSystemSessionWatcherStatus : int
                {
                    RemoteSystemSessionWatcherStatus_Created = 0,
                    RemoteSystemSessionWatcherStatus_Started = 1,
                    RemoteSystemSessionWatcherStatus_EnumerationCompleted = 2,
                    RemoteSystemSessionWatcherStatus_Stopping = 3,
                    RemoteSystemSessionWatcherStatus_Stopped = 4,
                    RemoteSystemSessionWatcherStatus_Aborted = 5,
                };
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [v1_enum, contract] */
                enum RemoteSystemStatus : int
                {
                    RemoteSystemStatus_Unavailable = 0,
                    RemoteSystemStatus_DiscoveringAvailability = 1,
                    RemoteSystemStatus_Available = 2,
                    RemoteSystemStatus_Unknown = 3,
                };
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemStatusType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [v1_enum, contract] */
                enum RemoteSystemStatusType : int
                {
                    RemoteSystemStatusType_Any = 0,
                    RemoteSystemStatusType_Available = 1,
                };
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IKnownRemoteSystemCapabilitiesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.KnownRemoteSystemCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IKnownRemoteSystemCapabilitiesStatics[] = L"Windows.System.RemoteSystems.IKnownRemoteSystemCapabilitiesStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("8108E380-7F8A-44E4-92CD-03B6469B94A3"), exclusiveto, contract] */
                MIDL_INTERFACE("8108E380-7F8A-44E4-92CD-03B6469B94A3")
                IKnownRemoteSystemCapabilitiesStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppService(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LaunchUri(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteSession(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpatialEntity(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IKnownRemoteSystemCapabilitiesStatics=_uuidof(IKnownRemoteSystemCapabilitiesStatics);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystem[] = L"Windows.System.RemoteSystems.IRemoteSystem";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("ED5838CD-1E10-4A8C-B4A6-4E5FD6F97721"), exclusiveto, contract] */
                MIDL_INTERFACE("ED5838CD-1E10-4A8C-B4A6-4E5FD6F97721")
                IRemoteSystem : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::System::RemoteSystems::RemoteSystemStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAvailableByProximity(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystem=_uuidof(IRemoteSystem);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystem2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystem2[] = L"Windows.System.RemoteSystems.IRemoteSystem2";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("09DFE4EC-FB8B-4A08-A758-6876435D769E"), exclusiveto, contract] */
                MIDL_INTERFACE("09DFE4EC-FB8B-4A08-A758-6876435D769E")
                IRemoteSystem2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAvailableBySpatialProximity(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCapabilitySupportedAsync(
                        /* [in] */__RPC__in HSTRING capabilityName,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystem2=_uuidof(IRemoteSystem2);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystem3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystem3[] = L"Windows.System.RemoteSystems.IRemoteSystem3";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("72B4B495-B7C6-40BE-831B-73562F12FFA8"), exclusiveto, contract] */
                MIDL_INTERFACE("72B4B495-B7C6-40BE-831B-73562F12FFA8")
                IRemoteSystem3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ManufacturerDisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ModelDisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystem3=_uuidof(IRemoteSystem3);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemAddedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemAddedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemAddedEventArgs";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("8F39560F-E534-4697-8836-7ABEA151516E"), exclusiveto, contract] */
                MIDL_INTERFACE("8F39560F-E534-4697-8836-7ABEA151516E")
                IRemoteSystemAddedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteSystem(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystem * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemAddedEventArgs=_uuidof(IRemoteSystemAddedEventArgs);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemAuthorizationKindFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemAuthorizationKindFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemAuthorizationKindFilter[] = L"Windows.System.RemoteSystems.IRemoteSystemAuthorizationKindFilter";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("6B0DDE8E-04D0-40F4-A27F-C2ACBBD6B734"), exclusiveto, contract] */
                MIDL_INTERFACE("6B0DDE8E-04D0-40F4-A27F-C2ACBBD6B734")
                IRemoteSystemAuthorizationKindFilter : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteSystemAuthorizationKind(
                        /* [retval, out] */__RPC__out ABI::Windows::System::RemoteSystems::RemoteSystemAuthorizationKind * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemAuthorizationKindFilter=_uuidof(IRemoteSystemAuthorizationKindFilter);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemAuthorizationKindFilterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemAuthorizationKindFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemAuthorizationKindFilterFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemAuthorizationKindFilterFactory";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("AD65DF4D-B66A-45A4-8177-8CAED75D9E5A"), exclusiveto, contract] */
                MIDL_INTERFACE("AD65DF4D-B66A-45A4-8177-8CAED75D9E5A")
                IRemoteSystemAuthorizationKindFilterFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */ABI::Windows::System::RemoteSystems::RemoteSystemAuthorizationKind remoteSystemAuthorizationKind,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemAuthorizationKindFilterFactory=_uuidof(IRemoteSystemAuthorizationKindFilterFactory);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemConnectionRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemConnectionRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemConnectionRequest[] = L"Windows.System.RemoteSystems.IRemoteSystemConnectionRequest";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("84ED4104-8D5E-4D72-8238-7621576C7A67"), exclusiveto, contract] */
                MIDL_INTERFACE("84ED4104-8D5E-4D72-8238-7621576C7A67")
                IRemoteSystemConnectionRequest : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteSystem(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystem * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemConnectionRequest=_uuidof(IRemoteSystemConnectionRequest);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemConnectionRequestFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemConnectionRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemConnectionRequestFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemConnectionRequestFactory";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("AA0A0A20-BAEB-4575-B530-810BB9786334"), exclusiveto, contract] */
                MIDL_INTERFACE("AA0A0A20-BAEB-4575-B530-810BB9786334")
                IRemoteSystemConnectionRequestFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::System::RemoteSystems::IRemoteSystem * remoteSystem,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemConnectionRequestFactory=_uuidof(IRemoteSystemConnectionRequestFactory);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemDiscoveryTypeFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemDiscoveryTypeFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemDiscoveryTypeFilter[] = L"Windows.System.RemoteSystems.IRemoteSystemDiscoveryTypeFilter";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("42D9041F-EE5A-43DA-AC6A-6FEE25460741"), exclusiveto, contract] */
                MIDL_INTERFACE("42D9041F-EE5A-43DA-AC6A-6FEE25460741")
                IRemoteSystemDiscoveryTypeFilter : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteSystemDiscoveryType(
                        /* [retval, out] */__RPC__out ABI::Windows::System::RemoteSystems::RemoteSystemDiscoveryType * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemDiscoveryTypeFilter=_uuidof(IRemoteSystemDiscoveryTypeFilter);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemDiscoveryTypeFilterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemDiscoveryTypeFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemDiscoveryTypeFilterFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemDiscoveryTypeFilterFactory";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("9F9EB993-C260-4161-92F2-9C021F23FE5D"), exclusiveto, contract] */
                MIDL_INTERFACE("9F9EB993-C260-4161-92F2-9C021F23FE5D")
                IRemoteSystemDiscoveryTypeFilterFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */ABI::Windows::System::RemoteSystems::RemoteSystemDiscoveryType discoveryType,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemDiscoveryTypeFilterFactory=_uuidof(IRemoteSystemDiscoveryTypeFilterFactory);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemFilter[] = L"Windows.System.RemoteSystems.IRemoteSystemFilter";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("4A3BA9E4-99EB-45EB-BA16-0367728FF374"), contract] */
                MIDL_INTERFACE("4A3BA9E4-99EB-45EB-BA16-0367728FF374")
                IRemoteSystemFilter : IInspectable
                {
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemFilter=_uuidof(IRemoteSystemFilter);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemKindFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemKindFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemKindFilter[] = L"Windows.System.RemoteSystems.IRemoteSystemKindFilter";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("38E1C9EC-22C3-4EF6-901A-BBB1C7AAD4ED"), exclusiveto, contract] */
                MIDL_INTERFACE("38E1C9EC-22C3-4EF6-901A-BBB1C7AAD4ED")
                IRemoteSystemKindFilter : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteSystemKinds(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemKindFilter=_uuidof(IRemoteSystemKindFilter);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemKindFilterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemKindFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemKindFilterFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemKindFilterFactory";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("A1FB18EE-99EA-40BC-9A39-C670AA804A28"), exclusiveto, contract] */
                MIDL_INTERFACE("A1FB18EE-99EA-40BC-9A39-C670AA804A28")
                IRemoteSystemKindFilterFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * remoteSystemKinds,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemKindFilter * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemKindFilterFactory=_uuidof(IRemoteSystemKindFilterFactory);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemKindStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemKinds
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemKindStatics[] = L"Windows.System.RemoteSystems.IRemoteSystemKindStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("F6317633-AB14-41D0-9553-796AADB882DB"), exclusiveto, contract] */
                MIDL_INTERFACE("F6317633-AB14-41D0-9553-796AADB882DB")
                IRemoteSystemKindStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Phone(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Hub(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Holographic(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Desktop(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Xbox(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemKindStatics=_uuidof(IRemoteSystemKindStatics);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemKindStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemKinds
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemKindStatics2[] = L"Windows.System.RemoteSystems.IRemoteSystemKindStatics2";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("B9E3A3D0-0466-4749-91E8-65F9D19A96A5"), exclusiveto, contract] */
                MIDL_INTERFACE("B9E3A3D0-0466-4749-91E8-65F9D19A96A5")
                IRemoteSystemKindStatics2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Iot(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Tablet(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Laptop(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemKindStatics2=_uuidof(IRemoteSystemKindStatics2);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemRemovedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemRemovedEventArgs";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("8B3D16BB-7306-49EA-B7DF-67D5714CB013"), exclusiveto, contract] */
                MIDL_INTERFACE("8B3D16BB-7306-49EA-B7DF-67D5714CB013")
                IRemoteSystemRemovedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteSystemId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemRemovedEventArgs=_uuidof(IRemoteSystemRemovedEventArgs);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSession
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSession[] = L"Windows.System.RemoteSystems.IRemoteSystemSession";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("69476A01-9ADA-490F-9549-D31CB14C9E95"), exclusiveto, contract] */
                MIDL_INTERFACE("69476A01-9ADA-490F-9549-D31CB14C9E95")
                IRemoteSystemSession : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ControllerDisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Disconnected(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Disconnected(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateParticipantWatcher(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SendInvitationAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::System::RemoteSystems::IRemoteSystem * invitee,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSession=_uuidof(IRemoteSystemSession);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionAddedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionAddedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionAddedEventArgs";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("D585D754-BC97-4C39-99B4-BECA76E04C3F"), exclusiveto, contract] */
                MIDL_INTERFACE("D585D754-BC97-4C39-99B4-BECA76E04C3F")
                IRemoteSystemSessionAddedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SessionInfo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInfo * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionAddedEventArgs=_uuidof(IRemoteSystemSessionAddedEventArgs);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionController[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionController";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("E48B2DD2-6820-4867-B425-D89C0A3EF7BA"), exclusiveto, contract] */
                MIDL_INTERFACE("E48B2DD2-6820-4867-B425-D89C0A3EF7BA")
                IRemoteSystemSessionController : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_JoinRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_JoinRequested(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RemoveParticipantAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant * pParticipant,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateSessionAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionController=_uuidof(IRemoteSystemSessionController);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionControllerFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionControllerFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionControllerFactory";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("BFCC2F6B-AC3D-4199-82CD-6670A773EF2E"), exclusiveto, contract] */
                MIDL_INTERFACE("BFCC2F6B-AC3D-4199-82CD-6670A773EF2E")
                IRemoteSystemSessionControllerFactory : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateController(
                        /* [in] */__RPC__in HSTRING displayName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionController * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateControllerWithSessionOptions(
                        /* [in] */__RPC__in HSTRING displayName,
                        /* [in] */__RPC__in_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionOptions * options,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionController * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionControllerFactory=_uuidof(IRemoteSystemSessionControllerFactory);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionCreationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionCreationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionCreationResult[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionCreationResult";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("A79812C2-37DE-448C-8B83-A30AA3C4EAD6"), exclusiveto, contract] */
                MIDL_INTERFACE("A79812C2-37DE-448C-8B83-A30AA3C4EAD6")
                IRemoteSystemSessionCreationResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::System::RemoteSystems::RemoteSystemSessionCreationStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Session(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSession * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionCreationResult=_uuidof(IRemoteSystemSessionCreationResult);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionDisconnectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionDisconnectedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionDisconnectedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionDisconnectedEventArgs";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("DE0BC69B-77C5-461C-8209-7C6C5D3111AB"), exclusiveto, contract] */
                MIDL_INTERFACE("DE0BC69B-77C5-461C-8209-7C6C5D3111AB")
                IRemoteSystemSessionDisconnectedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reason(
                        /* [retval, out] */__RPC__out ABI::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedReason * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionDisconnectedEventArgs=_uuidof(IRemoteSystemSessionDisconnectedEventArgs);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionInfo[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionInfo";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("FF4DF648-8B0A-4E9A-9905-69E4B841C588"), exclusiveto, contract] */
                MIDL_INTERFACE("FF4DF648-8B0A-4E9A-9905-69E4B841C588")
                IRemoteSystemSessionInfo : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ControllerDisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE JoinAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionInfo=_uuidof(IRemoteSystemSessionInfo);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionInvitation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionInvitation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionInvitation[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionInvitation";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("3E32CC91-51D7-4766-A121-25516C3B8294"), exclusiveto, contract] */
                MIDL_INTERFACE("3E32CC91-51D7-4766-A121-25516C3B8294")
                IRemoteSystemSessionInvitation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sender(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystem * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SessionInfo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInfo * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionInvitation=_uuidof(IRemoteSystemSessionInvitation);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionInvitationListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionInvitationListener
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionInvitationListener[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionInvitationListener";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("08F4003F-BC71-49E1-874A-31DDFF9A27B9"), exclusiveto, contract] */
                MIDL_INTERFACE("08F4003F-BC71-49E1-874A-31DDFF9A27B9")
                IRemoteSystemSessionInvitationListener : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_InvitationReceived(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_InvitationReceived(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionInvitationListener=_uuidof(IRemoteSystemSessionInvitationListener);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionInvitationReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionInvitationReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionInvitationReceivedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionInvitationReceivedEventArgs";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("5E964A2D-A10D-4EDB-8DEA-54D20AC19543"), exclusiveto, contract] */
                MIDL_INTERFACE("5E964A2D-A10D-4EDB-8DEA-54D20AC19543")
                IRemoteSystemSessionInvitationReceivedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Invitation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInvitation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionInvitationReceivedEventArgs=_uuidof(IRemoteSystemSessionInvitationReceivedEventArgs);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionJoinRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionJoinRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionJoinRequest[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionJoinRequest";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("20600068-7994-4331-86D1-D89D882585EE"), exclusiveto, contract] */
                MIDL_INTERFACE("20600068-7994-4331-86D1-D89D882585EE")
                IRemoteSystemSessionJoinRequest : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Participant(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Accept(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionJoinRequest=_uuidof(IRemoteSystemSessionJoinRequest);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionJoinRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionJoinRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionJoinRequestedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionJoinRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("DBCA4FC3-82B9-4816-9C24-E40E61774BD8"), exclusiveto, contract] */
                MIDL_INTERFACE("DBCA4FC3-82B9-4816-9C24-E40E61774BD8")
                IRemoteSystemSessionJoinRequestedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_JoinRequest(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionJoinRequestedEventArgs=_uuidof(IRemoteSystemSessionJoinRequestedEventArgs);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionJoinResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionJoinResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionJoinResult[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionJoinResult";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("CE7B1F04-A03E-41A4-900B-1E79328C1267"), exclusiveto, contract] */
                MIDL_INTERFACE("CE7B1F04-A03E-41A4-900B-1E79328C1267")
                IRemoteSystemSessionJoinResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::System::RemoteSystems::RemoteSystemSessionJoinStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Session(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSession * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionJoinResult=_uuidof(IRemoteSystemSessionJoinResult);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionMessageChannel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionMessageChannel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannel[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionMessageChannel";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("9524D12A-73D9-4C10-B751-C26784437127"), exclusiveto, contract] */
                MIDL_INTERFACE("9524D12A-73D9-4C10-B751-C26784437127")
                IRemoteSystemSessionMessageChannel : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Session(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSession * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE BroadcastValueSetAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * messageData,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SendValueSetAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * messageData,
                        /* [in] */__RPC__in_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant * participant,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SendValueSetToParticipantsAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * messageData,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * participants,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ValueSetReceived(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ValueSetReceived(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionMessageChannel=_uuidof(IRemoteSystemSessionMessageChannel);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionMessageChannelFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionMessageChannel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannelFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionMessageChannelFactory";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("295E1C4A-BD16-4298-B7CE-415482B0E11D"), exclusiveto, contract] */
                MIDL_INTERFACE("295E1C4A-BD16-4298-B7CE-415482B0E11D")
                IRemoteSystemSessionMessageChannelFactory : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSession * session,
                        /* [in] */__RPC__in HSTRING channelName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateWithReliability(
                        /* [in] */__RPC__in_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSession * session,
                        /* [in] */__RPC__in HSTRING channelName,
                        /* [in] */ABI::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannelReliability reliability,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionMessageChannelFactory=_uuidof(IRemoteSystemSessionMessageChannelFactory);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionOptions[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionOptions";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("740ED755-8418-4F01-9353-E21C9ECC6CFC"), exclusiveto, contract] */
                MIDL_INTERFACE("740ED755-8418-4F01-9353-E21C9ECC6CFC")
                IRemoteSystemSessionOptions : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInviteOnly(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsInviteOnly(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionOptions=_uuidof(IRemoteSystemSessionOptions);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionParticipant
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionParticipant
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionParticipant[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipant";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("7E90058C-ACF9-4729-8A17-44E7BAED5DCC"), exclusiveto, contract] */
                MIDL_INTERFACE("7E90058C-ACF9-4729-8A17-44E7BAED5DCC")
                IRemoteSystemSessionParticipant : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteSystem(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystem * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetHostNames(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CHostName * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionParticipant=_uuidof(IRemoteSystemSessionParticipant);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionParticipantAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionParticipantAddedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantAddedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipantAddedEventArgs";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("D35A57D8-C9A1-4BB7-B6B0-79BB91ADF93D"), exclusiveto, contract] */
                MIDL_INTERFACE("D35A57D8-C9A1-4BB7-B6B0-79BB91ADF93D")
                IRemoteSystemSessionParticipantAddedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Participant(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionParticipantAddedEventArgs=_uuidof(IRemoteSystemSessionParticipantAddedEventArgs);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionParticipantRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionParticipantRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantRemovedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipantRemovedEventArgs";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("866EF088-DE68-4ABF-88A1-F90D16274192"), exclusiveto, contract] */
                MIDL_INTERFACE("866EF088-DE68-4ABF-88A1-F90D16274192")
                IRemoteSystemSessionParticipantRemovedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Participant(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionParticipantRemovedEventArgs=_uuidof(IRemoteSystemSessionParticipantRemovedEventArgs);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionParticipantWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionParticipantWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipantWatcher";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("DCDD02CC-AA87-4D79-B6CC-4459B3E92075"), exclusiveto, contract] */
                MIDL_INTERFACE("DCDD02CC-AA87-4D79-B6CC-4459B3E92075")
                IRemoteSystemSessionParticipantWatcher : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcherStatus * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Added(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Added(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Removed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Removed(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_EnumerationCompleted(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_EnumerationCompleted(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionParticipantWatcher=_uuidof(IRemoteSystemSessionParticipantWatcher);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionRemovedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionRemovedEventArgs";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("AF82914E-39A1-4DEA-9D63-43798D5BBBD0"), exclusiveto, contract] */
                MIDL_INTERFACE("AF82914E-39A1-4DEA-9D63-43798D5BBBD0")
                IRemoteSystemSessionRemovedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SessionInfo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInfo * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionRemovedEventArgs=_uuidof(IRemoteSystemSessionRemovedEventArgs);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionStatics[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("8524899F-FD20-44E3-9565-E75A3B14C66E"), exclusiveto, contract] */
                MIDL_INTERFACE("8524899F-FD20-44E3-9565-E75A3B14C66E")
                IRemoteSystemSessionStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWatcher(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionStatics=_uuidof(IRemoteSystemSessionStatics);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionUpdatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionUpdatedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionUpdatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("16875069-231E-4C91-8EC8-B3A39D9E55A3"), exclusiveto, contract] */
                MIDL_INTERFACE("16875069-231E-4C91-8EC8-B3A39D9E55A3")
                IRemoteSystemSessionUpdatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SessionInfo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInfo * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionUpdatedEventArgs=_uuidof(IRemoteSystemSessionUpdatedEventArgs);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionValueSetReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionValueSetReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionValueSetReceivedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionValueSetReceivedEventArgs";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("06F31785-2DA5-4E58-A78F-9E8D0784EE25"), exclusiveto, contract] */
                MIDL_INTERFACE("06F31785-2DA5-4E58-A78F-9E8D0784EE25")
                IRemoteSystemSessionValueSetReceivedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sender(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Message(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionValueSetReceivedEventArgs=_uuidof(IRemoteSystemSessionValueSetReceivedEventArgs);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionWatcher";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("8003E340-0C41-4A62-B6D7-BDBE2B19BE2D"), exclusiveto, contract] */
                MIDL_INTERFACE("8003E340-0C41-4A62-B6D7-BDBE2B19BE2D")
                IRemoteSystemSessionWatcher : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::System::RemoteSystems::RemoteSystemSessionWatcherStatus * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Added(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Added(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Updated(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Updated(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Removed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Removed(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemSessionWatcher=_uuidof(IRemoteSystemSessionWatcher);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemStatics[] = L"Windows.System.RemoteSystems.IRemoteSystemStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("A485B392-FF2B-4B47-BE62-743F2F140F30"), exclusiveto, contract] */
                MIDL_INTERFACE("A485B392-FF2B-4B47-BE62-743F2F140F30")
                IRemoteSystemStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FindByHostNameAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * hostName,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateWatcher(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemWatcher * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateWatcherWithFilters(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * filters,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemWatcher * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestAccessAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemStatics=_uuidof(IRemoteSystemStatics);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemStatics2[] = L"Windows.System.RemoteSystems.IRemoteSystemStatics2";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("0C98EDCA-6F99-4C52-A272-EA4F36471744"), exclusiveto, contract] */
                MIDL_INTERFACE("0C98EDCA-6F99-4C52-A272-EA4F36471744")
                IRemoteSystemStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE IsAuthorizationKindEnabled(
                        /* [in] */ABI::Windows::System::RemoteSystems::RemoteSystemAuthorizationKind kind,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemStatics2=_uuidof(IRemoteSystemStatics2);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemStatusTypeFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemStatusTypeFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemStatusTypeFilter[] = L"Windows.System.RemoteSystems.IRemoteSystemStatusTypeFilter";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("0C39514E-CBB6-4777-8534-2E0C521AFFA2"), exclusiveto, contract] */
                MIDL_INTERFACE("0C39514E-CBB6-4777-8534-2E0C521AFFA2")
                IRemoteSystemStatusTypeFilter : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteSystemStatusType(
                        /* [retval, out] */__RPC__out ABI::Windows::System::RemoteSystems::RemoteSystemStatusType * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemStatusTypeFilter=_uuidof(IRemoteSystemStatusTypeFilter);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemStatusTypeFilterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemStatusTypeFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemStatusTypeFilterFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemStatusTypeFilterFactory";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("33CF78FA-D724-4125-AC7A-8D281E44C949"), exclusiveto, contract] */
                MIDL_INTERFACE("33CF78FA-D724-4125-AC7A-8D281E44C949")
                IRemoteSystemStatusTypeFilterFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */ABI::Windows::System::RemoteSystems::RemoteSystemStatusType remoteSystemStatusType,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemStatusTypeFilterFactory=_uuidof(IRemoteSystemStatusTypeFilterFactory);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemUpdatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemUpdatedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemUpdatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("7502FF0E-DBCB-4155-B4CA-B30A04F27627"), exclusiveto, contract] */
                MIDL_INTERFACE("7502FF0E-DBCB-4155-B4CA-B30A04F27627")
                IRemoteSystemUpdatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteSystem(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::RemoteSystems::IRemoteSystem * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemUpdatedEventArgs=_uuidof(IRemoteSystemUpdatedEventArgs);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemWatcher[] = L"Windows.System.RemoteSystems.IRemoteSystemWatcher";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                /* [object, uuid("5D600C7E-2C07-48C5-889C-455D2B099771"), exclusiveto, contract] */
                MIDL_INTERFACE("5D600C7E-2C07-48C5-889C-455D2B099771")
                IRemoteSystemWatcher : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RemoteSystemAdded(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RemoteSystemAdded(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RemoteSystemUpdated(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RemoteSystemUpdated(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RemoteSystemRemoved(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RemoteSystemRemoved(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRemoteSystemWatcher=_uuidof(IRemoteSystemWatcher);
                
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.KnownRemoteSystemCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.RemoteSystems.IKnownRemoteSystemCapabilitiesStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_KnownRemoteSystemCapabilities_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_KnownRemoteSystemCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_KnownRemoteSystemCapabilities[] = L"Windows.System.RemoteSystems.KnownRemoteSystemCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.RemoteSystems.IRemoteSystemStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.System.RemoteSystems.IRemoteSystemStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystem ** Default Interface **
 *    Windows.System.RemoteSystems.IRemoteSystem2
 *    Windows.System.RemoteSystems.IRemoteSystem3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystem_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystem[] = L"Windows.System.RemoteSystems.RemoteSystem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemAddedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemAddedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemAddedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemAddedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemAddedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemAuthorizationKindFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.System.RemoteSystems.IRemoteSystemAuthorizationKindFilterFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemAuthorizationKindFilter ** Default Interface **
 *    Windows.System.RemoteSystems.IRemoteSystemFilter
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemAuthorizationKindFilter_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemAuthorizationKindFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemAuthorizationKindFilter[] = L"Windows.System.RemoteSystems.RemoteSystemAuthorizationKindFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemConnectionRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.System.RemoteSystems.IRemoteSystemConnectionRequestFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemConnectionRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemConnectionRequest_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemConnectionRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemConnectionRequest[] = L"Windows.System.RemoteSystems.RemoteSystemConnectionRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemDiscoveryTypeFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.System.RemoteSystems.IRemoteSystemDiscoveryTypeFilterFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemDiscoveryTypeFilter ** Default Interface **
 *    Windows.System.RemoteSystems.IRemoteSystemFilter
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemDiscoveryTypeFilter_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemDiscoveryTypeFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemDiscoveryTypeFilter[] = L"Windows.System.RemoteSystems.RemoteSystemDiscoveryTypeFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemKindFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.System.RemoteSystems.IRemoteSystemKindFilterFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemKindFilter ** Default Interface **
 *    Windows.System.RemoteSystems.IRemoteSystemFilter
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemKindFilter_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemKindFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemKindFilter[] = L"Windows.System.RemoteSystems.RemoteSystemKindFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemKinds
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.RemoteSystems.IRemoteSystemKindStatics2 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.System.RemoteSystems.IRemoteSystemKindStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemKinds_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemKinds_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemKinds[] = L"Windows.System.RemoteSystems.RemoteSystemKinds";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemRemovedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemRemovedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemRemovedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.RemoteSystems.IRemoteSystemSessionStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSession ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSession_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSession[] = L"Windows.System.RemoteSystems.RemoteSystemSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionAddedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionAddedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionAddedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionAddedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionAddedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.System.RemoteSystems.IRemoteSystemSessionControllerFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionController ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionController_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionController[] = L"Windows.System.RemoteSystems.RemoteSystemSessionController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionCreationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionCreationResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionCreationResult_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionCreationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionCreationResult[] = L"Windows.System.RemoteSystems.RemoteSystemSessionCreationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionDisconnectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionDisconnectedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionDisconnectedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionDisconnectedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionDisconnectedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionDisconnectedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionInfo_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionInfo[] = L"Windows.System.RemoteSystems.RemoteSystemSessionInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionInvitation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionInvitation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionInvitation_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionInvitation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionInvitation[] = L"Windows.System.RemoteSystems.RemoteSystemSessionInvitation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionInvitationListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionInvitationListener ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionInvitationListener_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionInvitationListener_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionInvitationListener[] = L"Windows.System.RemoteSystems.RemoteSystemSessionInvitationListener";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionInvitationReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionInvitationReceivedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionInvitationReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionInvitationReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionInvitationReceivedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionInvitationReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionJoinRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionJoinRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionJoinRequest_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionJoinRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionJoinRequest[] = L"Windows.System.RemoteSystems.RemoteSystemSessionJoinRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionJoinRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionJoinRequestedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionJoinRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionJoinRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionJoinRequestedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionJoinRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionJoinResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionJoinResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionJoinResult_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionJoinResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionJoinResult[] = L"Windows.System.RemoteSystems.RemoteSystemSessionJoinResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionMessageChannel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.System.RemoteSystems.IRemoteSystemSessionMessageChannelFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionMessageChannel ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionMessageChannel_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionMessageChannel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionMessageChannel[] = L"Windows.System.RemoteSystems.RemoteSystemSessionMessageChannel";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionOptions_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionOptions[] = L"Windows.System.RemoteSystems.RemoteSystemSessionOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionParticipant
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionParticipant ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionParticipant_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionParticipant_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionParticipant[] = L"Windows.System.RemoteSystems.RemoteSystemSessionParticipant";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionParticipantAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionParticipantAddedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionParticipantAddedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionParticipantAddedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionParticipantAddedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantAddedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionParticipantRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionParticipantRemovedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionParticipantRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionParticipantRemovedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionParticipantRemovedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionParticipantWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionParticipantWatcher ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionParticipantWatcher_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionParticipantWatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionParticipantWatcher[] = L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantWatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionRemovedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionRemovedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionRemovedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionUpdatedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionUpdatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionUpdatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionUpdatedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionUpdatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionValueSetReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionValueSetReceivedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionValueSetReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionValueSetReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionValueSetReceivedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionValueSetReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionWatcher ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionWatcher_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionWatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionWatcher[] = L"Windows.System.RemoteSystems.RemoteSystemSessionWatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemStatusTypeFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.System.RemoteSystems.IRemoteSystemStatusTypeFilterFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemStatusTypeFilter ** Default Interface **
 *    Windows.System.RemoteSystems.IRemoteSystemFilter
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemStatusTypeFilter_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemStatusTypeFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemStatusTypeFilter[] = L"Windows.System.RemoteSystems.RemoteSystemStatusTypeFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemUpdatedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemUpdatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemUpdatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemUpdatedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemUpdatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemWatcher ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemWatcher_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemWatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemWatcher[] = L"Windows.System.RemoteSystems.RemoteSystemWatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2 __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter;

typedef struct __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilterVtbl;

interface __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilterVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter;

typedef  struct __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilterVtbl;

interface __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant;

typedef struct __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantVtbl;

interface __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant;

typedef  struct __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantVtbl;

interface __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem;

typedef struct __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemVtbl;

interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAccessStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus;

typedef struct __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatusVtbl;

interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult;

typedef struct __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResultVtbl;

interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult;

typedef struct __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResultVtbl;

interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

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


#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__









typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAccessStatus __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAccessStatus;


typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAuthorizationKind __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAuthorizationKind;


typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemDiscoveryType __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemDiscoveryType;


typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionCreationStatus __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionCreationStatus;


typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionDisconnectedReason __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionDisconnectedReason;


typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionJoinStatus __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionJoinStatus;


typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionMessageChannelReliability __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionMessageChannelReliability;


typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionParticipantWatcherStatus __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionParticipantWatcherStatus;


typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionWatcherStatus __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionWatcherStatus;


typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemStatus __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemStatus;


typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemStatusType __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemStatusType;



























































































/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemAccessStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAccessStatus
{
    RemoteSystemAccessStatus_Unspecified = 0,
    RemoteSystemAccessStatus_Allowed = 1,
    RemoteSystemAccessStatus_DeniedByUser = 2,
    RemoteSystemAccessStatus_DeniedBySystem = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemAuthorizationKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAuthorizationKind
{
    RemoteSystemAuthorizationKind_SameUser = 0,
    RemoteSystemAuthorizationKind_Anonymous = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemDiscoveryType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemDiscoveryType
{
    RemoteSystemDiscoveryType_Any = 0,
    RemoteSystemDiscoveryType_Proximal = 1,
    RemoteSystemDiscoveryType_Cloud = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    RemoteSystemDiscoveryType_SpatiallyProximal = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemSessionCreationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionCreationStatus
{
    RemoteSystemSessionCreationStatus_Success = 0,
    RemoteSystemSessionCreationStatus_SessionLimitsExceeded = 1,
    RemoteSystemSessionCreationStatus_OperationAborted = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemSessionDisconnectedReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionDisconnectedReason
{
    RemoteSystemSessionDisconnectedReason_SessionUnavailable = 0,
    RemoteSystemSessionDisconnectedReason_RemovedByController = 1,
    RemoteSystemSessionDisconnectedReason_SessionClosed = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemSessionJoinStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionJoinStatus
{
    RemoteSystemSessionJoinStatus_Success = 0,
    RemoteSystemSessionJoinStatus_SessionLimitsExceeded = 1,
    RemoteSystemSessionJoinStatus_OperationAborted = 2,
    RemoteSystemSessionJoinStatus_SessionUnavailable = 3,
    RemoteSystemSessionJoinStatus_RejectedByController = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemSessionMessageChannelReliability
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionMessageChannelReliability
{
    RemoteSystemSessionMessageChannelReliability_Reliable = 0,
    RemoteSystemSessionMessageChannelReliability_Unreliable = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemSessionParticipantWatcherStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionParticipantWatcherStatus
{
    RemoteSystemSessionParticipantWatcherStatus_Created = 0,
    RemoteSystemSessionParticipantWatcherStatus_Started = 1,
    RemoteSystemSessionParticipantWatcherStatus_EnumerationCompleted = 2,
    RemoteSystemSessionParticipantWatcherStatus_Stopping = 3,
    RemoteSystemSessionParticipantWatcherStatus_Stopped = 4,
    RemoteSystemSessionParticipantWatcherStatus_Aborted = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemSessionWatcherStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionWatcherStatus
{
    RemoteSystemSessionWatcherStatus_Created = 0,
    RemoteSystemSessionWatcherStatus_Started = 1,
    RemoteSystemSessionWatcherStatus_EnumerationCompleted = 2,
    RemoteSystemSessionWatcherStatus_Stopping = 3,
    RemoteSystemSessionWatcherStatus_Stopped = 4,
    RemoteSystemSessionWatcherStatus_Aborted = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemStatus
{
    RemoteSystemStatus_Unavailable = 0,
    RemoteSystemStatus_DiscoveringAvailability = 1,
    RemoteSystemStatus_Available = 2,
    RemoteSystemStatus_Unknown = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.System.RemoteSystems.RemoteSystemStatusType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemStatusType
{
    RemoteSystemStatusType_Any = 0,
    RemoteSystemStatusType_Available = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IKnownRemoteSystemCapabilitiesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.KnownRemoteSystemCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IKnownRemoteSystemCapabilitiesStatics[] = L"Windows.System.RemoteSystems.IKnownRemoteSystemCapabilitiesStatics";
/* [object, uuid("8108E380-7F8A-44E4-92CD-03B6469B94A3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppService )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LaunchUri )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteSession )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpatialEntity )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_get_AppService(This,value) \
    ( (This)->lpVtbl->get_AppService(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_get_LaunchUri(This,value) \
    ( (This)->lpVtbl->get_LaunchUri(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_get_RemoteSession(This,value) \
    ( (This)->lpVtbl->get_RemoteSession(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_get_SpatialEntity(This,value) \
    ( (This)->lpVtbl->get_SpatialEntity(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystem[] = L"Windows.System.RemoteSystems.IRemoteSystem";
/* [object, uuid("ED5838CD-1E10-4A8C-B4A6-4E5FD6F97721"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAvailableByProximity )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_get_IsAvailableByProximity(This,value) \
    ( (This)->lpVtbl->get_IsAvailableByProximity(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystem2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystem2[] = L"Windows.System.RemoteSystems.IRemoteSystem2";
/* [object, uuid("09DFE4EC-FB8B-4A08-A758-6876435D769E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAvailableBySpatialProximity )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCapabilitySupportedAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 * This,
        /* [in] */__RPC__in HSTRING capabilityName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2Vtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_get_IsAvailableBySpatialProximity(This,value) \
    ( (This)->lpVtbl->get_IsAvailableBySpatialProximity(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_GetCapabilitySupportedAsync(This,capabilityName,operation) \
    ( (This)->lpVtbl->GetCapabilitySupportedAsync(This,capabilityName,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystem3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystem3[] = L"Windows.System.RemoteSystems.IRemoteSystem3";
/* [object, uuid("72B4B495-B7C6-40BE-831B-73562F12FFA8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ManufacturerDisplayName )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ModelDisplayName )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3Vtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_get_ManufacturerDisplayName(This,value) \
    ( (This)->lpVtbl->get_ManufacturerDisplayName(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_get_ModelDisplayName(This,value) \
    ( (This)->lpVtbl->get_ModelDisplayName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemAddedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemAddedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemAddedEventArgs";
/* [object, uuid("8F39560F-E534-4697-8836-7ABEA151516E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteSystem )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_get_RemoteSystem(This,value) \
    ( (This)->lpVtbl->get_RemoteSystem(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemAuthorizationKindFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemAuthorizationKindFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemAuthorizationKindFilter[] = L"Windows.System.RemoteSystems.IRemoteSystemAuthorizationKindFilter";
/* [object, uuid("6B0DDE8E-04D0-40F4-A27F-C2ACBBD6B734"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteSystemAuthorizationKind )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAuthorizationKind * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_get_RemoteSystemAuthorizationKind(This,value) \
    ( (This)->lpVtbl->get_RemoteSystemAuthorizationKind(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemAuthorizationKindFilterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemAuthorizationKindFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemAuthorizationKindFilterFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemAuthorizationKindFilterFactory";
/* [object, uuid("AD65DF4D-B66A-45A4-8177-8CAED75D9E5A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory * This,
        /* [in] */__x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAuthorizationKind remoteSystemAuthorizationKind,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactoryVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_Create(This,remoteSystemAuthorizationKind,result) \
    ( (This)->lpVtbl->Create(This,remoteSystemAuthorizationKind,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemConnectionRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemConnectionRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemConnectionRequest[] = L"Windows.System.RemoteSystems.IRemoteSystemConnectionRequest";
/* [object, uuid("84ED4104-8D5E-4D72-8238-7621576C7A67"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteSystem )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_get_RemoteSystem(This,value) \
    ( (This)->lpVtbl->get_RemoteSystem(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemConnectionRequestFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemConnectionRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemConnectionRequestFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemConnectionRequestFactory";
/* [object, uuid("AA0A0A20-BAEB-4575-B530-810BB9786334"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * remoteSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactoryVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_Create(This,remoteSystem,result) \
    ( (This)->lpVtbl->Create(This,remoteSystem,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemDiscoveryTypeFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemDiscoveryTypeFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemDiscoveryTypeFilter[] = L"Windows.System.RemoteSystems.IRemoteSystemDiscoveryTypeFilter";
/* [object, uuid("42D9041F-EE5A-43DA-AC6A-6FEE25460741"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteSystemDiscoveryType )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemDiscoveryType * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_get_RemoteSystemDiscoveryType(This,value) \
    ( (This)->lpVtbl->get_RemoteSystemDiscoveryType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemDiscoveryTypeFilterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemDiscoveryTypeFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemDiscoveryTypeFilterFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemDiscoveryTypeFilterFactory";
/* [object, uuid("9F9EB993-C260-4161-92F2-9C021F23FE5D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory * This,
        /* [in] */__x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemDiscoveryType discoveryType,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactoryVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_Create(This,discoveryType,result) \
    ( (This)->lpVtbl->Create(This,discoveryType,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemFilter[] = L"Windows.System.RemoteSystems.IRemoteSystemFilter";
/* [object, uuid("4A3BA9E4-99EB-45EB-BA16-0367728FF374"), contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilterVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemKindFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemKindFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemKindFilter[] = L"Windows.System.RemoteSystems.IRemoteSystemKindFilter";
/* [object, uuid("38E1C9EC-22C3-4EF6-901A-BBB1C7AAD4ED"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteSystemKinds )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_get_RemoteSystemKinds(This,value) \
    ( (This)->lpVtbl->get_RemoteSystemKinds(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemKindFilterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemKindFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemKindFilterFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemKindFilterFactory";
/* [object, uuid("A1FB18EE-99EA-40BC-9A39-C670AA804A28"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * remoteSystemKinds,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactoryVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_Create(This,remoteSystemKinds,result) \
    ( (This)->lpVtbl->Create(This,remoteSystemKinds,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemKindStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemKinds
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemKindStatics[] = L"Windows.System.RemoteSystems.IRemoteSystemKindStatics";
/* [object, uuid("F6317633-AB14-41D0-9553-796AADB882DB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Phone )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Hub )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Holographic )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Desktop )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Xbox )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_get_Phone(This,value) \
    ( (This)->lpVtbl->get_Phone(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_get_Hub(This,value) \
    ( (This)->lpVtbl->get_Hub(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_get_Holographic(This,value) \
    ( (This)->lpVtbl->get_Holographic(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_get_Desktop(This,value) \
    ( (This)->lpVtbl->get_Desktop(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_get_Xbox(This,value) \
    ( (This)->lpVtbl->get_Xbox(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemKindStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemKinds
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemKindStatics2[] = L"Windows.System.RemoteSystems.IRemoteSystemKindStatics2";
/* [object, uuid("B9E3A3D0-0466-4749-91E8-65F9D19A96A5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Iot )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Tablet )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Laptop )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2Vtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_get_Iot(This,value) \
    ( (This)->lpVtbl->get_Iot(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_get_Tablet(This,value) \
    ( (This)->lpVtbl->get_Tablet(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_get_Laptop(This,value) \
    ( (This)->lpVtbl->get_Laptop(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemRemovedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemRemovedEventArgs";
/* [object, uuid("8B3D16BB-7306-49EA-B7DF-67D5714CB013"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteSystemId )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_get_RemoteSystemId(This,value) \
    ( (This)->lpVtbl->get_RemoteSystemId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSession
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSession[] = L"Windows.System.RemoteSystems.IRemoteSystemSession";
/* [object, uuid("69476A01-9ADA-490F-9549-D31CB14C9E95"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ControllerDisplayName )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Disconnected )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Disconnected )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *CreateParticipantWatcher )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SendInvitationAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * invitee,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_get_ControllerDisplayName(This,value) \
    ( (This)->lpVtbl->get_ControllerDisplayName(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_add_Disconnected(This,handler,token) \
    ( (This)->lpVtbl->add_Disconnected(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_remove_Disconnected(This,token) \
    ( (This)->lpVtbl->remove_Disconnected(This,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_CreateParticipantWatcher(This,result) \
    ( (This)->lpVtbl->CreateParticipantWatcher(This,result) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_SendInvitationAsync(This,invitee,operation) \
    ( (This)->lpVtbl->SendInvitationAsync(This,invitee,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionAddedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionAddedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionAddedEventArgs";
/* [object, uuid("D585D754-BC97-4C39-99B4-BECA76E04C3F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SessionInfo )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_get_SessionInfo(This,value) \
    ( (This)->lpVtbl->get_SessionInfo(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionController[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionController";
/* [object, uuid("E48B2DD2-6820-4867-B425-D89C0A3EF7BA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_JoinRequested )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_JoinRequested )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveParticipantAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * pParticipant,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSessionAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_add_JoinRequested(This,handler,token) \
    ( (This)->lpVtbl->add_JoinRequested(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_remove_JoinRequested(This,token) \
    ( (This)->lpVtbl->remove_JoinRequested(This,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_RemoveParticipantAsync(This,pParticipant,operation) \
    ( (This)->lpVtbl->RemoveParticipantAsync(This,pParticipant,operation) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_CreateSessionAsync(This,operation) \
    ( (This)->lpVtbl->CreateSessionAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionControllerFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionControllerFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionControllerFactory";
/* [object, uuid("BFCC2F6B-AC3D-4199-82CD-6670A773EF2E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateController )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory * This,
        /* [in] */__RPC__in HSTRING displayName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateControllerWithSessionOptions )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory * This,
        /* [in] */__RPC__in HSTRING displayName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions * options,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactoryVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_CreateController(This,displayName,result) \
    ( (This)->lpVtbl->CreateController(This,displayName,result) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_CreateControllerWithSessionOptions(This,displayName,options,result) \
    ( (This)->lpVtbl->CreateControllerWithSessionOptions(This,displayName,options,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionCreationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionCreationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionCreationResult[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionCreationResult";
/* [object, uuid("A79812C2-37DE-448C-8B83-A30AA3C4EAD6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionCreationStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResultVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_get_Session(This,value) \
    ( (This)->lpVtbl->get_Session(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionDisconnectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionDisconnectedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionDisconnectedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionDisconnectedEventArgs";
/* [object, uuid("DE0BC69B-77C5-461C-8209-7C6C5D3111AB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionDisconnectedReason * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_get_Reason(This,value) \
    ( (This)->lpVtbl->get_Reason(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionInfo[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionInfo";
/* [object, uuid("FF4DF648-8B0A-4E9A-9905-69E4B841C588"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ControllerDisplayName )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *JoinAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfoVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_get_ControllerDisplayName(This,value) \
    ( (This)->lpVtbl->get_ControllerDisplayName(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_JoinAsync(This,operation) \
    ( (This)->lpVtbl->JoinAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionInvitation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionInvitation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionInvitation[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionInvitation";
/* [object, uuid("3E32CC91-51D7-4766-A121-25516C3B8294"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sender )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SessionInfo )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_get_Sender(This,value) \
    ( (This)->lpVtbl->get_Sender(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_get_SessionInfo(This,value) \
    ( (This)->lpVtbl->get_SessionInfo(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionInvitationListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionInvitationListener
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionInvitationListener[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionInvitationListener";
/* [object, uuid("08F4003F-BC71-49E1-874A-31DDFF9A27B9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListenerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_InvitationReceived )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_InvitationReceived )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListenerVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListenerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_add_InvitationReceived(This,handler,token) \
    ( (This)->lpVtbl->add_InvitationReceived(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_remove_InvitationReceived(This,token) \
    ( (This)->lpVtbl->remove_InvitationReceived(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionInvitationReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionInvitationReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionInvitationReceivedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionInvitationReceivedEventArgs";
/* [object, uuid("5E964A2D-A10D-4EDB-8DEA-54D20AC19543"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Invitation )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_get_Invitation(This,value) \
    ( (This)->lpVtbl->get_Invitation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionJoinRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionJoinRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionJoinRequest[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionJoinRequest";
/* [object, uuid("20600068-7994-4331-86D1-D89D882585EE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Participant )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Accept )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_get_Participant(This,value) \
    ( (This)->lpVtbl->get_Participant(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_Accept(This) \
    ( (This)->lpVtbl->Accept(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionJoinRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionJoinRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionJoinRequestedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionJoinRequestedEventArgs";
/* [object, uuid("DBCA4FC3-82B9-4816-9C24-E40E61774BD8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_JoinRequest )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_get_JoinRequest(This,value) \
    ( (This)->lpVtbl->get_JoinRequest(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionJoinResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionJoinResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionJoinResult[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionJoinResult";
/* [object, uuid("CE7B1F04-A03E-41A4-900B-1E79328C1267"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionJoinStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResultVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_get_Session(This,value) \
    ( (This)->lpVtbl->get_Session(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionMessageChannel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionMessageChannel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannel[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionMessageChannel";
/* [object, uuid("9524D12A-73D9-4C10-B751-C26784437127"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * * value
        );
    HRESULT ( STDMETHODCALLTYPE *BroadcastValueSetAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * messageData,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SendValueSetAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * messageData,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * participant,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SendValueSetToParticipantsAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * messageData,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * participants,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ValueSetReceived )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ValueSetReceived )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_get_Session(This,value) \
    ( (This)->lpVtbl->get_Session(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_BroadcastValueSetAsync(This,messageData,operation) \
    ( (This)->lpVtbl->BroadcastValueSetAsync(This,messageData,operation) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_SendValueSetAsync(This,messageData,participant,operation) \
    ( (This)->lpVtbl->SendValueSetAsync(This,messageData,participant,operation) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_SendValueSetToParticipantsAsync(This,messageData,participants,operation) \
    ( (This)->lpVtbl->SendValueSetToParticipantsAsync(This,messageData,participants,operation) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_add_ValueSetReceived(This,handler,token) \
    ( (This)->lpVtbl->add_ValueSetReceived(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_remove_ValueSetReceived(This,token) \
    ( (This)->lpVtbl->remove_ValueSetReceived(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionMessageChannelFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionMessageChannel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannelFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionMessageChannelFactory";
/* [object, uuid("295E1C4A-BD16-4298-B7CE-415482B0E11D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * session,
        /* [in] */__RPC__in HSTRING channelName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateWithReliability )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * session,
        /* [in] */__RPC__in HSTRING channelName,
        /* [in] */__x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionMessageChannelReliability reliability,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactoryVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_Create(This,session,channelName,result) \
    ( (This)->lpVtbl->Create(This,session,channelName,result) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_CreateWithReliability(This,session,channelName,reliability,result) \
    ( (This)->lpVtbl->CreateWithReliability(This,session,channelName,reliability,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionOptions[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionOptions";
/* [object, uuid("740ED755-8418-4F01-9353-E21C9ECC6CFC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInviteOnly )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsInviteOnly )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptionsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_get_IsInviteOnly(This,value) \
    ( (This)->lpVtbl->get_IsInviteOnly(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_put_IsInviteOnly(This,value) \
    ( (This)->lpVtbl->put_IsInviteOnly(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionParticipant
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionParticipant
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionParticipant[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipant";
/* [object, uuid("7E90058C-ACF9-4729-8A17-44E7BAED5DCC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteSystem )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetHostNames )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CHostName * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_get_RemoteSystem(This,value) \
    ( (This)->lpVtbl->get_RemoteSystem(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_GetHostNames(This,result) \
    ( (This)->lpVtbl->GetHostNames(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionParticipantAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionParticipantAddedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantAddedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipantAddedEventArgs";
/* [object, uuid("D35A57D8-C9A1-4BB7-B6B0-79BB91ADF93D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Participant )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_get_Participant(This,value) \
    ( (This)->lpVtbl->get_Participant(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionParticipantRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionParticipantRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantRemovedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipantRemovedEventArgs";
/* [object, uuid("866EF088-DE68-4ABF-88A1-F90D16274192"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Participant )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_get_Participant(This,value) \
    ( (This)->lpVtbl->get_Participant(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionParticipantWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionParticipantWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipantWatcher";
/* [object, uuid("DCDD02CC-AA87-4D79-B6CC-4459B3E92075"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionParticipantWatcherStatus * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcherVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcherVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_add_Added(This,handler,token) \
    ( (This)->lpVtbl->add_Added(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_remove_Added(This,token) \
    ( (This)->lpVtbl->remove_Added(This,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_add_Removed(This,handler,token) \
    ( (This)->lpVtbl->add_Removed(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_remove_Removed(This,token) \
    ( (This)->lpVtbl->remove_Removed(This,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_add_EnumerationCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_remove_EnumerationCompleted(This,token) \
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionRemovedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionRemovedEventArgs";
/* [object, uuid("AF82914E-39A1-4DEA-9D63-43798D5BBBD0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SessionInfo )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_get_SessionInfo(This,value) \
    ( (This)->lpVtbl->get_SessionInfo(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionStatics[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionStatics";
/* [object, uuid("8524899F-FD20-44E3-9565-E75A3B14C66E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWatcher )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_CreateWatcher(This,result) \
    ( (This)->lpVtbl->CreateWatcher(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionUpdatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionUpdatedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionUpdatedEventArgs";
/* [object, uuid("16875069-231E-4C91-8EC8-B3A39D9E55A3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SessionInfo )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_get_SessionInfo(This,value) \
    ( (This)->lpVtbl->get_SessionInfo(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionValueSetReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionValueSetReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionValueSetReceivedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionValueSetReceivedEventArgs";
/* [object, uuid("06F31785-2DA5-4E58-A78F-9E8D0784EE25"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sender )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_get_Sender(This,value) \
    ( (This)->lpVtbl->get_Sender(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_get_Message(This,value) \
    ( (This)->lpVtbl->get_Message(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemSessionWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemSessionWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionWatcher";
/* [object, uuid("8003E340-0C41-4A62-B6D7-BDBE2B19BE2D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionWatcherStatus * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Updated )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Updated )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcherVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcherVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_add_Added(This,handler,token) \
    ( (This)->lpVtbl->add_Added(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_remove_Added(This,token) \
    ( (This)->lpVtbl->remove_Added(This,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_add_Updated(This,handler,token) \
    ( (This)->lpVtbl->add_Updated(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_remove_Updated(This,token) \
    ( (This)->lpVtbl->remove_Updated(This,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_add_Removed(This,handler,token) \
    ( (This)->lpVtbl->add_Removed(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_remove_Removed(This,token) \
    ( (This)->lpVtbl->remove_Removed(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemStatics[] = L"Windows.System.RemoteSystems.IRemoteSystemStatics";
/* [object, uuid("A485B392-FF2B-4B47-BE62-743F2F140F30"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindByHostNameAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * hostName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateWatcher )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateWatcherWithFilters )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * filters,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_FindByHostNameAsync(This,hostName,operation) \
    ( (This)->lpVtbl->FindByHostNameAsync(This,hostName,operation) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_CreateWatcher(This,result) \
    ( (This)->lpVtbl->CreateWatcher(This,result) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_CreateWatcherWithFilters(This,filters,result) \
    ( (This)->lpVtbl->CreateWatcherWithFilters(This,filters,result) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_RequestAccessAsync(This,operation) \
    ( (This)->lpVtbl->RequestAccessAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemStatics2[] = L"Windows.System.RemoteSystems.IRemoteSystemStatics2";
/* [object, uuid("0C98EDCA-6F99-4C52-A272-EA4F36471744"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsAuthorizationKindEnabled )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2 * This,
        /* [in] */__x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAuthorizationKind kind,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2Vtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_IsAuthorizationKindEnabled(This,kind,value) \
    ( (This)->lpVtbl->IsAuthorizationKindEnabled(This,kind,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemStatusTypeFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemStatusTypeFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemStatusTypeFilter[] = L"Windows.System.RemoteSystems.IRemoteSystemStatusTypeFilter";
/* [object, uuid("0C39514E-CBB6-4777-8534-2E0C521AFFA2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteSystemStatusType )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemStatusType * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_get_RemoteSystemStatusType(This,value) \
    ( (This)->lpVtbl->get_RemoteSystemStatusType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemStatusTypeFilterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemStatusTypeFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemStatusTypeFilterFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemStatusTypeFilterFactory";
/* [object, uuid("33CF78FA-D724-4125-AC7A-8D281E44C949"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory * This,
        /* [in] */__x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemStatusType remoteSystemStatusType,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactoryVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_Create(This,remoteSystemStatusType,result) \
    ( (This)->lpVtbl->Create(This,remoteSystemStatusType,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemUpdatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemUpdatedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemUpdatedEventArgs";
/* [object, uuid("7502FF0E-DBCB-4155-B4CA-B30A04F27627"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteSystem )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_get_RemoteSystem(This,value) \
    ( (This)->lpVtbl->get_RemoteSystem(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.RemoteSystems.IRemoteSystemWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteSystems.RemoteSystemWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemWatcher[] = L"Windows.System.RemoteSystems.IRemoteSystemWatcher";
/* [object, uuid("5D600C7E-2C07-48C5-889C-455D2B099771"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RemoteSystemAdded )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RemoteSystemAdded )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RemoteSystemUpdated )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RemoteSystemUpdated )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RemoteSystemRemoved )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RemoteSystemRemoved )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_add_RemoteSystemAdded(This,handler,token) \
    ( (This)->lpVtbl->add_RemoteSystemAdded(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_remove_RemoteSystemAdded(This,token) \
    ( (This)->lpVtbl->remove_RemoteSystemAdded(This,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_add_RemoteSystemUpdated(This,handler,token) \
    ( (This)->lpVtbl->add_RemoteSystemUpdated(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_remove_RemoteSystemUpdated(This,token) \
    ( (This)->lpVtbl->remove_RemoteSystemUpdated(This,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_add_RemoteSystemRemoved(This,handler,token) \
    ( (This)->lpVtbl->add_RemoteSystemRemoved(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_remove_RemoteSystemRemoved(This,token) \
    ( (This)->lpVtbl->remove_RemoteSystemRemoved(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.KnownRemoteSystemCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.RemoteSystems.IKnownRemoteSystemCapabilitiesStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_KnownRemoteSystemCapabilities_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_KnownRemoteSystemCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_KnownRemoteSystemCapabilities[] = L"Windows.System.RemoteSystems.KnownRemoteSystemCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.RemoteSystems.IRemoteSystemStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.System.RemoteSystems.IRemoteSystemStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystem ** Default Interface **
 *    Windows.System.RemoteSystems.IRemoteSystem2
 *    Windows.System.RemoteSystems.IRemoteSystem3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystem_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystem[] = L"Windows.System.RemoteSystems.RemoteSystem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemAddedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemAddedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemAddedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemAddedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemAddedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemAuthorizationKindFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.System.RemoteSystems.IRemoteSystemAuthorizationKindFilterFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemAuthorizationKindFilter ** Default Interface **
 *    Windows.System.RemoteSystems.IRemoteSystemFilter
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemAuthorizationKindFilter_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemAuthorizationKindFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemAuthorizationKindFilter[] = L"Windows.System.RemoteSystems.RemoteSystemAuthorizationKindFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemConnectionRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.System.RemoteSystems.IRemoteSystemConnectionRequestFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemConnectionRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemConnectionRequest_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemConnectionRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemConnectionRequest[] = L"Windows.System.RemoteSystems.RemoteSystemConnectionRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemDiscoveryTypeFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.System.RemoteSystems.IRemoteSystemDiscoveryTypeFilterFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemDiscoveryTypeFilter ** Default Interface **
 *    Windows.System.RemoteSystems.IRemoteSystemFilter
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemDiscoveryTypeFilter_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemDiscoveryTypeFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemDiscoveryTypeFilter[] = L"Windows.System.RemoteSystems.RemoteSystemDiscoveryTypeFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemKindFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.System.RemoteSystems.IRemoteSystemKindFilterFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemKindFilter ** Default Interface **
 *    Windows.System.RemoteSystems.IRemoteSystemFilter
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemKindFilter_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemKindFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemKindFilter[] = L"Windows.System.RemoteSystems.RemoteSystemKindFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemKinds
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.RemoteSystems.IRemoteSystemKindStatics2 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.System.RemoteSystems.IRemoteSystemKindStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemKinds_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemKinds_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemKinds[] = L"Windows.System.RemoteSystems.RemoteSystemKinds";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemRemovedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemRemovedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemRemovedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.RemoteSystems.IRemoteSystemSessionStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSession ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSession_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSession[] = L"Windows.System.RemoteSystems.RemoteSystemSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionAddedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionAddedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionAddedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionAddedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionAddedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.System.RemoteSystems.IRemoteSystemSessionControllerFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionController ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionController_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionController[] = L"Windows.System.RemoteSystems.RemoteSystemSessionController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionCreationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionCreationResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionCreationResult_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionCreationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionCreationResult[] = L"Windows.System.RemoteSystems.RemoteSystemSessionCreationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionDisconnectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionDisconnectedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionDisconnectedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionDisconnectedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionDisconnectedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionDisconnectedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionInfo_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionInfo[] = L"Windows.System.RemoteSystems.RemoteSystemSessionInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionInvitation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionInvitation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionInvitation_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionInvitation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionInvitation[] = L"Windows.System.RemoteSystems.RemoteSystemSessionInvitation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionInvitationListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionInvitationListener ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionInvitationListener_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionInvitationListener_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionInvitationListener[] = L"Windows.System.RemoteSystems.RemoteSystemSessionInvitationListener";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionInvitationReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionInvitationReceivedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionInvitationReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionInvitationReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionInvitationReceivedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionInvitationReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionJoinRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionJoinRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionJoinRequest_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionJoinRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionJoinRequest[] = L"Windows.System.RemoteSystems.RemoteSystemSessionJoinRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionJoinRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionJoinRequestedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionJoinRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionJoinRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionJoinRequestedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionJoinRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionJoinResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionJoinResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionJoinResult_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionJoinResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionJoinResult[] = L"Windows.System.RemoteSystems.RemoteSystemSessionJoinResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionMessageChannel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.System.RemoteSystems.IRemoteSystemSessionMessageChannelFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionMessageChannel ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionMessageChannel_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionMessageChannel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionMessageChannel[] = L"Windows.System.RemoteSystems.RemoteSystemSessionMessageChannel";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionOptions_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionOptions[] = L"Windows.System.RemoteSystems.RemoteSystemSessionOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionParticipant
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionParticipant ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionParticipant_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionParticipant_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionParticipant[] = L"Windows.System.RemoteSystems.RemoteSystemSessionParticipant";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionParticipantAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionParticipantAddedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionParticipantAddedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionParticipantAddedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionParticipantAddedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantAddedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionParticipantRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionParticipantRemovedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionParticipantRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionParticipantRemovedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionParticipantRemovedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionParticipantWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionParticipantWatcher ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionParticipantWatcher_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionParticipantWatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionParticipantWatcher[] = L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantWatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionRemovedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionRemovedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionRemovedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionUpdatedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionUpdatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionUpdatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionUpdatedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionUpdatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionValueSetReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionValueSetReceivedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionValueSetReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionValueSetReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionValueSetReceivedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionValueSetReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemSessionWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemSessionWatcher ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionWatcher_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemSessionWatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionWatcher[] = L"Windows.System.RemoteSystems.RemoteSystemSessionWatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemStatusTypeFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.System.RemoteSystems.IRemoteSystemStatusTypeFilterFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemStatusTypeFilter ** Default Interface **
 *    Windows.System.RemoteSystems.IRemoteSystemFilter
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemStatusTypeFilter_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemStatusTypeFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemStatusTypeFilter[] = L"Windows.System.RemoteSystems.RemoteSystemStatusTypeFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemUpdatedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemUpdatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemUpdatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemUpdatedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemUpdatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.RemoteSystems.RemoteSystemWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteSystems.IRemoteSystemWatcher ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemWatcher_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteSystems_RemoteSystemWatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemWatcher[] = L"Windows.System.RemoteSystems.RemoteSystemWatcher";
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
#endif // __windows2Esystem2Eremotesystems_p_h__

#endif // __windows2Esystem2Eremotesystems_h__
