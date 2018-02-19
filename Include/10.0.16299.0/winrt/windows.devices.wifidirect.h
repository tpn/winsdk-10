/* Header file automatically generated from windows.devices.wifidirect.idl */
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
#ifndef __windows2Edevices2Ewifidirect_h__
#define __windows2Edevices2Ewifidirect_h__
#ifndef __windows2Edevices2Ewifidirect_p_h__
#define __windows2Edevices2Ewifidirect_p_h__


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
#include "Windows.Devices.Enumeration.h"
#include "Windows.Networking.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                interface IWiFiDirectAdvertisement;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement ABI::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                interface IWiFiDirectAdvertisement2;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2 ABI::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                interface IWiFiDirectAdvertisementPublisher;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher ABI::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                interface IWiFiDirectAdvertisementPublisherStatusChangedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs ABI::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                interface IWiFiDirectConnectionListener;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener ABI::Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                interface IWiFiDirectConnectionParameters;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters ABI::Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                interface IWiFiDirectConnectionParameters2;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 ABI::Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                interface IWiFiDirectConnectionParametersStatics;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics ABI::Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                interface IWiFiDirectConnectionRequest;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest ABI::Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                interface IWiFiDirectConnectionRequestedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs ABI::Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                interface IWiFiDirectDevice;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice ABI::Windows::Devices::WiFiDirect::IWiFiDirectDevice

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                interface IWiFiDirectDeviceStatics;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics ABI::Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                interface IWiFiDirectDeviceStatics2;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 ABI::Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                interface IWiFiDirectInformationElement;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement ABI::Windows::Devices::WiFiDirect::IWiFiDirectInformationElement

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                interface IWiFiDirectInformationElementStatics;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics ABI::Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                interface IWiFiDirectLegacySettings;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings ABI::Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                enum WiFiDirectConfigurationMethod : int;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_USE
#define DEF___FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("201940f9-a368-57f4-9ef2-3f64e243e0a4"))
IIterator<enum ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> : IIterator_impl<enum ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.WiFiDirect.WiFiDirectConfigurationMethod>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_t;
#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod>
//#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_USE */





#ifndef DEF___FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_USE
#define DEF___FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("794f12da-2dc6-5277-82dc-b0781610537b"))
IIterable<enum ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> : IIterable_impl<enum ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.WiFiDirect.WiFiDirectConfigurationMethod>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_t;
#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod>
//#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_USE */



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                class WiFiDirectInformationElement;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_USE
#define DEF___FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cf806026-c915-553e-af3c-8da43871b693"))
IIterator<ABI::Windows::Devices::WiFiDirect::WiFiDirectInformationElement*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFiDirect::WiFiDirectInformationElement*, ABI::Windows::Devices::WiFiDirect::IWiFiDirectInformationElement*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.WiFiDirect.WiFiDirectInformationElement>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::WiFiDirect::WiFiDirectInformationElement*> __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_t;
#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::WiFiDirect::IWiFiDirectInformationElement*>
//#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::WiFiDirect::IWiFiDirectInformationElement*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_USE
#define DEF___FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("19c1ca4e-9561-5253-96d9-dbaf28d47d89"))
IIterable<ABI::Windows::Devices::WiFiDirect::WiFiDirectInformationElement*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFiDirect::WiFiDirectInformationElement*, ABI::Windows::Devices::WiFiDirect::IWiFiDirectInformationElement*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.WiFiDirect.WiFiDirectInformationElement>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::WiFiDirect::WiFiDirectInformationElement*> __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_t;
#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::WiFiDirect::IWiFiDirectInformationElement*>
//#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::WiFiDirect::IWiFiDirectInformationElement*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_USE
#define DEF___FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("61a32670-04d3-551d-ad66-bd04e9ef5c78"))
IVectorView<enum ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> : IVectorView_impl<enum ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.WiFiDirect.WiFiDirectConfigurationMethod>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_t;
#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod>
//#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_USE
#define DEF___FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6dcffadb-04c5-535e-add4-1389b3be6eca"))
IVectorView<ABI::Windows::Devices::WiFiDirect::WiFiDirectInformationElement*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFiDirect::WiFiDirectInformationElement*, ABI::Windows::Devices::WiFiDirect::IWiFiDirectInformationElement*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.WiFiDirect.WiFiDirectInformationElement>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::WiFiDirect::WiFiDirectInformationElement*> __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_t;
#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::WiFiDirect::IWiFiDirectInformationElement*>
//#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::WiFiDirect::IWiFiDirectInformationElement*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_USE
#define DEF___FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9b498bc0-b474-5587-b65c-e600965f8fd0"))
IVector<enum ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> : IVector_impl<enum ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Devices.WiFiDirect.WiFiDirectConfigurationMethod>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<enum ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_t;
#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod>
//#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_USE
#define DEF___FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b8c55492-e4de-5ba7-8476-d3bab557cdd6"))
IVector<ABI::Windows::Devices::WiFiDirect::WiFiDirectInformationElement*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFiDirect::WiFiDirectInformationElement*, ABI::Windows::Devices::WiFiDirect::IWiFiDirectInformationElement*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Devices.WiFiDirect.WiFiDirectInformationElement>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Devices::WiFiDirect::WiFiDirectInformationElement*> __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_t;
#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::WiFiDirect::IWiFiDirectInformationElement*>
//#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::WiFiDirect::IWiFiDirectInformationElement*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                class WiFiDirectDevice;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d34abe17-fb19-57be-bc41-0eb83dea151c"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::WiFiDirect::WiFiDirectDevice*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFiDirect::WiFiDirectDevice*, ABI::Windows::Devices::WiFiDirect::IWiFiDirectDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.WiFiDirect.WiFiDirectDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::WiFiDirect::WiFiDirectDevice*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::WiFiDirect::IWiFiDirectDevice*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::WiFiDirect::IWiFiDirectDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dad01b61-a82d-566c-ba82-224c11500669"))
IAsyncOperation<ABI::Windows::Devices::WiFiDirect::WiFiDirectDevice*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFiDirect::WiFiDirectDevice*, ABI::Windows::Devices::WiFiDirect::IWiFiDirectDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.WiFiDirect.WiFiDirectDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::WiFiDirect::WiFiDirectDevice*> __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_t;
#define __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::WiFiDirect::IWiFiDirectDevice*>
//#define __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::WiFiDirect::IWiFiDirectDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                class WiFiDirectAdvertisementPublisher;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                class WiFiDirectAdvertisementPublisherStatusChangedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("de73cba7-370d-550c-b23a-53dd0b4e480d"))
ITypedEventHandler<ABI::Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher*,ABI::Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher*, ABI::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs*, ABI::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisher, Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisherStatusChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher*,ABI::Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher*,ABI::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher*,ABI::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                class WiFiDirectConnectionListener;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                class WiFiDirectConnectionRequestedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d04b0403-1fe2-532f-8e47-4823a14e624f"))
ITypedEventHandler<ABI::Windows::Devices::WiFiDirect::WiFiDirectConnectionListener*,ABI::Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFiDirect::WiFiDirectConnectionListener*, ABI::Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs*, ABI::Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.WiFiDirect.WiFiDirectConnectionListener, Windows.Devices.WiFiDirect.WiFiDirectConnectionRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::WiFiDirect::WiFiDirectConnectionListener*,ABI::Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener*,ABI::Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener*,ABI::Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9208929a-2a3c-50ad-aa08-a0a986edbabe"))
ITypedEventHandler<ABI::Windows::Devices::WiFiDirect::WiFiDirectDevice*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFiDirect::WiFiDirectDevice*, ABI::Windows::Devices::WiFiDirect::IWiFiDirectDevice*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.WiFiDirect.WiFiDirectDevice, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::WiFiDirect::WiFiDirectDevice*,IInspectable*> __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::WiFiDirect::IWiFiDirectDevice*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::WiFiDirect::IWiFiDirectDevice*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable_USE */


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
        namespace Devices {
            namespace Enumeration {
                class DeviceInformation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceInformation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation ABI::Windows::Devices::Enumeration::IDeviceInformation

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                
                typedef enum DevicePairingKinds : unsigned int DevicePairingKinds;
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDevicePairingSettings;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings ABI::Windows::Devices::Enumeration::IDevicePairingSettings

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_FWD_DEFINED__





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
        namespace Devices {
            namespace WiFiDirect {
                
                typedef enum WiFiDirectAdvertisementListenStateDiscoverability : int WiFiDirectAdvertisementListenStateDiscoverability;
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                
                typedef enum WiFiDirectAdvertisementPublisherStatus : int WiFiDirectAdvertisementPublisherStatus;
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                
                typedef enum WiFiDirectConfigurationMethod : int WiFiDirectConfigurationMethod;
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                
                typedef enum WiFiDirectConnectionStatus : int WiFiDirectConnectionStatus;
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                
                typedef enum WiFiDirectDeviceSelectorType : int WiFiDirectDeviceSelectorType;
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                
                typedef enum WiFiDirectError : int WiFiDirectError;
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                
                typedef enum WiFiDirectPairingProcedure : int WiFiDirectPairingProcedure;
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

















namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                class WiFiDirectAdvertisement;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                class WiFiDirectConnectionParameters;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                class WiFiDirectConnectionRequest;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                class WiFiDirectLegacySettings;
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */










/*
 *
 * Struct Windows.Devices.WiFiDirect.WiFiDirectAdvertisementListenStateDiscoverability
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [v1_enum, contract] */
                enum WiFiDirectAdvertisementListenStateDiscoverability : int
                {
                    WiFiDirectAdvertisementListenStateDiscoverability_None = 0,
                    WiFiDirectAdvertisementListenStateDiscoverability_Normal = 1,
                    WiFiDirectAdvertisementListenStateDiscoverability_Intensive = 2,
                };
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisherStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [v1_enum, contract] */
                enum WiFiDirectAdvertisementPublisherStatus : int
                {
                    WiFiDirectAdvertisementPublisherStatus_Created = 0,
                    WiFiDirectAdvertisementPublisherStatus_Started = 1,
                    WiFiDirectAdvertisementPublisherStatus_Stopped = 2,
                    WiFiDirectAdvertisementPublisherStatus_Aborted = 3,
                };
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFiDirect.WiFiDirectConfigurationMethod
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [v1_enum, contract] */
                enum WiFiDirectConfigurationMethod : int
                {
                    WiFiDirectConfigurationMethod_ProvidePin = 0,
                    WiFiDirectConfigurationMethod_DisplayPin = 1,
                    WiFiDirectConfigurationMethod_PushButton = 2,
                };
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.WiFiDirect.WiFiDirectConnectionStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [v1_enum, contract] */
                enum WiFiDirectConnectionStatus : int
                {
                    WiFiDirectConnectionStatus_Disconnected = 0,
                    WiFiDirectConnectionStatus_Connected = 1,
                };
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFiDirect.WiFiDirectDeviceSelectorType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [v1_enum, contract] */
                enum WiFiDirectDeviceSelectorType : int
                {
                    WiFiDirectDeviceSelectorType_DeviceInterface = 0,
                    WiFiDirectDeviceSelectorType_AssociationEndpoint = 1,
                };
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFiDirect.WiFiDirectError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [v1_enum, contract] */
                enum WiFiDirectError : int
                {
                    WiFiDirectError_Success = 0,
                    WiFiDirectError_RadioNotAvailable = 1,
                    WiFiDirectError_ResourceInUse = 2,
                };
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFiDirect.WiFiDirectPairingProcedure
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [v1_enum, contract] */
                enum WiFiDirectPairingProcedure : int
                {
                    WiFiDirectPairingProcedure_GroupOwnerNegotiation = 0,
                    WiFiDirectPairingProcedure_Invitation = 1,
                };
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectAdvertisement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectAdvertisement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement[] = L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisement";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [object, uuid("AB511A2D-2A06-49A1-A584-61435C7905A6"), exclusiveto, contract] */
                MIDL_INTERFACE("AB511A2D-2A06-49A1-A584-61435C7905A6")
                IWiFiDirectAdvertisement : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InformationElements(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InformationElements(
                        /* [in] */__RPC__in_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ListenStateDiscoverability(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ListenStateDiscoverability(
                        /* [in] */ABI::Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAutonomousGroupOwnerEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsAutonomousGroupOwnerEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LegacySettings(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiDirectAdvertisement=_uuidof(IWiFiDirectAdvertisement);
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectAdvertisement2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectAdvertisement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement2[] = L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisement2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [object, uuid("B759AA46-D816-491B-917A-B40D7DC403A2"), exclusiveto, contract] */
                MIDL_INTERFACE("B759AA46-D816-491B-917A-B40D7DC403A2")
                IWiFiDirectAdvertisement2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedConfigurationMethods(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiDirectAdvertisement2=_uuidof(IWiFiDirectAdvertisement2);
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectAdvertisementPublisher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisher[] = L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisementPublisher";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [object, uuid("B35A2D1A-9B1F-45D9-925A-694D66DF68EF"), exclusiveto, contract] */
                MIDL_INTERFACE("B35A2D1A-9B1F-45D9-925A-694D66DF68EF")
                IWiFiDirectAdvertisementPublisher : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Advertisement(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StatusChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StatusChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiDirectAdvertisementPublisher=_uuidof(IWiFiDirectAdvertisementPublisher);
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectAdvertisementPublisherStatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisherStatusChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisherStatusChangedEventArgs[] = L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisementPublisherStatusChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [object, uuid("AAFDE53C-5481-46E6-90DD-32116518F192"), exclusiveto, contract] */
                MIDL_INTERFACE("AAFDE53C-5481-46E6-90DD-32116518F192")
                IWiFiDirectAdvertisementPublisherStatusChangedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Error(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::WiFiDirect::WiFiDirectError * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiDirectAdvertisementPublisherStatusChangedEventArgs=_uuidof(IWiFiDirectAdvertisementPublisherStatusChangedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectConnectionListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectConnectionListener
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectConnectionListener[] = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionListener";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [object, uuid("699C1B0D-8D13-4EE9-B9EC-9C72F8251F7D"), exclusiveto, contract] */
                MIDL_INTERFACE("699C1B0D-8D13-4EE9-B9EC-9C72F8251F7D")
                IWiFiDirectConnectionListener : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ConnectionRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ConnectionRequested(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiDirectConnectionListener=_uuidof(IWiFiDirectConnectionListener);
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectConnectionParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectConnectionParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters[] = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionParameters";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [object, uuid("B2E55405-5702-4B16-A02C-BBCD21EF6098"), exclusiveto, contract] */
                MIDL_INTERFACE("B2E55405-5702-4B16-A02C-BBCD21EF6098")
                IWiFiDirectConnectionParameters : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GroupOwnerIntent(
                        /* [retval, out] */__RPC__out INT16 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_GroupOwnerIntent(
                        /* [in] */INT16 value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiDirectConnectionParameters=_uuidof(IWiFiDirectConnectionParameters);
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectConnectionParameters2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectConnectionParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters2[] = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionParameters2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [object, uuid("AB3B0FBE-AA82-44B4-88C8-E3056B89801D"), exclusiveto, contract] */
                MIDL_INTERFACE("AB3B0FBE-AA82-44B4-88C8-E3056B89801D")
                IWiFiDirectConnectionParameters2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PreferenceOrderedConfigurationMethods(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PreferredPairingProcedure(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PreferredPairingProcedure(
                        /* [in] */ABI::Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiDirectConnectionParameters2=_uuidof(IWiFiDirectConnectionParameters2);
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectConnectionParametersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectConnectionParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParametersStatics[] = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionParametersStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [object, uuid("598AF493-7642-456F-B9D8-E8A9EB1F401A"), exclusiveto, contract] */
                MIDL_INTERFACE("598AF493-7642-456F-B9D8-E8A9EB1F401A")
                IWiFiDirectConnectionParametersStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDevicePairingKinds(
                        /* [in] */ABI::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod configurationMethod,
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Enumeration::DevicePairingKinds * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiDirectConnectionParametersStatics=_uuidof(IWiFiDirectConnectionParametersStatics);
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectConnectionRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectConnectionRequest
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectConnectionRequest[] = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionRequest";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [object, uuid("8EB99605-914F-49C3-A614-D18DC5B19B43"), exclusiveto, contract] */
                MIDL_INTERFACE("8EB99605-914F-49C3-A614-D18DC5B19B43")
                IWiFiDirectConnectionRequest : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceInformation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiDirectConnectionRequest=_uuidof(IWiFiDirectConnectionRequest);
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectConnectionRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectConnectionRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectConnectionRequestedEventArgs[] = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [object, uuid("F99D20BE-D38D-484F-8215-E7B65ABF244C"), exclusiveto, contract] */
                MIDL_INTERFACE("F99D20BE-D38D-484F-8215-E7B65ABF244C")
                IWiFiDirectConnectionRequestedEventArgs : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetConnectionRequest(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiDirectConnectionRequestedEventArgs=_uuidof(IWiFiDirectConnectionRequestedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectDevice[] = L"Windows.Devices.WiFiDirect.IWiFiDirectDevice";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [object, uuid("72DEAAA8-72EB-4DAE-8A28-8513355D2777"), exclusiveto, contract] */
                MIDL_INTERFACE("72DEAAA8-72EB-4DAE-8A28-8513355D2777")
                IWiFiDirectDevice : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConnectionStatus(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::WiFiDirect::WiFiDirectConnectionStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ConnectionStatusChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ConnectionStatusChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetConnectionEndpointPairs(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CEndpointPair * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiDirectDevice=_uuidof(IWiFiDirectDevice);
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectDeviceStatics[] = L"Windows.Devices.WiFiDirect.IWiFiDirectDeviceStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [object, uuid("E86CB57C-3AAC-4851-A792-482AAF931B04"), exclusiveto, contract] */
                MIDL_INTERFACE("E86CB57C-3AAC-4851-A792-482AAF931B04")
                IWiFiDirectDeviceStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * * asyncOp
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiDirectDeviceStatics=_uuidof(IWiFiDirectDeviceStatics);
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectDeviceStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectDeviceStatics2[] = L"Windows.Devices.WiFiDirect.IWiFiDirectDeviceStatics2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [object, uuid("1A953E49-B103-437E-9226-AB67971342F9"), exclusiveto, contract] */
                MIDL_INTERFACE("1A953E49-B103-437E-9226-AB67971342F9")
                IWiFiDirectDeviceStatics2 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [in] */ABI::Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType type,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters * connectionParameters,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiDirectDeviceStatics2=_uuidof(IWiFiDirectDeviceStatics2);
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectInformationElement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectInformationElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectInformationElement[] = L"Windows.Devices.WiFiDirect.IWiFiDirectInformationElement";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [object, uuid("AFFB72D6-76BB-497E-AC8B-DC72838BC309"), exclusiveto, contract] */
                MIDL_INTERFACE("AFFB72D6-76BB-497E-AC8B-DC72838BC309")
                IWiFiDirectInformationElement : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Oui(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Oui(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OuiType(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OuiType(
                        /* [in] */BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiDirectInformationElement=_uuidof(IWiFiDirectInformationElement);
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectInformationElementStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectInformationElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectInformationElementStatics[] = L"Windows.Devices.WiFiDirect.IWiFiDirectInformationElementStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [object, uuid("DBD02F16-11A5-4E60-8CAA-34772148378A"), exclusiveto, contract] */
                MIDL_INTERFACE("DBD02F16-11A5-4E60-8CAA-34772148378A")
                IWiFiDirectInformationElementStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateFromBuffer(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * buffer,
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromDeviceInformation(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * deviceInformation,
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiDirectInformationElementStatics=_uuidof(IWiFiDirectInformationElementStatics);
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectLegacySettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectLegacySettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectLegacySettings[] = L"Windows.Devices.WiFiDirect.IWiFiDirectLegacySettings";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFiDirect {
                /* [object, uuid("A64FDBBA-F2FD-4567-A91B-F5C2F5321057"), exclusiveto, contract] */
                MIDL_INTERFACE("A64FDBBA-F2FD-4567-A91B-F5C2F5321057")
                IWiFiDirectLegacySettings : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ssid(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Ssid(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Passphrase(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IPasswordCredential * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Passphrase(
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiDirectLegacySettings=_uuidof(IWiFiDirectLegacySettings);
                
            } /* Windows */
        } /* Devices */
    } /* WiFiDirect */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectAdvertisement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectAdvertisement ** Default Interface **
 *    Windows.Devices.WiFiDirect.IWiFiDirectAdvertisement2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectAdvertisement_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectAdvertisement_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectAdvertisement[] = L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisement";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectAdvertisementPublisher ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectAdvertisementPublisher_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectAdvertisementPublisher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectAdvertisementPublisher[] = L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisherStatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectAdvertisementPublisherStatusChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectAdvertisementPublisherStatusChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectAdvertisementPublisherStatusChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectAdvertisementPublisherStatusChangedEventArgs[] = L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisherStatusChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectConnectionListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectConnectionListener ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectConnectionListener_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectConnectionListener_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectConnectionListener[] = L"Windows.Devices.WiFiDirect.WiFiDirectConnectionListener";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectConnectionParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.WiFiDirect.IWiFiDirectConnectionParametersStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectConnectionParameters ** Default Interface **
 *    Windows.Devices.WiFiDirect.IWiFiDirectConnectionParameters2
 *    Windows.Devices.Enumeration.IDevicePairingSettings
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectConnectionParameters_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectConnectionParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectConnectionParameters[] = L"Windows.Devices.WiFiDirect.WiFiDirectConnectionParameters";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectConnectionRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectConnectionRequest ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectConnectionRequest_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectConnectionRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectConnectionRequest[] = L"Windows.Devices.WiFiDirect.WiFiDirectConnectionRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectConnectionRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectConnectionRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectConnectionRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectConnectionRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectConnectionRequestedEventArgs[] = L"Windows.Devices.WiFiDirect.WiFiDirectConnectionRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.WiFiDirect.IWiFiDirectDeviceStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Devices.WiFiDirect.IWiFiDirectDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectDevice ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectDevice[] = L"Windows.Devices.WiFiDirect.WiFiDirectDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectInformationElement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.WiFiDirect.IWiFiDirectInformationElementStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectInformationElement ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectInformationElement_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectInformationElement_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectInformationElement[] = L"Windows.Devices.WiFiDirect.WiFiDirectInformationElement";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectLegacySettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectLegacySettings ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectLegacySettings_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectLegacySettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectLegacySettings[] = L"Windows.Devices.WiFiDirect.WiFiDirectLegacySettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement;

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2 __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2;

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher;

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener;

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters;

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2;

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics;

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest;

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice;

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics;

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2;

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement;

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics;

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings;

#endif // ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod;
#if !defined(____FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod;

typedef struct __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl;

interface __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod;

typedef  struct __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl;

interface __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement;

typedef struct __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl;

interface __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement;

typedef  struct __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl;

interface __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod;

typedef struct __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
            /* [in] */ enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl;

interface __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement;

typedef struct __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl;

interface __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod;

typedef struct __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, /* [out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, /* [in] */ __RPC__in enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod *value);

    END_INTERFACE
} __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl;

interface __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement;

typedef struct __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * *value);

    END_INTERFACE
} __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl;

interface __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDeviceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDeviceVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable_INTERFACE_DEFINED__

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


#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds;

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__








#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementListenStateDiscoverability __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementListenStateDiscoverability;


typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementPublisherStatus __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementPublisherStatus;


typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod;


typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConnectionStatus __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConnectionStatus;


typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectDeviceSelectorType __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectDeviceSelectorType;


typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectError __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectError;


typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectPairingProcedure __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectPairingProcedure;



































/*
 *
 * Struct Windows.Devices.WiFiDirect.WiFiDirectAdvertisementListenStateDiscoverability
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementListenStateDiscoverability
{
    WiFiDirectAdvertisementListenStateDiscoverability_None = 0,
    WiFiDirectAdvertisementListenStateDiscoverability_Normal = 1,
    WiFiDirectAdvertisementListenStateDiscoverability_Intensive = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisherStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementPublisherStatus
{
    WiFiDirectAdvertisementPublisherStatus_Created = 0,
    WiFiDirectAdvertisementPublisherStatus_Started = 1,
    WiFiDirectAdvertisementPublisherStatus_Stopped = 2,
    WiFiDirectAdvertisementPublisherStatus_Aborted = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFiDirect.WiFiDirectConfigurationMethod
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod
{
    WiFiDirectConfigurationMethod_ProvidePin = 0,
    WiFiDirectConfigurationMethod_DisplayPin = 1,
    WiFiDirectConfigurationMethod_PushButton = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.WiFiDirect.WiFiDirectConnectionStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConnectionStatus
{
    WiFiDirectConnectionStatus_Disconnected = 0,
    WiFiDirectConnectionStatus_Connected = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFiDirect.WiFiDirectDeviceSelectorType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectDeviceSelectorType
{
    WiFiDirectDeviceSelectorType_DeviceInterface = 0,
    WiFiDirectDeviceSelectorType_AssociationEndpoint = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFiDirect.WiFiDirectError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectError
{
    WiFiDirectError_Success = 0,
    WiFiDirectError_RadioNotAvailable = 1,
    WiFiDirectError_ResourceInUse = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFiDirect.WiFiDirectPairingProcedure
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectPairingProcedure
{
    WiFiDirectPairingProcedure_GroupOwnerNegotiation = 0,
    WiFiDirectPairingProcedure_Invitation = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectAdvertisement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectAdvertisement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement[] = L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisement";
/* [object, uuid("AB511A2D-2A06-49A1-A584-61435C7905A6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InformationElements )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InformationElements )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
        /* [in] */__RPC__in_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ListenStateDiscoverability )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementListenStateDiscoverability * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ListenStateDiscoverability )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
        /* [in] */__x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementListenStateDiscoverability value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAutonomousGroupOwnerEnabled )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsAutonomousGroupOwnerEnabled )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LegacySettings )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementVtbl;

interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_get_InformationElements(This,value) \
    ( (This)->lpVtbl->get_InformationElements(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_put_InformationElements(This,value) \
    ( (This)->lpVtbl->put_InformationElements(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_get_ListenStateDiscoverability(This,value) \
    ( (This)->lpVtbl->get_ListenStateDiscoverability(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_put_ListenStateDiscoverability(This,value) \
    ( (This)->lpVtbl->put_ListenStateDiscoverability(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_get_IsAutonomousGroupOwnerEnabled(This,value) \
    ( (This)->lpVtbl->get_IsAutonomousGroupOwnerEnabled(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_put_IsAutonomousGroupOwnerEnabled(This,value) \
    ( (This)->lpVtbl->put_IsAutonomousGroupOwnerEnabled(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_get_LegacySettings(This,value) \
    ( (This)->lpVtbl->get_LegacySettings(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectAdvertisement2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectAdvertisement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement2[] = L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisement2";
/* [object, uuid("B759AA46-D816-491B-917A-B40D7DC403A2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedConfigurationMethods )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2Vtbl;

interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_get_SupportedConfigurationMethods(This,value) \
    ( (This)->lpVtbl->get_SupportedConfigurationMethods(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectAdvertisementPublisher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisher[] = L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisementPublisher";
/* [object, uuid("B35A2D1A-9B1F-45D9-925A-694D66DF68EF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Advertisement )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementPublisherStatus * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StatusChanged )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StatusChanged )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherVtbl;

interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_get_Advertisement(This,value) \
    ( (This)->lpVtbl->get_Advertisement(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_add_StatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_StatusChanged(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_remove_StatusChanged(This,token) \
    ( (This)->lpVtbl->remove_StatusChanged(This,token) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectAdvertisementPublisherStatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisherStatusChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisherStatusChangedEventArgs[] = L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisementPublisherStatusChangedEventArgs";
/* [object, uuid("AAFDE53C-5481-46E6-90DD-32116518F192"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementPublisherStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectError * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_get_Error(This,value) \
    ( (This)->lpVtbl->get_Error(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectConnectionListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectConnectionListener
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectConnectionListener[] = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionListener";
/* [object, uuid("699C1B0D-8D13-4EE9-B9EC-9C72F8251F7D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListenerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ConnectionRequested )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ConnectionRequested )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListenerVtbl;

interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListenerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_add_ConnectionRequested(This,handler,token) \
    ( (This)->lpVtbl->add_ConnectionRequested(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_remove_ConnectionRequested(This,token) \
    ( (This)->lpVtbl->remove_ConnectionRequested(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectConnectionParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectConnectionParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters[] = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionParameters";
/* [object, uuid("B2E55405-5702-4B16-A02C-BBCD21EF6098"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GroupOwnerIntent )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters * This,
        /* [retval, out] */__RPC__out INT16 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_GroupOwnerIntent )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters * This,
        /* [in] */INT16 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersVtbl;

interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_get_GroupOwnerIntent(This,value) \
    ( (This)->lpVtbl->get_GroupOwnerIntent(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_put_GroupOwnerIntent(This,value) \
    ( (This)->lpVtbl->put_GroupOwnerIntent(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectConnectionParameters2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectConnectionParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters2[] = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionParameters2";
/* [object, uuid("AB3B0FBE-AA82-44B4-88C8-E3056B89801D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PreferenceOrderedConfigurationMethods )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PreferredPairingProcedure )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectPairingProcedure * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PreferredPairingProcedure )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 * This,
        /* [in] */__x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectPairingProcedure value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2Vtbl;

interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_get_PreferenceOrderedConfigurationMethods(This,value) \
    ( (This)->lpVtbl->get_PreferenceOrderedConfigurationMethods(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_get_PreferredPairingProcedure(This,value) \
    ( (This)->lpVtbl->get_PreferredPairingProcedure(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_put_PreferredPairingProcedure(This,value) \
    ( (This)->lpVtbl->put_PreferredPairingProcedure(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectConnectionParametersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectConnectionParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParametersStatics[] = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionParametersStatics";
/* [object, uuid("598AF493-7642-456F-B9D8-E8A9EB1F401A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDevicePairingKinds )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics * This,
        /* [in] */__x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod configurationMethod,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_GetDevicePairingKinds(This,configurationMethod,result) \
    ( (This)->lpVtbl->GetDevicePairingKinds(This,configurationMethod,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectConnectionRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectConnectionRequest
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectConnectionRequest[] = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionRequest";
/* [object, uuid("8EB99605-914F-49C3-A614-D18DC5B19B43"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceInformation )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestVtbl;

interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_get_DeviceInformation(This,value) \
    ( (This)->lpVtbl->get_DeviceInformation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectConnectionRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectConnectionRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectConnectionRequestedEventArgs[] = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionRequestedEventArgs";
/* [object, uuid("F99D20BE-D38D-484F-8215-E7B65ABF244C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetConnectionRequest )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_GetConnectionRequest(This,result) \
    ( (This)->lpVtbl->GetConnectionRequest(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectDevice[] = L"Windows.Devices.WiFiDirect.IWiFiDirectDevice";
/* [object, uuid("72DEAAA8-72EB-4DAE-8A28-8513355D2777"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConnectionStatus )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConnectionStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ConnectionStatusChanged )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ConnectionStatusChanged )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetConnectionEndpointPairs )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CEndpointPair * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceVtbl;

interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_get_ConnectionStatus(This,value) \
    ( (This)->lpVtbl->get_ConnectionStatus(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_add_ConnectionStatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ConnectionStatusChanged(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_remove_ConnectionStatusChanged(This,token) \
    ( (This)->lpVtbl->remove_ConnectionStatusChanged(This,token) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_GetConnectionEndpointPairs(This,value) \
    ( (This)->lpVtbl->GetConnectionEndpointPairs(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectDeviceStatics[] = L"Windows.Devices.WiFiDirect.IWiFiDirectDeviceStatics";
/* [object, uuid("E86CB57C-3AAC-4851-A792-482AAF931B04"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * * asyncOp
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_GetDeviceSelector(This,deviceSelector) \
    ( (This)->lpVtbl->GetDeviceSelector(This,deviceSelector) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_FromIdAsync(This,deviceId,asyncOp) \
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,asyncOp) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectDeviceStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectDeviceStatics2[] = L"Windows.Devices.WiFiDirect.IWiFiDirectDeviceStatics2";
/* [object, uuid("1A953E49-B103-437E-9226-AB67971342F9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 * This,
        /* [in] */__x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectDeviceSelectorType type,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters * connectionParameters,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2Vtbl;

interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_GetDeviceSelector(This,type,result) \
    ( (This)->lpVtbl->GetDeviceSelector(This,type,result) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_FromIdAsync(This,deviceId,connectionParameters,result) \
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,connectionParameters,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectInformationElement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectInformationElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectInformationElement[] = L"Windows.Devices.WiFiDirect.IWiFiDirectInformationElement";
/* [object, uuid("AFFB72D6-76BB-497E-AC8B-DC72838BC309"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Oui )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Oui )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OuiType )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OuiType )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementVtbl;

interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_get_Oui(This,value) \
    ( (This)->lpVtbl->get_Oui(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_put_Oui(This,value) \
    ( (This)->lpVtbl->put_Oui(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_get_OuiType(This,value) \
    ( (This)->lpVtbl->get_OuiType(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_put_OuiType(This,value) \
    ( (This)->lpVtbl->put_OuiType(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectInformationElementStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectInformationElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectInformationElementStatics[] = L"Windows.Devices.WiFiDirect.IWiFiDirectInformationElementStatics";
/* [object, uuid("DBD02F16-11A5-4E60-8CAA-34772148378A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromBuffer )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromDeviceInformation )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * deviceInformation,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_CreateFromBuffer(This,buffer,result) \
    ( (This)->lpVtbl->CreateFromBuffer(This,buffer,result) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_CreateFromDeviceInformation(This,deviceInformation,result) \
    ( (This)->lpVtbl->CreateFromDeviceInformation(This,deviceInformation,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFiDirect.IWiFiDirectLegacySettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFiDirect.WiFiDirectLegacySettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectLegacySettings[] = L"Windows.Devices.WiFiDirect.IWiFiDirectLegacySettings";
/* [object, uuid("A64FDBBA-F2FD-4567-A91B-F5C2F5321057"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ssid )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Ssid )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Passphrase )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Passphrase )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettingsVtbl;

interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_get_IsEnabled(This,value) \
    ( (This)->lpVtbl->get_IsEnabled(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_put_IsEnabled(This,value) \
    ( (This)->lpVtbl->put_IsEnabled(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_get_Ssid(This,value) \
    ( (This)->lpVtbl->get_Ssid(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_put_Ssid(This,value) \
    ( (This)->lpVtbl->put_Ssid(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_get_Passphrase(This,value) \
    ( (This)->lpVtbl->get_Passphrase(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_put_Passphrase(This,value) \
    ( (This)->lpVtbl->put_Passphrase(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectAdvertisement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectAdvertisement ** Default Interface **
 *    Windows.Devices.WiFiDirect.IWiFiDirectAdvertisement2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectAdvertisement_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectAdvertisement_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectAdvertisement[] = L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisement";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectAdvertisementPublisher ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectAdvertisementPublisher_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectAdvertisementPublisher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectAdvertisementPublisher[] = L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisherStatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectAdvertisementPublisherStatusChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectAdvertisementPublisherStatusChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectAdvertisementPublisherStatusChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectAdvertisementPublisherStatusChangedEventArgs[] = L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisherStatusChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectConnectionListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectConnectionListener ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectConnectionListener_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectConnectionListener_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectConnectionListener[] = L"Windows.Devices.WiFiDirect.WiFiDirectConnectionListener";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectConnectionParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.WiFiDirect.IWiFiDirectConnectionParametersStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectConnectionParameters ** Default Interface **
 *    Windows.Devices.WiFiDirect.IWiFiDirectConnectionParameters2
 *    Windows.Devices.Enumeration.IDevicePairingSettings
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectConnectionParameters_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectConnectionParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectConnectionParameters[] = L"Windows.Devices.WiFiDirect.WiFiDirectConnectionParameters";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectConnectionRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectConnectionRequest ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectConnectionRequest_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectConnectionRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectConnectionRequest[] = L"Windows.Devices.WiFiDirect.WiFiDirectConnectionRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectConnectionRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectConnectionRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectConnectionRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectConnectionRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectConnectionRequestedEventArgs[] = L"Windows.Devices.WiFiDirect.WiFiDirectConnectionRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.WiFiDirect.IWiFiDirectDeviceStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Devices.WiFiDirect.IWiFiDirectDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectDevice ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectDevice[] = L"Windows.Devices.WiFiDirect.WiFiDirectDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectInformationElement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.WiFiDirect.IWiFiDirectInformationElementStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectInformationElement ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectInformationElement_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectInformationElement_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectInformationElement[] = L"Windows.Devices.WiFiDirect.WiFiDirectInformationElement";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFiDirect.WiFiDirectLegacySettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFiDirect.IWiFiDirectLegacySettings ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectLegacySettings_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFiDirect_WiFiDirectLegacySettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectLegacySettings[] = L"Windows.Devices.WiFiDirect.WiFiDirectLegacySettings";
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
#endif // __windows2Edevices2Ewifidirect_p_h__

#endif // __windows2Edevices2Ewifidirect_h__
