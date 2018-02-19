/* Header file automatically generated from windows.networking.proximity.idl */
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
#ifndef __windows2Enetworking2Eproximity_h__
#define __windows2Enetworking2Eproximity_h__
#ifndef __windows2Enetworking2Eproximity_p_h__
#define __windows2Enetworking2Eproximity_p_h__


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
#include "Windows.Networking.Sockets.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                interface IDeviceArrivedEventHandler;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler ABI::Windows::Networking::Proximity::IDeviceArrivedEventHandler

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                interface IDeviceDepartedEventHandler;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler ABI::Windows::Networking::Proximity::IDeviceDepartedEventHandler

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                interface IMessageReceivedHandler;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler ABI::Windows::Networking::Proximity::IMessageReceivedHandler

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                interface IMessageTransmittedHandler;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler ABI::Windows::Networking::Proximity::IMessageTransmittedHandler

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                interface IConnectionRequestedEventArgs;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs ABI::Windows::Networking::Proximity::IConnectionRequestedEventArgs

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                interface IPeerFinderStatics;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics ABI::Windows::Networking::Proximity::IPeerFinderStatics

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                interface IPeerFinderStatics2;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 ABI::Windows::Networking::Proximity::IPeerFinderStatics2

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                interface IPeerInformation;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation ABI::Windows::Networking::Proximity::IPeerInformation

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                interface IPeerInformation3;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 ABI::Windows::Networking::Proximity::IPeerInformation3

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                interface IPeerInformationWithHostAndService;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService ABI::Windows::Networking::Proximity::IPeerInformationWithHostAndService

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                interface IPeerWatcher;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher ABI::Windows::Networking::Proximity::IPeerWatcher

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                interface IProximityDevice;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice ABI::Windows::Networking::Proximity::IProximityDevice

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                interface IProximityDeviceStatics;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics ABI::Windows::Networking::Proximity::IProximityDeviceStatics

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                interface IProximityMessage;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage ABI::Windows::Networking::Proximity::IProximityMessage

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                interface ITriggeredConnectionStateChangedEventArgs;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs ABI::Windows::Networking::Proximity::ITriggeredConnectionStateChangedEventArgs

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                class PeerInformation;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_USE
#define DEF___FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("eb6fe2c2-d6cd-5df0-a295-74c56ec58aab"))
IIterator<ABI::Windows::Networking::Proximity::PeerInformation*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Proximity::PeerInformation*, ABI::Windows::Networking::Proximity::IPeerInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.Proximity.PeerInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::Proximity::PeerInformation*> __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_t;
#define __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Proximity::IPeerInformation*>
//#define __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Proximity::IPeerInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation_USE
#define DEF___FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("917e1105-0647-5793-9d50-befe225f0f2f"))
IIterable<ABI::Windows::Networking::Proximity::PeerInformation*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Proximity::PeerInformation*, ABI::Windows::Networking::Proximity::IPeerInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.Proximity.PeerInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::Proximity::PeerInformation*> __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation_t;
#define __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Proximity::IPeerInformation*>
//#define __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Proximity::IPeerInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("948f92bc-2a05-5c80-95f2-96fe345852cc"))
IVectorView<ABI::Windows::Networking::Proximity::PeerInformation*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Proximity::PeerInformation*, ABI::Windows::Networking::Proximity::IPeerInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Proximity.PeerInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::Proximity::PeerInformation*> __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_t;
#define __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Proximity::IPeerInformation*>
//#define __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Proximity::IPeerInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ecf90f2c-e3f4-5b62-a066-8b9c818fd41a"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Proximity.PeerInformation>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Proximity::IPeerInformation*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Proximity::IPeerInformation*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a36ec4bc-607a-5180-a785-4042f8795c8b"))
IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Proximity.PeerInformation>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation*> __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Proximity::IPeerInformation*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Proximity::IPeerInformation*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                class ConnectionRequestedEventArgs;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("512c383c-8b29-5079-953e-8dee8f8a8224"))
ITypedEventHandler<IInspectable*,ABI::Windows::Networking::Proximity::ConnectionRequestedEventArgs*> : ITypedEventHandler_impl<IInspectable*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Proximity::ConnectionRequestedEventArgs*, ABI::Windows::Networking::Proximity::IConnectionRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Object, Windows.Networking.Proximity.ConnectionRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<IInspectable*,ABI::Windows::Networking::Proximity::ConnectionRequestedEventArgs*> __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs_t;
#define __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::Networking::Proximity::IConnectionRequestedEventArgs*>
//#define __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::Networking::Proximity::IConnectionRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                class TriggeredConnectionStateChangedEventArgs;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2e5ad6fa-3ca6-5518-bd4d-fefc4535580e"))
ITypedEventHandler<IInspectable*,ABI::Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs*> : ITypedEventHandler_impl<IInspectable*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs*, ABI::Windows::Networking::Proximity::ITriggeredConnectionStateChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Object, Windows.Networking.Proximity.TriggeredConnectionStateChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<IInspectable*,ABI::Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs*> __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs_t;
#define __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::Networking::Proximity::ITriggeredConnectionStateChangedEventArgs*>
//#define __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::Networking::Proximity::ITriggeredConnectionStateChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                class PeerWatcher;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f4979ea1-7e06-50a8-88dc-3f29524e4fdb"))
ITypedEventHandler<ABI::Windows::Networking::Proximity::PeerWatcher*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Proximity::PeerWatcher*, ABI::Windows::Networking::Proximity::IPeerWatcher*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Networking.Proximity.PeerWatcher, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Networking::Proximity::PeerWatcher*,IInspectable*> __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Proximity::IPeerWatcher*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Proximity::IPeerWatcher*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation_USE
#define DEF___FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ad674bbf-6281-5943-9772-e0fd7664d4e1"))
ITypedEventHandler<ABI::Windows::Networking::Proximity::PeerWatcher*,ABI::Windows::Networking::Proximity::PeerInformation*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Proximity::PeerWatcher*, ABI::Windows::Networking::Proximity::IPeerWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Proximity::PeerInformation*, ABI::Windows::Networking::Proximity::IPeerInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Networking.Proximity.PeerWatcher, Windows.Networking.Proximity.PeerInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Networking::Proximity::PeerWatcher*,ABI::Windows::Networking::Proximity::PeerInformation*> __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation_t;
#define __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Proximity::IPeerWatcher*,ABI::Windows::Networking::Proximity::IPeerInformation*>
//#define __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Proximity::IPeerWatcher*,ABI::Windows::Networking::Proximity::IPeerInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60310303-49c5-52e6-abc6-a9b36eccc716"))
IKeyValuePair<HSTRING,HSTRING> : IKeyValuePair_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,HSTRING> __FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
//#define __FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("05eb86f1-7140-5517-b88d-cbaebe57e6b1"))
IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e9bdaaf0-cbf6-5c72-be90-29cbf3a1319b"))
IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */




#ifndef DEF___FIMapView_2_HSTRING_HSTRING_USE
#define DEF___FIMapView_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ac7f26f2-feb7-5b2a-8ac4-345bc62caede"))
IMapView<HSTRING,HSTRING> : IMapView_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,HSTRING> __FIMapView_2_HSTRING_HSTRING_t;
#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
//#define __FIMapView_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_HSTRING_USE */




#ifndef DEF___FIMap_2_HSTRING_HSTRING_USE
#define DEF___FIMap_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f6d1f700-49c2-52ae-8154-826f9908773c"))
IMap<HSTRING,HSTRING> : IMap_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,HSTRING> __FIMap_2_HSTRING_HSTRING_t;
#define __FIMap_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IMap<HSTRING,HSTRING>
//#define __FIMap_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IMap<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_HSTRING_USE */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class StreamSocket;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

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
            namespace Proximity {
                
                typedef enum PeerDiscoveryTypes : unsigned int PeerDiscoveryTypes;
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                
                typedef enum PeerRole : int PeerRole;
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                
                typedef enum PeerWatcherStatus : int PeerWatcherStatus;
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                
                typedef enum TriggeredConnectState : int TriggeredConnectState;
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */




















namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                class ProximityDevice;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                class ProximityMessage;
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */











/*
 *
 * Struct Windows.Networking.Proximity.PeerDiscoveryTypes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [v1_enum, flags, contract] */
                enum PeerDiscoveryTypes : unsigned int
                {
                    PeerDiscoveryTypes_None = 0,
                    PeerDiscoveryTypes_Browse = 0x1,
                    PeerDiscoveryTypes_Triggered = 0x2,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(PeerDiscoveryTypes)
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Proximity.PeerRole
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [v1_enum, contract] */
                enum PeerRole : int
                {
                    PeerRole_Peer = 0,
                    PeerRole_Host = 1,
                    PeerRole_Client = 2,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Proximity.PeerWatcherStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [v1_enum, contract] */
                enum PeerWatcherStatus : int
                {
                    PeerWatcherStatus_Created = 0,
                    PeerWatcherStatus_Started = 1,
                    PeerWatcherStatus_EnumerationCompleted = 2,
                    PeerWatcherStatus_Stopping = 3,
                    PeerWatcherStatus_Stopped = 4,
                    PeerWatcherStatus_Aborted = 5,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Proximity.TriggeredConnectState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [v1_enum, contract] */
                enum TriggeredConnectState : int
                {
                    TriggeredConnectState_PeerFound = 0,
                    TriggeredConnectState_Listening = 1,
                    TriggeredConnectState_Connecting = 2,
                    TriggeredConnectState_Completed = 3,
                    TriggeredConnectState_Canceled = 4,
                    TriggeredConnectState_Failed = 5,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Networking.Proximity.DeviceArrivedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [object, uuid("EFA9DA69-F6E1-49C9-A49E-8E0FC58FB911"), contract] */
                MIDL_INTERFACE("EFA9DA69-F6E1-49C9-A49E-8E0FC58FB911")
                IDeviceArrivedEventHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Proximity::IProximityDevice * sender
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceArrivedEventHandler=_uuidof(IDeviceArrivedEventHandler);
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Networking.Proximity.DeviceDepartedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [object, uuid("EFA9DA69-F6E2-49C9-A49E-8E0FC58FB911"), contract] */
                MIDL_INTERFACE("EFA9DA69-F6E2-49C9-A49E-8E0FC58FB911")
                IDeviceDepartedEventHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Proximity::IProximityDevice * sender
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceDepartedEventHandler=_uuidof(IDeviceDepartedEventHandler);
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Networking.Proximity.MessageReceivedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [object, uuid("EFAB0782-F6E2-4675-A045-D8E320C24808"), contract] */
                MIDL_INTERFACE("EFAB0782-F6E2-4675-A045-D8E320C24808")
                IMessageReceivedHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Proximity::IProximityDevice * sender,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Proximity::IProximityMessage * message
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMessageReceivedHandler=_uuidof(IMessageReceivedHandler);
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Networking.Proximity.MessageTransmittedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [object, uuid("EFAA0B4A-F6E2-4D7D-856C-78FC8EFC021E"), contract] */
                MIDL_INTERFACE("EFAA0B4A-F6E2-4D7D-856C-78FC8EFC021E")
                IMessageTransmittedHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Proximity::IProximityDevice * sender,
                        /* [in] */INT64 messageId
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMessageTransmittedHandler=_uuidof(IMessageTransmittedHandler);
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IConnectionRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.ConnectionRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IConnectionRequestedEventArgs[] = L"Windows.Networking.Proximity.IConnectionRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [object, uuid("EB6891AE-4F1E-4C66-BD0D-46924A942E08"), exclusiveto, contract] */
                MIDL_INTERFACE("EB6891AE-4F1E-4C66-BD0D-46924A942E08")
                IConnectionRequestedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PeerInformation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Proximity::IPeerInformation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IConnectionRequestedEventArgs=_uuidof(IConnectionRequestedEventArgs);
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IPeerFinderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.PeerFinder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IPeerFinderStatics[] = L"Windows.Networking.Proximity.IPeerFinderStatics";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [object, uuid("914B3B61-F6E1-47C4-A14C-148A1903D0C6"), exclusiveto, contract] */
                MIDL_INTERFACE("914B3B61-F6E1-47C4-A14C-148A1903D0C6")
                IPeerFinderStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllowBluetooth(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AllowBluetooth(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllowInfrastructure(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AllowInfrastructure(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllowWiFiDirect(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AllowWiFiDirect(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedDiscoveryTypes(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Proximity::PeerDiscoveryTypes * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlternateIdentities(
                        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE StartWithMessage(
                        /* [in] */__RPC__in HSTRING peerMessage
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TriggeredConnectionStateChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TriggeredConnectionStateChanged(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ConnectionRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ConnectionRequested(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FindAllPeersAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * * asyncOp
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ConnectAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Proximity::IPeerInformation * peerInformation,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * * asyncOp
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPeerFinderStatics=_uuidof(IPeerFinderStatics);
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IPeerFinderStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.PeerFinder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IPeerFinderStatics2[] = L"Windows.Networking.Proximity.IPeerFinderStatics2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [object, uuid("D6E73C65-FDD0-4B0B-9312-866408935D82"), exclusiveto, contract] */
                MIDL_INTERFACE("D6E73C65-FDD0-4B0B-9312-866408935D82")
                IPeerFinderStatics2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Role(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Proximity::PeerRole * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Role(
                        /* [in] */ABI::Windows::Networking::Proximity::PeerRole value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DiscoveryData(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DiscoveryData(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWatcher(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Proximity::IPeerWatcher * * watcher
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPeerFinderStatics2=_uuidof(IPeerFinderStatics2);
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IPeerInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.PeerInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IPeerInformation[] = L"Windows.Networking.Proximity.IPeerInformation";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [object, uuid("20024F08-9FFF-45F4-B6E9-408B2EBEF373"), exclusiveto, contract] */
                MIDL_INTERFACE("20024F08-9FFF-45F4-B6E9-408B2EBEF373")
                IPeerInformation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPeerInformation=_uuidof(IPeerInformation);
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IPeerInformation3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.PeerInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IPeerInformation3[] = L"Windows.Networking.Proximity.IPeerInformation3";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [object, uuid("B20F612A-DBD0-40F8-95BD-2D4209C7836F"), exclusiveto, contract] */
                MIDL_INTERFACE("B20F612A-DBD0-40F8-95BD-2D4209C7836F")
                IPeerInformation3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DiscoveryData(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPeerInformation3=_uuidof(IPeerInformation3);
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IPeerInformationWithHostAndService
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.PeerInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IPeerInformationWithHostAndService[] = L"Windows.Networking.Proximity.IPeerInformationWithHostAndService";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [object, uuid("ECC7CCAD-1B70-4E8B-92DB-BBE781419308"), exclusiveto, contract] */
                MIDL_INTERFACE("ECC7CCAD-1B70-4E8B-92DB-BBE781419308")
                IPeerInformationWithHostAndService : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HostName(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPeerInformationWithHostAndService=_uuidof(IPeerInformationWithHostAndService);
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IPeerWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.PeerWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IPeerWatcher[] = L"Windows.Networking.Proximity.IPeerWatcher";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [object, uuid("3CEE21F8-2FA6-4679-9691-03C94A420F34"), exclusiveto, contract] */
                MIDL_INTERFACE("3CEE21F8-2FA6-4679-9691-03C94A420F34")
                IPeerWatcher : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Added(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Added(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Removed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Removed(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Updated(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Updated(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_EnumerationCompleted(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_EnumerationCompleted(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Stopped(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Stopped(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Proximity::PeerWatcherStatus * status
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPeerWatcher=_uuidof(IPeerWatcher);
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IProximityDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.ProximityDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IProximityDevice[] = L"Windows.Networking.Proximity.IProximityDevice";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [object, uuid("EFA8A552-F6E1-4329-A0FC-AB6B0FD28262"), exclusiveto, contract] */
                MIDL_INTERFACE("EFA8A552-F6E1-4329-A0FC-AB6B0FD28262")
                IProximityDevice : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SubscribeForMessage(
                        /* [in] */__RPC__in HSTRING messageType,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Proximity::IMessageReceivedHandler  * messageReceivedHandler,
                        /* [retval, out] */__RPC__out INT64 * subscriptionId
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE PublishMessage(
                        /* [in] */__RPC__in HSTRING messageType,
                        /* [in] */__RPC__in HSTRING message,
                        /* [retval, out] */__RPC__out INT64 * messageId
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE PublishMessageWithCallback(
                        /* [in] */__RPC__in HSTRING messageType,
                        /* [in] */__RPC__in HSTRING message,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Proximity::IMessageTransmittedHandler  * messageTransmittedHandler,
                        /* [retval, out] */__RPC__out INT64 * messageId
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE PublishBinaryMessage(
                        /* [in] */__RPC__in HSTRING messageType,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * message,
                        /* [retval, out] */__RPC__out INT64 * messageId
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE PublishBinaryMessageWithCallback(
                        /* [in] */__RPC__in HSTRING messageType,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * message,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Proximity::IMessageTransmittedHandler  * messageTransmittedHandler,
                        /* [retval, out] */__RPC__out INT64 * messageId
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE PublishUriMessage(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * message,
                        /* [retval, out] */__RPC__out INT64 * messageId
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE PublishUriMessageWithCallback(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * message,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Proximity::IMessageTransmittedHandler  * messageTransmittedHandler,
                        /* [retval, out] */__RPC__out INT64 * messageId
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE StopSubscribingForMessage(
                        /* [in] */INT64 subscriptionId
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE StopPublishingMessage(
                        /* [in] */INT64 messageId
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DeviceArrived(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Proximity::IDeviceArrivedEventHandler  * arrivedHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DeviceArrived(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DeviceDeparted(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Proximity::IDeviceDepartedEventHandler  * departedHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DeviceDeparted(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxMessageBytes(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BitsPerSecond(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProximityDevice=_uuidof(IProximityDevice);
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IProximityDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.ProximityDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IProximityDeviceStatics[] = L"Windows.Networking.Proximity.IProximityDeviceStatics";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [object, uuid("914BA01D-F6E1-47C4-A14C-148A1903D0C6"), exclusiveto, contract] */
                MIDL_INTERFACE("914BA01D-F6E1-47C4-A14C-148A1903D0C6")
                IProximityDeviceStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Proximity::IProximityDevice * * proximityDevice
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromId(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Proximity::IProximityDevice * * proximityDevice
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProximityDeviceStatics=_uuidof(IProximityDeviceStatics);
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IProximityMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.ProximityMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IProximityMessage[] = L"Windows.Networking.Proximity.IProximityMessage";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [object, uuid("EFAB0782-F6E1-4675-A045-D8E320C24808"), exclusiveto, contract] */
                MIDL_INTERFACE("EFAB0782-F6E1-4675-A045-D8E320C24808")
                IProximityMessage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MessageType(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SubscriptionId(
                        /* [retval, out] */__RPC__out INT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Data(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataAsString(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProximityMessage=_uuidof(IProximityMessage);
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.ITriggeredConnectionStateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.TriggeredConnectionStateChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_ITriggeredConnectionStateChangedEventArgs[] = L"Windows.Networking.Proximity.ITriggeredConnectionStateChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Proximity {
                /* [object, uuid("C6A780AD-F6E1-4D54-96E2-33F620BCA88A"), exclusiveto, contract] */
                MIDL_INTERFACE("C6A780AD-F6E1-4D54-96E2-33F620BCA88A")
                ITriggeredConnectionStateChangedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Proximity::TriggeredConnectState * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Socket(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IStreamSocket * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITriggeredConnectionStateChangedEventArgs=_uuidof(ITriggeredConnectionStateChangedEventArgs);
                
            } /* Windows */
        } /* Networking */
    } /* Proximity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Proximity.ConnectionRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Proximity.IConnectionRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Proximity_ConnectionRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_Proximity_ConnectionRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_ConnectionRequestedEventArgs[] = L"Windows.Networking.Proximity.ConnectionRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Proximity.PeerFinder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Proximity.IPeerFinderStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Networking.Proximity.IPeerFinderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Networking_Proximity_PeerFinder_DEFINED
#define RUNTIMECLASS_Windows_Networking_Proximity_PeerFinder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_PeerFinder[] = L"Windows.Networking.Proximity.PeerFinder";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Proximity.PeerInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Proximity.IPeerInformation ** Default Interface **
 *    Windows.Networking.Proximity.IPeerInformation3
 *    Windows.Networking.Proximity.IPeerInformationWithHostAndService
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Proximity_PeerInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_Proximity_PeerInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_PeerInformation[] = L"Windows.Networking.Proximity.PeerInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Proximity.PeerWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Proximity.IPeerWatcher ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Proximity_PeerWatcher_DEFINED
#define RUNTIMECLASS_Windows_Networking_Proximity_PeerWatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_PeerWatcher[] = L"Windows.Networking.Proximity.PeerWatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Proximity.ProximityDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Proximity.IProximityDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Proximity.IProximityDevice ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Proximity_ProximityDevice_DEFINED
#define RUNTIMECLASS_Windows_Networking_Proximity_ProximityDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_ProximityDevice[] = L"Windows.Networking.Proximity.ProximityDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Proximity.ProximityMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Proximity.IProximityMessage ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Proximity_ProximityMessage_DEFINED
#define RUNTIMECLASS_Windows_Networking_Proximity_ProximityMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_ProximityMessage[] = L"Windows.Networking.Proximity.ProximityMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Proximity.TriggeredConnectionStateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Proximity.ITriggeredConnectionStateChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Proximity_TriggeredConnectionStateChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_Proximity_TriggeredConnectionStateChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_TriggeredConnectionStateChangedEventArgs[] = L"Windows.Networking.Proximity.TriggeredConnectionStateChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler;

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler;

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler;

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler;

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs;

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics;

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2;

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation;

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3;

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService;

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher;

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice;

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics;

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage;

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs;

#endif // ____x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation;

typedef struct __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformationVtbl;

interface __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation;

typedef  struct __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformationVtbl;

interface __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation;

typedef struct __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformationVtbl;

interface __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformationVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformationVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs;

typedef struct __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs * This,/* [in] */ __RPC__in_opt IInspectable * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs;

typedef struct __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs * This,/* [in] */ __RPC__in_opt IInspectable * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgsVtbl;

interface __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation;

typedef struct __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformationVtbl;

interface __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;

typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;

interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_HSTRING_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_HSTRING_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_HSTRING_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_HSTRING __FIMap_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_HSTRING;

typedef struct __FIMap_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt HSTRING *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    END_INTERFACE
} __FIMap_2_HSTRING_HSTRINGVtbl;

interface __FIMap_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMap_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_HSTRING_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_HSTRING_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_HSTRING_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_HSTRING_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_HSTRING_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_HSTRING_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_FWD_DEFINED__


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



#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;

#endif // ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__








#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CNetworking_CProximity_CPeerDiscoveryTypes __x_ABI_CWindows_CNetworking_CProximity_CPeerDiscoveryTypes;


typedef enum __x_ABI_CWindows_CNetworking_CProximity_CPeerRole __x_ABI_CWindows_CNetworking_CProximity_CPeerRole;


typedef enum __x_ABI_CWindows_CNetworking_CProximity_CPeerWatcherStatus __x_ABI_CWindows_CNetworking_CProximity_CPeerWatcherStatus;


typedef enum __x_ABI_CWindows_CNetworking_CProximity_CTriggeredConnectState __x_ABI_CWindows_CNetworking_CProximity_CTriggeredConnectState;































/*
 *
 * Struct Windows.Networking.Proximity.PeerDiscoveryTypes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CNetworking_CProximity_CPeerDiscoveryTypes
{
    PeerDiscoveryTypes_None = 0,
    PeerDiscoveryTypes_Browse = 0x1,
    PeerDiscoveryTypes_Triggered = 0x2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Proximity.PeerRole
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CProximity_CPeerRole
{
    PeerRole_Peer = 0,
    PeerRole_Host = 1,
    PeerRole_Client = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Proximity.PeerWatcherStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CProximity_CPeerWatcherStatus
{
    PeerWatcherStatus_Created = 0,
    PeerWatcherStatus_Started = 1,
    PeerWatcherStatus_EnumerationCompleted = 2,
    PeerWatcherStatus_Stopping = 3,
    PeerWatcherStatus_Stopped = 4,
    PeerWatcherStatus_Aborted = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Proximity.TriggeredConnectState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CProximity_CTriggeredConnectState
{
    TriggeredConnectState_PeerFound = 0,
    TriggeredConnectState_Listening = 1,
    TriggeredConnectState_Connecting = 2,
    TriggeredConnectState_Completed = 3,
    TriggeredConnectState_Canceled = 4,
    TriggeredConnectState_Failed = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Networking.Proximity.DeviceArrivedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("EFA9DA69-F6E1-49C9-A49E-8E0FC58FB911"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * sender
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandlerVtbl;

interface __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler_Invoke(This,sender) \
    ( (This)->lpVtbl->Invoke(This,sender) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Networking.Proximity.DeviceDepartedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("EFA9DA69-F6E2-49C9-A49E-8E0FC58FB911"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * sender
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandlerVtbl;

interface __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler_Invoke(This,sender) \
    ( (This)->lpVtbl->Invoke(This,sender) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Networking.Proximity.MessageReceivedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler_INTERFACE_DEFINED__
/* [object, uuid("EFAB0782-F6E2-4675-A045-D8E320C24808"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * message
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandlerVtbl;

interface __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler_Invoke(This,sender,message) \
    ( (This)->lpVtbl->Invoke(This,sender,message) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Networking.Proximity.MessageTransmittedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler_INTERFACE_DEFINED__
/* [object, uuid("EFAA0B4A-F6E2-4D7D-856C-78FC8EFC021E"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * sender,
        /* [in] */INT64 messageId
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandlerVtbl;

interface __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler_Invoke(This,sender,messageId) \
    ( (This)->lpVtbl->Invoke(This,sender,messageId) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IConnectionRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.ConnectionRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IConnectionRequestedEventArgs[] = L"Windows.Networking.Proximity.IConnectionRequestedEventArgs";
/* [object, uuid("EB6891AE-4F1E-4C66-BD0D-46924A942E08"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PeerInformation )(
        __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_get_PeerInformation(This,value) \
    ( (This)->lpVtbl->get_PeerInformation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IPeerFinderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.PeerFinder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IPeerFinderStatics[] = L"Windows.Networking.Proximity.IPeerFinderStatics";
/* [object, uuid("914B3B61-F6E1-47C4-A14C-148A1903D0C6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllowBluetooth )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AllowBluetooth )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllowInfrastructure )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AllowInfrastructure )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllowWiFiDirect )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AllowWiFiDirect )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedDiscoveryTypes )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CProximity_CPeerDiscoveryTypes * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlternateIdentities )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *StartWithMessage )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
        /* [in] */__RPC__in HSTRING peerMessage
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TriggeredConnectionStateChanged )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TriggeredConnectionStateChanged )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ConnectionRequested )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ConnectionRequested )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
        /* [in] */EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *FindAllPeersAsync )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * * asyncOp
        );
    HRESULT ( STDMETHODCALLTYPE *ConnectAsync )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * peerInformation,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * * asyncOp
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStaticsVtbl;

interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_get_AllowBluetooth(This,value) \
    ( (This)->lpVtbl->get_AllowBluetooth(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_put_AllowBluetooth(This,value) \
    ( (This)->lpVtbl->put_AllowBluetooth(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_get_AllowInfrastructure(This,value) \
    ( (This)->lpVtbl->get_AllowInfrastructure(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_put_AllowInfrastructure(This,value) \
    ( (This)->lpVtbl->put_AllowInfrastructure(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_get_AllowWiFiDirect(This,value) \
    ( (This)->lpVtbl->get_AllowWiFiDirect(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_put_AllowWiFiDirect(This,value) \
    ( (This)->lpVtbl->put_AllowWiFiDirect(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_put_DisplayName(This,value) \
    ( (This)->lpVtbl->put_DisplayName(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_get_SupportedDiscoveryTypes(This,value) \
    ( (This)->lpVtbl->get_SupportedDiscoveryTypes(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_get_AlternateIdentities(This,value) \
    ( (This)->lpVtbl->get_AlternateIdentities(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_StartWithMessage(This,peerMessage) \
    ( (This)->lpVtbl->StartWithMessage(This,peerMessage) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_add_TriggeredConnectionStateChanged(This,handler,cookie) \
    ( (This)->lpVtbl->add_TriggeredConnectionStateChanged(This,handler,cookie) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_remove_TriggeredConnectionStateChanged(This,cookie) \
    ( (This)->lpVtbl->remove_TriggeredConnectionStateChanged(This,cookie) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_add_ConnectionRequested(This,handler,cookie) \
    ( (This)->lpVtbl->add_ConnectionRequested(This,handler,cookie) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_remove_ConnectionRequested(This,cookie) \
    ( (This)->lpVtbl->remove_ConnectionRequested(This,cookie) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_FindAllPeersAsync(This,asyncOp) \
    ( (This)->lpVtbl->FindAllPeersAsync(This,asyncOp) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_ConnectAsync(This,peerInformation,asyncOp) \
    ( (This)->lpVtbl->ConnectAsync(This,peerInformation,asyncOp) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IPeerFinderStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.PeerFinder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IPeerFinderStatics2[] = L"Windows.Networking.Proximity.IPeerFinderStatics2";
/* [object, uuid("D6E73C65-FDD0-4B0B-9312-866408935D82"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Role )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CProximity_CPeerRole * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Role )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CProximity_CPeerRole value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DiscoveryData )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DiscoveryData )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWatcher )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * * watcher
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2Vtbl;

interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_get_Role(This,value) \
    ( (This)->lpVtbl->get_Role(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_put_Role(This,value) \
    ( (This)->lpVtbl->put_Role(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_get_DiscoveryData(This,value) \
    ( (This)->lpVtbl->get_DiscoveryData(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_put_DiscoveryData(This,value) \
    ( (This)->lpVtbl->put_DiscoveryData(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_CreateWatcher(This,watcher) \
    ( (This)->lpVtbl->CreateWatcher(This,watcher) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IPeerInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.PeerInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IPeerInformation[] = L"Windows.Networking.Proximity.IPeerInformation";
/* [object, uuid("20024F08-9FFF-45F4-B6E9-408B2EBEF373"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationVtbl;

interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IPeerInformation3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.PeerInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IPeerInformation3[] = L"Windows.Networking.Proximity.IPeerInformation3";
/* [object, uuid("B20F612A-DBD0-40F8-95BD-2D4209C7836F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DiscoveryData )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3Vtbl;

interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_get_DiscoveryData(This,value) \
    ( (This)->lpVtbl->get_DiscoveryData(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IPeerInformationWithHostAndService
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.PeerInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IPeerInformationWithHostAndService[] = L"Windows.Networking.Proximity.IPeerInformationWithHostAndService";
/* [object, uuid("ECC7CCAD-1B70-4E8B-92DB-BBE781419308"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HostName )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceName )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndServiceVtbl;

interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndServiceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_get_HostName(This,value) \
    ( (This)->lpVtbl->get_HostName(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_get_ServiceName(This,value) \
    ( (This)->lpVtbl->get_ServiceName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IPeerWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.PeerWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IPeerWatcher[] = L"Windows.Networking.Proximity.IPeerWatcher";
/* [object, uuid("3CEE21F8-2FA6-4679-9691-03C94A420F34"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Updated )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Updated )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CProximity_CPeerWatcherStatus * status
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcherVtbl;

interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcherVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_add_Added(This,handler,token) \
    ( (This)->lpVtbl->add_Added(This,handler,token) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_remove_Added(This,token) \
    ( (This)->lpVtbl->remove_Added(This,token) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_add_Removed(This,handler,token) \
    ( (This)->lpVtbl->add_Removed(This,handler,token) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_remove_Removed(This,token) \
    ( (This)->lpVtbl->remove_Removed(This,token) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_add_Updated(This,handler,token) \
    ( (This)->lpVtbl->add_Updated(This,handler,token) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_remove_Updated(This,token) \
    ( (This)->lpVtbl->remove_Updated(This,token) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_add_EnumerationCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_remove_EnumerationCompleted(This,token) \
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_add_Stopped(This,handler,token) \
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_remove_Stopped(This,token) \
    ( (This)->lpVtbl->remove_Stopped(This,token) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_get_Status(This,status) \
    ( (This)->lpVtbl->get_Status(This,status) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IProximityDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.ProximityDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IProximityDevice[] = L"Windows.Networking.Proximity.IProximityDevice";
/* [object, uuid("EFA8A552-F6E1-4329-A0FC-AB6B0FD28262"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SubscribeForMessage )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
        /* [in] */__RPC__in HSTRING messageType,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler  * messageReceivedHandler,
        /* [retval, out] */__RPC__out INT64 * subscriptionId
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *PublishMessage )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
        /* [in] */__RPC__in HSTRING messageType,
        /* [in] */__RPC__in HSTRING message,
        /* [retval, out] */__RPC__out INT64 * messageId
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *PublishMessageWithCallback )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
        /* [in] */__RPC__in HSTRING messageType,
        /* [in] */__RPC__in HSTRING message,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler  * messageTransmittedHandler,
        /* [retval, out] */__RPC__out INT64 * messageId
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *PublishBinaryMessage )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
        /* [in] */__RPC__in HSTRING messageType,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * message,
        /* [retval, out] */__RPC__out INT64 * messageId
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *PublishBinaryMessageWithCallback )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
        /* [in] */__RPC__in HSTRING messageType,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * message,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler  * messageTransmittedHandler,
        /* [retval, out] */__RPC__out INT64 * messageId
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *PublishUriMessage )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * message,
        /* [retval, out] */__RPC__out INT64 * messageId
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *PublishUriMessageWithCallback )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * message,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler  * messageTransmittedHandler,
        /* [retval, out] */__RPC__out INT64 * messageId
        );
    HRESULT ( STDMETHODCALLTYPE *StopSubscribingForMessage )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
        /* [in] */INT64 subscriptionId
        );
    HRESULT ( STDMETHODCALLTYPE *StopPublishingMessage )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
        /* [in] */INT64 messageId
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DeviceArrived )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler  * arrivedHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DeviceArrived )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DeviceDeparted )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler  * departedHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DeviceDeparted )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxMessageBytes )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BitsPerSecond )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceVtbl;

interface __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_SubscribeForMessage(This,messageType,messageReceivedHandler,subscriptionId) \
    ( (This)->lpVtbl->SubscribeForMessage(This,messageType,messageReceivedHandler,subscriptionId) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_PublishMessage(This,messageType,message,messageId) \
    ( (This)->lpVtbl->PublishMessage(This,messageType,message,messageId) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_PublishMessageWithCallback(This,messageType,message,messageTransmittedHandler,messageId) \
    ( (This)->lpVtbl->PublishMessageWithCallback(This,messageType,message,messageTransmittedHandler,messageId) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_PublishBinaryMessage(This,messageType,message,messageId) \
    ( (This)->lpVtbl->PublishBinaryMessage(This,messageType,message,messageId) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_PublishBinaryMessageWithCallback(This,messageType,message,messageTransmittedHandler,messageId) \
    ( (This)->lpVtbl->PublishBinaryMessageWithCallback(This,messageType,message,messageTransmittedHandler,messageId) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_PublishUriMessage(This,message,messageId) \
    ( (This)->lpVtbl->PublishUriMessage(This,message,messageId) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_PublishUriMessageWithCallback(This,message,messageTransmittedHandler,messageId) \
    ( (This)->lpVtbl->PublishUriMessageWithCallback(This,message,messageTransmittedHandler,messageId) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_StopSubscribingForMessage(This,subscriptionId) \
    ( (This)->lpVtbl->StopSubscribingForMessage(This,subscriptionId) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_StopPublishingMessage(This,messageId) \
    ( (This)->lpVtbl->StopPublishingMessage(This,messageId) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_add_DeviceArrived(This,arrivedHandler,cookie) \
    ( (This)->lpVtbl->add_DeviceArrived(This,arrivedHandler,cookie) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_remove_DeviceArrived(This,cookie) \
    ( (This)->lpVtbl->remove_DeviceArrived(This,cookie) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_add_DeviceDeparted(This,departedHandler,cookie) \
    ( (This)->lpVtbl->add_DeviceDeparted(This,departedHandler,cookie) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_remove_DeviceDeparted(This,cookie) \
    ( (This)->lpVtbl->remove_DeviceDeparted(This,cookie) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_get_MaxMessageBytes(This,value) \
    ( (This)->lpVtbl->get_MaxMessageBytes(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_get_BitsPerSecond(This,value) \
    ( (This)->lpVtbl->get_BitsPerSecond(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IProximityDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.ProximityDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IProximityDeviceStatics[] = L"Windows.Networking.Proximity.IProximityDeviceStatics";
/* [object, uuid("914BA01D-F6E1-47C4-A14C-148A1903D0C6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * * proximityDevice
        );
    HRESULT ( STDMETHODCALLTYPE *FromId )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * * proximityDevice
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStaticsVtbl;

interface __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_GetDeviceSelector(This,selector) \
    ( (This)->lpVtbl->GetDeviceSelector(This,selector) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_GetDefault(This,proximityDevice) \
    ( (This)->lpVtbl->GetDefault(This,proximityDevice) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_FromId(This,deviceId,proximityDevice) \
    ( (This)->lpVtbl->FromId(This,deviceId,proximityDevice) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.IProximityMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.ProximityMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IProximityMessage[] = L"Windows.Networking.Proximity.IProximityMessage";
/* [object, uuid("EFAB0782-F6E1-4675-A045-D8E320C24808"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MessageType )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SubscriptionId )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This,
        /* [retval, out] */__RPC__out INT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataAsString )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessageVtbl;

interface __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_get_MessageType(This,value) \
    ( (This)->lpVtbl->get_MessageType(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_get_SubscriptionId(This,value) \
    ( (This)->lpVtbl->get_SubscriptionId(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_get_Data(This,value) \
    ( (This)->lpVtbl->get_Data(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_get_DataAsString(This,value) \
    ( (This)->lpVtbl->get_DataAsString(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Proximity.ITriggeredConnectionStateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Proximity.TriggeredConnectionStateChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_ITriggeredConnectionStateChangedEventArgs[] = L"Windows.Networking.Proximity.ITriggeredConnectionStateChangedEventArgs";
/* [object, uuid("C6A780AD-F6E1-4D54-96E2-33F620BCA88A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CProximity_CTriggeredConnectState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Socket )(
        __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgsVtbl;

interface __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_get_Socket(This,value) \
    ( (This)->lpVtbl->get_Socket(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Proximity.ConnectionRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Proximity.IConnectionRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Proximity_ConnectionRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_Proximity_ConnectionRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_ConnectionRequestedEventArgs[] = L"Windows.Networking.Proximity.ConnectionRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Proximity.PeerFinder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Proximity.IPeerFinderStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Networking.Proximity.IPeerFinderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Networking_Proximity_PeerFinder_DEFINED
#define RUNTIMECLASS_Windows_Networking_Proximity_PeerFinder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_PeerFinder[] = L"Windows.Networking.Proximity.PeerFinder";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Proximity.PeerInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Proximity.IPeerInformation ** Default Interface **
 *    Windows.Networking.Proximity.IPeerInformation3
 *    Windows.Networking.Proximity.IPeerInformationWithHostAndService
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Proximity_PeerInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_Proximity_PeerInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_PeerInformation[] = L"Windows.Networking.Proximity.PeerInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Proximity.PeerWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Proximity.IPeerWatcher ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Proximity_PeerWatcher_DEFINED
#define RUNTIMECLASS_Windows_Networking_Proximity_PeerWatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_PeerWatcher[] = L"Windows.Networking.Proximity.PeerWatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Proximity.ProximityDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Proximity.IProximityDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Proximity.IProximityDevice ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Proximity_ProximityDevice_DEFINED
#define RUNTIMECLASS_Windows_Networking_Proximity_ProximityDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_ProximityDevice[] = L"Windows.Networking.Proximity.ProximityDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Proximity.ProximityMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Proximity.IProximityMessage ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Proximity_ProximityMessage_DEFINED
#define RUNTIMECLASS_Windows_Networking_Proximity_ProximityMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_ProximityMessage[] = L"Windows.Networking.Proximity.ProximityMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Proximity.TriggeredConnectionStateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Proximity.ITriggeredConnectionStateChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Proximity_TriggeredConnectionStateChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_Proximity_TriggeredConnectionStateChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_TriggeredConnectionStateChangedEventArgs[] = L"Windows.Networking.Proximity.TriggeredConnectionStateChangedEventArgs";
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
#endif // __windows2Enetworking2Eproximity_p_h__

#endif // __windows2Enetworking2Eproximity_h__
