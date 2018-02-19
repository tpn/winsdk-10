/* Header file automatically generated from windows.devices.enumeration.idl */
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
#ifndef __windows2Edevices2Eenumeration_h__
#define __windows2Edevices2Eenumeration_h__
#ifndef __windows2Edevices2Eenumeration_p_h__
#define __windows2Edevices2Eenumeration_p_h__


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
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
#include "Windows.UI.Popups.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceAccessChangedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs ABI::Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceAccessChangedEventArgs2;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2 ABI::Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs2

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceAccessInformation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation ABI::Windows::Devices::Enumeration::IDeviceAccessInformation

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceAccessInformationStatics;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics ABI::Windows::Devices::Enumeration::IDeviceAccessInformationStatics

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceConnectionChangeTriggerDetails;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails ABI::Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceDisconnectButtonClickedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs ABI::Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceInformation2;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 ABI::Windows::Devices::Enumeration::IDeviceInformation2

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceInformationCustomPairing;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing ABI::Windows::Devices::Enumeration::IDeviceInformationCustomPairing

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceInformationPairing;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing ABI::Windows::Devices::Enumeration::IDeviceInformationPairing

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceInformationPairing2;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 ABI::Windows::Devices::Enumeration::IDeviceInformationPairing2

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceInformationPairingStatics;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics ABI::Windows::Devices::Enumeration::IDeviceInformationPairingStatics

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceInformationStatics;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics ABI::Windows::Devices::Enumeration::IDeviceInformationStatics

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceInformationStatics2;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 ABI::Windows::Devices::Enumeration::IDeviceInformationStatics2

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceInformationUpdate;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate ABI::Windows::Devices::Enumeration::IDeviceInformationUpdate

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceInformationUpdate2;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2 ABI::Windows::Devices::Enumeration::IDeviceInformationUpdate2

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDevicePairingRequestedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs ABI::Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDevicePairingResult;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult ABI::Windows::Devices::Enumeration::IDevicePairingResult

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDevicePicker;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker ABI::Windows::Devices::Enumeration::IDevicePicker

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDevicePickerAppearance;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance ABI::Windows::Devices::Enumeration::IDevicePickerAppearance

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDevicePickerFilter;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter ABI::Windows::Devices::Enumeration::IDevicePickerFilter

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceSelectedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs ABI::Windows::Devices::Enumeration::IDeviceSelectedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceUnpairingResult;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult ABI::Windows::Devices::Enumeration::IDeviceUnpairingResult

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceWatcher;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher ABI::Windows::Devices::Enumeration::IDeviceWatcher

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceWatcher2;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2 ABI::Windows::Devices::Enumeration::IDeviceWatcher2

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceWatcherEvent;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent ABI::Windows::Devices::Enumeration::IDeviceWatcherEvent

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceWatcherTriggerDetails;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails ABI::Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IEnclosureLocation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation ABI::Windows::Devices::Enumeration::IEnclosureLocation

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IEnclosureLocation2;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2 ABI::Windows::Devices::Enumeration::IEnclosureLocation2

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                enum DeviceClass : int;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_USE
#define DEF___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c3807283-1416-593c-955c-0b4a286ff7bb"))
IIterator<enum ABI::Windows::Devices::Enumeration::DeviceClass> : IIterator_impl<enum ABI::Windows::Devices::Enumeration::DeviceClass> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Enumeration.DeviceClass>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Devices::Enumeration::DeviceClass> __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_t;
#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Enumeration::DeviceClass>
//#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Enumeration::DeviceClass>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_USE */





#ifndef DEF___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass_USE
#define DEF___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("47d4be05-58f1-522e-81c6-975eb4131bb9"))
IIterable<enum ABI::Windows::Devices::Enumeration::DeviceClass> : IIterable_impl<enum ABI::Windows::Devices::Enumeration::DeviceClass> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Enumeration.DeviceClass>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Devices::Enumeration::DeviceClass> __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass_t;
#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Enumeration::DeviceClass>
//#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Enumeration::DeviceClass>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass_USE */



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceInformation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_USE
#define DEF___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6f85d843-e8ab-5b46-85d7-327c58d18712"))
IIterator<ABI::Windows::Devices::Enumeration::DeviceInformation*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceInformation*, ABI::Windows::Devices::Enumeration::IDeviceInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Enumeration.DeviceInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Enumeration::DeviceInformation*> __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_t;
#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Enumeration::IDeviceInformation*>
//#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Enumeration::IDeviceInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation_USE
#define DEF___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("dd9f8a5d-ec98-5f4b-a3ea-9c8b5ad53c4b"))
IIterable<ABI::Windows::Devices::Enumeration::DeviceInformation*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceInformation*, ABI::Windows::Devices::Enumeration::IDeviceInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Enumeration.DeviceInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Enumeration::DeviceInformation*> __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation_t;
#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Enumeration::IDeviceInformation*>
//#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Enumeration::IDeviceInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceWatcherEvent;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_USE
#define DEF___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("74f7d6cc-9c20-5bb9-bace-b2ffa38687f9"))
IIterator<ABI::Windows::Devices::Enumeration::DeviceWatcherEvent*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceWatcherEvent*, ABI::Windows::Devices::Enumeration::IDeviceWatcherEvent*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Enumeration.DeviceWatcherEvent>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Enumeration::DeviceWatcherEvent*> __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_t;
#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Enumeration::IDeviceWatcherEvent*>
//#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Enumeration::IDeviceWatcherEvent*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_USE
#define DEF___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b48fd051-eafa-523f-a66e-9d4151c5d522"))
IIterable<ABI::Windows::Devices::Enumeration::DeviceWatcherEvent*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceWatcherEvent*, ABI::Windows::Devices::Enumeration::IDeviceWatcherEvent*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Enumeration.DeviceWatcherEvent>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Enumeration::DeviceWatcherEvent*> __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_t;
#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Enumeration::IDeviceWatcherEvent*>
//#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Enumeration::IDeviceWatcherEvent*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                enum DeviceWatcherEventKind : int;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_USE
#define DEF___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cb5ca9db-ccd6-5103-a93d-c925c908838d"))
IIterator<enum ABI::Windows::Devices::Enumeration::DeviceWatcherEventKind> : IIterator_impl<enum ABI::Windows::Devices::Enumeration::DeviceWatcherEventKind> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Enumeration.DeviceWatcherEventKind>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Devices::Enumeration::DeviceWatcherEventKind> __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_t;
#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Enumeration::DeviceWatcherEventKind>
//#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Enumeration::DeviceWatcherEventKind>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_USE */





#ifndef DEF___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_USE
#define DEF___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f04365ab-d3f3-5f85-a7da-dc19cff73d86"))
IIterable<enum ABI::Windows::Devices::Enumeration::DeviceWatcherEventKind> : IIterable_impl<enum ABI::Windows::Devices::Enumeration::DeviceWatcherEventKind> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Enumeration.DeviceWatcherEventKind>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Devices::Enumeration::DeviceWatcherEventKind> __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_t;
#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Enumeration::DeviceWatcherEventKind>
//#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Enumeration::DeviceWatcherEventKind>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_USE */





#ifndef DEF___FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_USE
#define DEF___FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("01a80a97-bd87-5c8a-97fd-d449c98bdac6"))
IVectorView<enum ABI::Windows::Devices::Enumeration::DeviceClass> : IVectorView_impl<enum ABI::Windows::Devices::Enumeration::DeviceClass> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Enumeration.DeviceClass>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Devices::Enumeration::DeviceClass> __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_t;
#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Enumeration::DeviceClass>
//#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Enumeration::DeviceClass>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_USE
#define DEF___FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e170688f-3495-5bf6-aab5-9cac17e0f10f"))
IVectorView<ABI::Windows::Devices::Enumeration::DeviceInformation*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceInformation*, ABI::Windows::Devices::Enumeration::IDeviceInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Enumeration.DeviceInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Enumeration::DeviceInformation*> __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_t;
#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Enumeration::IDeviceInformation*>
//#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Enumeration::IDeviceInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_USE
#define DEF___FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8f994d37-8fab-51c6-a1e0-c93f68a20ef0"))
IVectorView<ABI::Windows::Devices::Enumeration::DeviceWatcherEvent*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceWatcherEvent*, ABI::Windows::Devices::Enumeration::IDeviceWatcherEvent*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Enumeration.DeviceWatcherEvent>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Enumeration::DeviceWatcherEvent*> __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_t;
#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Enumeration::IDeviceWatcherEvent*>
//#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Enumeration::IDeviceWatcherEvent*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_USE
#define DEF___FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ee662d37-b0eb-5729-9832-156fd2889d48"))
IVector<enum ABI::Windows::Devices::Enumeration::DeviceClass> : IVector_impl<enum ABI::Windows::Devices::Enumeration::DeviceClass> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Devices.Enumeration.DeviceClass>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<enum ABI::Windows::Devices::Enumeration::DeviceClass> __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_t;
#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::Enumeration::DeviceClass>
//#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::Enumeration::DeviceClass>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_USE */



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                enum DeviceAccessStatus : int;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ee154d83-805b-53e8-8469-90715036d013"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Devices::Enumeration::DeviceAccessStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Devices::Enumeration::DeviceAccessStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Enumeration.DeviceAccessStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Devices::Enumeration::DeviceAccessStatus> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::DeviceAccessStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::DeviceAccessStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c00bc2f2-a7f8-5f3f-80d1-2808ef6bca10"))
IAsyncOperation<enum ABI::Windows::Devices::Enumeration::DeviceAccessStatus> : IAsyncOperation_impl<enum ABI::Windows::Devices::Enumeration::DeviceAccessStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Enumeration.DeviceAccessStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Devices::Enumeration::DeviceAccessStatus> __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_t;
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Enumeration::DeviceAccessStatus>
//#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Enumeration::DeviceAccessStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bb483df2-7bb6-5923-a28d-8342ec30046b"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::DeviceInformation*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceInformation*, ABI::Windows::Devices::Enumeration::IDeviceInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Enumeration.DeviceInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::DeviceInformation*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::IDeviceInformation*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::IDeviceInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("07faa053-eb2f-5cba-b25b-d9d57be6715f"))
IAsyncOperation<ABI::Windows::Devices::Enumeration::DeviceInformation*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceInformation*, ABI::Windows::Devices::Enumeration::IDeviceInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Enumeration.DeviceInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Enumeration::DeviceInformation*> __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation_t;
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Enumeration::IDeviceInformation*>
//#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Enumeration::IDeviceInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceInformationCollection;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4a458732-527e-5c73-9a68-a73da370f782"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::DeviceInformationCollection*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceInformationCollection*, __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Enumeration.DeviceInformationCollection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::DeviceInformationCollection*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection ABI::Windows::Foundation::IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("45180254-082e-5274-b2e7-ac0517f44d07"))
IAsyncOperation<ABI::Windows::Devices::Enumeration::DeviceInformationCollection*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceInformationCollection*, __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Enumeration.DeviceInformationCollection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Enumeration::DeviceInformationCollection*> __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_t;
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection ABI::Windows::Foundation::IAsyncOperation<__FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation*>
//#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_t ABI::Windows::Foundation::IAsyncOperation<__FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DevicePairingResult;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7ee0247f-5f57-5cb2-b40e-18b5a211d6c3"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::DevicePairingResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DevicePairingResult*, ABI::Windows::Devices::Enumeration::IDevicePairingResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Enumeration.DevicePairingResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::DevicePairingResult*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::IDevicePairingResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::IDevicePairingResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1002db74-8948-591e-815d-e40b667599a3"))
IAsyncOperation<ABI::Windows::Devices::Enumeration::DevicePairingResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DevicePairingResult*, ABI::Windows::Devices::Enumeration::IDevicePairingResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Enumeration.DevicePairingResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Enumeration::DevicePairingResult*> __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult_t;
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Enumeration::IDevicePairingResult*>
//#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Enumeration::IDevicePairingResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceThumbnail;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IRandomAccessStreamWithContentType;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("86d455b2-d795-554c-9c31-bf6539349c19"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::DeviceThumbnail*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceThumbnail*, ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Enumeration.DeviceThumbnail>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::DeviceThumbnail*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bac083a3-3a19-5072-9d90-133323a049ba"))
IAsyncOperation<ABI::Windows::Devices::Enumeration::DeviceThumbnail*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceThumbnail*, ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Enumeration.DeviceThumbnail>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Enumeration::DeviceThumbnail*> __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_t;
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
//#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceUnpairingResult;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9bbe6eb9-db2d-5160-a20c-f0c265f20d8e"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::DeviceUnpairingResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceUnpairingResult*, ABI::Windows::Devices::Enumeration::IDeviceUnpairingResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Enumeration.DeviceUnpairingResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::DeviceUnpairingResult*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::IDeviceUnpairingResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::IDeviceUnpairingResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2bb4df3d-bd7e-5fe0-9020-56dc0d30b935"))
IAsyncOperation<ABI::Windows::Devices::Enumeration::DeviceUnpairingResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceUnpairingResult*, ABI::Windows::Devices::Enumeration::IDeviceUnpairingResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Enumeration.DeviceUnpairingResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Enumeration::DeviceUnpairingResult*> __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_t;
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Enumeration::IDeviceUnpairingResult*>
//#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Enumeration::IDeviceUnpairingResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceAccessInformation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceAccessChangedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4c71d028-b793-5bce-ae59-fa77f45a40d8"))
ITypedEventHandler<ABI::Windows::Devices::Enumeration::DeviceAccessInformation*,ABI::Windows::Devices::Enumeration::DeviceAccessChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceAccessInformation*, ABI::Windows::Devices::Enumeration::IDeviceAccessInformation*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceAccessChangedEventArgs*, ABI::Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Enumeration.DeviceAccessInformation, Windows.Devices.Enumeration.DeviceAccessChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Enumeration::DeviceAccessInformation*,ABI::Windows::Devices::Enumeration::DeviceAccessChangedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::IDeviceAccessInformation*,ABI::Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::IDeviceAccessInformation*,ABI::Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceInformationCustomPairing;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DevicePairingRequestedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fa65231f-4178-5de1-b2cc-03e22d7702b4"))
ITypedEventHandler<ABI::Windows::Devices::Enumeration::DeviceInformationCustomPairing*,ABI::Windows::Devices::Enumeration::DevicePairingRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceInformationCustomPairing*, ABI::Windows::Devices::Enumeration::IDeviceInformationCustomPairing*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DevicePairingRequestedEventArgs*, ABI::Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Enumeration.DeviceInformationCustomPairing, Windows.Devices.Enumeration.DevicePairingRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Enumeration::DeviceInformationCustomPairing*,ABI::Windows::Devices::Enumeration::DevicePairingRequestedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::IDeviceInformationCustomPairing*,ABI::Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::IDeviceInformationCustomPairing*,ABI::Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DevicePicker;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("62c6d98c-57ee-5bb8-a41c-958d20c3f3e8"))
ITypedEventHandler<ABI::Windows::Devices::Enumeration::DevicePicker*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DevicePicker*, ABI::Windows::Devices::Enumeration::IDevicePicker*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Enumeration.DevicePicker, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Enumeration::DevicePicker*,IInspectable*> __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::IDevicePicker*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::IDevicePicker*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceDisconnectButtonClickedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("35dd0319-5723-506c-8896-1a28b82be798"))
ITypedEventHandler<ABI::Windows::Devices::Enumeration::DevicePicker*,ABI::Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DevicePicker*, ABI::Windows::Devices::Enumeration::IDevicePicker*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs*, ABI::Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Enumeration.DevicePicker, Windows.Devices.Enumeration.DeviceDisconnectButtonClickedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Enumeration::DevicePicker*,ABI::Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::IDevicePicker*,ABI::Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::IDevicePicker*,ABI::Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceSelectedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("47e48c88-1c56-5b58-96a2-8e813d25077a"))
ITypedEventHandler<ABI::Windows::Devices::Enumeration::DevicePicker*,ABI::Windows::Devices::Enumeration::DeviceSelectedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DevicePicker*, ABI::Windows::Devices::Enumeration::IDevicePicker*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceSelectedEventArgs*, ABI::Windows::Devices::Enumeration::IDeviceSelectedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Enumeration.DevicePicker, Windows.Devices.Enumeration.DeviceSelectedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Enumeration::DevicePicker*,ABI::Windows::Devices::Enumeration::DeviceSelectedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::IDevicePicker*,ABI::Windows::Devices::Enumeration::IDeviceSelectedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::IDevicePicker*,ABI::Windows::Devices::Enumeration::IDeviceSelectedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceWatcher;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9234630f-1ff4-54f6-9e3f-ac20369b7725"))
ITypedEventHandler<ABI::Windows::Devices::Enumeration::DeviceWatcher*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceWatcher*, ABI::Windows::Devices::Enumeration::IDeviceWatcher*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Enumeration.DeviceWatcher, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Enumeration::DeviceWatcher*,IInspectable*> __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::IDeviceWatcher*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::IDeviceWatcher*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("03c5a07b-990c-5d09-b0b8-5734eaa38222"))
ITypedEventHandler<ABI::Windows::Devices::Enumeration::DeviceWatcher*,ABI::Windows::Devices::Enumeration::DeviceInformation*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceWatcher*, ABI::Windows::Devices::Enumeration::IDeviceWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceInformation*, ABI::Windows::Devices::Enumeration::IDeviceInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Enumeration.DeviceWatcher, Windows.Devices.Enumeration.DeviceInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Enumeration::DeviceWatcher*,ABI::Windows::Devices::Enumeration::DeviceInformation*> __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation_t;
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::IDeviceWatcher*,ABI::Windows::Devices::Enumeration::IDeviceInformation*>
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::IDeviceWatcher*,ABI::Windows::Devices::Enumeration::IDeviceInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceInformationUpdate;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("906f1254-79ad-54fc-93c4-cdb99b437899"))
ITypedEventHandler<ABI::Windows::Devices::Enumeration::DeviceWatcher*,ABI::Windows::Devices::Enumeration::DeviceInformationUpdate*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceWatcher*, ABI::Windows::Devices::Enumeration::IDeviceWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceInformationUpdate*, ABI::Windows::Devices::Enumeration::IDeviceInformationUpdate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Enumeration.DeviceWatcher, Windows.Devices.Enumeration.DeviceInformationUpdate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Enumeration::DeviceWatcher*,ABI::Windows::Devices::Enumeration::DeviceInformationUpdate*> __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate_t;
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::IDeviceWatcher*,ABI::Windows::Devices::Enumeration::IDeviceInformationUpdate*>
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::IDeviceWatcher*,ABI::Windows::Devices::Enumeration::IDeviceInformationUpdate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



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
            namespace Background {
                class DeviceWatcherTrigger;
            } /* Windows */
        } /* ApplicationModel */
    } /* Background */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Background {
                interface IDeviceWatcherTrigger;
            } /* Windows */
        } /* ApplicationModel */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger ABI::Windows::ApplicationModel::Background::IDeviceWatcherTrigger

#endif // ____x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger_FWD_DEFINED__





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
        namespace Foundation {
            
            typedef struct Rect Rect;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IContentTypeProvider;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider ABI::Windows::Storage::Streams::IContentTypeProvider

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_FWD_DEFINED__


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
        namespace UI {
            
            typedef struct Color Color;
            
        } /* Windows */
    } /* UI */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                
                typedef enum Placement : int Placement;
                
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                
                typedef enum DeviceAccessStatus : int DeviceAccessStatus;
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                
                typedef enum DeviceClass : int DeviceClass;
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                
                typedef enum DeviceInformationKind : int DeviceInformationKind;
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                
                typedef enum DevicePairingKinds : unsigned int DevicePairingKinds;
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                
                typedef enum DevicePairingProtectionLevel : int DevicePairingProtectionLevel;
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                
                typedef enum DevicePairingResultStatus : int DevicePairingResultStatus;
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                
                typedef enum DevicePickerDisplayStatusOptions : unsigned int DevicePickerDisplayStatusOptions;
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                
                typedef enum DeviceUnpairingResultStatus : int DeviceUnpairingResultStatus;
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                
                typedef enum DeviceWatcherEventKind : int DeviceWatcherEventKind;
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                
                typedef enum DeviceWatcherStatus : int DeviceWatcherStatus;
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                
                typedef enum Panel : int Panel;
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

































namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceConnectionChangeTriggerDetails;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceInformationPairing;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DevicePickerAppearance;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DevicePickerFilter;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceWatcherTriggerDetails;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class EnclosureLocation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */










/*
 *
 * Struct Windows.Devices.Enumeration.DeviceAccessStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [v1_enum, contract] */
                enum DeviceAccessStatus : int
                {
                    DeviceAccessStatus_Unspecified = 0,
                    DeviceAccessStatus_Allowed = 1,
                    DeviceAccessStatus_DeniedByUser = 2,
                    DeviceAccessStatus_DeniedBySystem = 3,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Enumeration.DeviceClass
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [v1_enum, contract] */
                enum DeviceClass : int
                {
                    DeviceClass_All = 0,
                    DeviceClass_AudioCapture = 1,
                    DeviceClass_AudioRender = 2,
                    DeviceClass_PortableStorageDevice = 3,
                    DeviceClass_VideoCapture = 4,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    DeviceClass_ImageScanner = 5,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    DeviceClass_Location = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                };
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Enumeration.DeviceInformationKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [v1_enum, contract] */
                enum DeviceInformationKind : int
                {
                    DeviceInformationKind_Unknown = 0,
                    DeviceInformationKind_DeviceInterface = 1,
                    DeviceInformationKind_DeviceContainer = 2,
                    DeviceInformationKind_Device = 3,
                    DeviceInformationKind_DeviceInterfaceClass = 4,
                    DeviceInformationKind_AssociationEndpoint = 5,
                    DeviceInformationKind_AssociationEndpointContainer = 6,
                    DeviceInformationKind_AssociationEndpointService = 7,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Enumeration.DevicePairingKinds
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [v1_enum, flags, contract] */
                enum DevicePairingKinds : unsigned int
                {
                    DevicePairingKinds_None = 0,
                    DevicePairingKinds_ConfirmOnly = 0x1,
                    DevicePairingKinds_DisplayPin = 0x2,
                    DevicePairingKinds_ProvidePin = 0x4,
                    DevicePairingKinds_ConfirmPinMatch = 0x8,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(DevicePairingKinds)
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.Enumeration.DevicePairingProtectionLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [v1_enum, contract] */
                enum DevicePairingProtectionLevel : int
                {
                    DevicePairingProtectionLevel_Default = 0,
                    DevicePairingProtectionLevel_None = 1,
                    DevicePairingProtectionLevel_Encryption = 2,
                    DevicePairingProtectionLevel_EncryptionAndAuthentication = 3,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Enumeration.DevicePairingResultStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [v1_enum, contract] */
                enum DevicePairingResultStatus : int
                {
                    DevicePairingResultStatus_Paired = 0,
                    DevicePairingResultStatus_NotReadyToPair = 1,
                    DevicePairingResultStatus_NotPaired = 2,
                    DevicePairingResultStatus_AlreadyPaired = 3,
                    DevicePairingResultStatus_ConnectionRejected = 4,
                    DevicePairingResultStatus_TooManyConnections = 5,
                    DevicePairingResultStatus_HardwareFailure = 6,
                    DevicePairingResultStatus_AuthenticationTimeout = 7,
                    DevicePairingResultStatus_AuthenticationNotAllowed = 8,
                    DevicePairingResultStatus_AuthenticationFailure = 9,
                    DevicePairingResultStatus_NoSupportedProfiles = 10,
                    DevicePairingResultStatus_ProtectionLevelCouldNotBeMet = 11,
                    DevicePairingResultStatus_AccessDenied = 12,
                    DevicePairingResultStatus_InvalidCeremonyData = 13,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
                    DevicePairingResultStatus_PairingCanceled = 14,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
                    DevicePairingResultStatus_OperationAlreadyInProgress = 15,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
                    DevicePairingResultStatus_RequiredHandlerNotRegistered = 16,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
                    DevicePairingResultStatus_RejectedByHandler = 17,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
                    DevicePairingResultStatus_RemoteDeviceHasAssociation = 18,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
                    DevicePairingResultStatus_Failed = 19,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
                };
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Enumeration.DevicePickerDisplayStatusOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [v1_enum, flags, contract] */
                enum DevicePickerDisplayStatusOptions : unsigned int
                {
                    DevicePickerDisplayStatusOptions_None = 0,
                    DevicePickerDisplayStatusOptions_ShowProgress = 0x1,
                    DevicePickerDisplayStatusOptions_ShowDisconnectButton = 0x2,
                    DevicePickerDisplayStatusOptions_ShowRetryButton = 0x4,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(DevicePickerDisplayStatusOptions)
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Enumeration.DeviceUnpairingResultStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [v1_enum, contract] */
                enum DeviceUnpairingResultStatus : int
                {
                    DeviceUnpairingResultStatus_Unpaired = 0,
                    DeviceUnpairingResultStatus_AlreadyUnpaired = 1,
                    DeviceUnpairingResultStatus_OperationAlreadyInProgress = 2,
                    DeviceUnpairingResultStatus_AccessDenied = 3,
                    DeviceUnpairingResultStatus_Failed = 4,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.Enumeration.DeviceWatcherEventKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [v1_enum, contract] */
                enum DeviceWatcherEventKind : int
                {
                    DeviceWatcherEventKind_Add = 0,
                    DeviceWatcherEventKind_Update = 1,
                    DeviceWatcherEventKind_Remove = 2,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Enumeration.DeviceWatcherStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [v1_enum, contract] */
                enum DeviceWatcherStatus : int
                {
                    DeviceWatcherStatus_Created = 0,
                    DeviceWatcherStatus_Started = 1,
                    DeviceWatcherStatus_EnumerationCompleted = 2,
                    DeviceWatcherStatus_Stopping = 3,
                    DeviceWatcherStatus_Stopped = 4,
                    DeviceWatcherStatus_Aborted = 5,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Enumeration.Panel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [v1_enum, contract] */
                enum Panel : int
                {
                    Panel_Unknown = 0,
                    Panel_Front = 1,
                    Panel_Back = 2,
                    Panel_Top = 3,
                    Panel_Bottom = 4,
                    Panel_Left = 5,
                    Panel_Right = 6,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceAccessChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceAccessChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceAccessChangedEventArgs[] = L"Windows.Devices.Enumeration.IDeviceAccessChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("DEDA0BCC-4F9D-4F58-9DBA-A9BC800408D5"), exclusiveto, contract] */
                MIDL_INTERFACE("DEDA0BCC-4F9D-4F58-9DBA-A9BC800408D5")
                IDeviceAccessChangedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Enumeration::DeviceAccessStatus * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceAccessChangedEventArgs=_uuidof(IDeviceAccessChangedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceAccessChangedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceAccessChangedEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Enumeration.IDeviceAccessChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceAccessChangedEventArgs2[] = L"Windows.Devices.Enumeration.IDeviceAccessChangedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("82523262-934B-4B30-A178-ADC39F2F2BE3"), exclusiveto, contract] */
                MIDL_INTERFACE("82523262-934B-4B30-A178-ADC39F2F2BE3")
                IDeviceAccessChangedEventArgs2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceAccessChangedEventArgs2=_uuidof(IDeviceAccessChangedEventArgs2);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceAccessInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceAccessInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceAccessInformation[] = L"Windows.Devices.Enumeration.IDeviceAccessInformation";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("0BAA9A73-6DE5-4915-8DDD-9A0554A6F545"), exclusiveto, contract] */
                MIDL_INTERFACE("0BAA9A73-6DE5-4915-8DDD-9A0554A6F545")
                IDeviceAccessInformation : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AccessChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AccessChanged(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentStatus(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Enumeration::DeviceAccessStatus * status
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceAccessInformation=_uuidof(IDeviceAccessInformation);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceAccessInformationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceAccessInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceAccessInformationStatics[] = L"Windows.Devices.Enumeration.IDeviceAccessInformationStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("574BD3D3-5F30-45CD-8A94-724FE5973084"), exclusiveto, contract] */
                MIDL_INTERFACE("574BD3D3-5F30-45CD-8A94-724FE5973084")
                IDeviceAccessInformationStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateFromId(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceAccessInformation * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromDeviceClassId(
                        /* [in] */GUID deviceClassId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceAccessInformation * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromDeviceClass(
                        /* [in] */ABI::Windows::Devices::Enumeration::DeviceClass deviceClass,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceAccessInformation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceAccessInformationStatics=_uuidof(IDeviceAccessInformationStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceConnectionChangeTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceConnectionChangeTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceConnectionChangeTriggerDetails[] = L"Windows.Devices.Enumeration.IDeviceConnectionChangeTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("B8578C0C-BBC1-484B-BFFA-7B31DCC200B2"), exclusiveto, contract] */
                MIDL_INTERFACE("B8578C0C-BBC1-484B-BFFA-7B31DCC200B2")
                IDeviceConnectionChangeTriggerDetails : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceConnectionChangeTriggerDetails=_uuidof(IDeviceConnectionChangeTriggerDetails);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceDisconnectButtonClickedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceDisconnectButtonClickedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceDisconnectButtonClickedEventArgs[] = L"Windows.Devices.Enumeration.IDeviceDisconnectButtonClickedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("8E44B56D-F902-4A00-B536-F37992E6A2A7"), exclusiveto, contract] */
                MIDL_INTERFACE("8E44B56D-F902-4A00-B536-F37992E6A2A7")
                IDeviceDisconnectButtonClickedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Device(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceDisconnectButtonClickedEventArgs=_uuidof(IDeviceDisconnectButtonClickedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformation[] = L"Windows.Devices.Enumeration.IDeviceInformation";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("ABA0FB95-4398-489D-8E44-E6130927011F"), exclusiveto, contract] */
                MIDL_INTERFACE("ABA0FB95-4398-489D-8E44-E6130927011F")
                IDeviceInformation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDefault(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EnclosureLocation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IEnclosureLocation * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Update(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Enumeration::IDeviceInformationUpdate * updateInfo
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetThumbnailAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * * asyncOp
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetGlyphThumbnailAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * * asyncOp
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceInformation=_uuidof(IDeviceInformation);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformation2[] = L"Windows.Devices.Enumeration.IDeviceInformation2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("F156A638-7997-48D9-A10C-269D46533F48"), exclusiveto, contract] */
                MIDL_INTERFACE("F156A638-7997-48D9-A10C-269D46533F48")
                IDeviceInformation2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Enumeration::DeviceInformationKind * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pairing(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceInformationPairing * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceInformation2=_uuidof(IDeviceInformation2);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformationCustomPairing
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformationCustomPairing
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationCustomPairing[] = L"Windows.Devices.Enumeration.IDeviceInformationCustomPairing";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("85138C02-4EE6-4914-8370-107A39144C0E"), exclusiveto, contract] */
                MIDL_INTERFACE("85138C02-4EE6-4914-8370-107A39144C0E")
                IDeviceInformationCustomPairing : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE PairAsync(
                        /* [in] */ABI::Windows::Devices::Enumeration::DevicePairingKinds pairingKindsSupported,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE PairWithProtectionLevelAsync(
                        /* [in] */ABI::Windows::Devices::Enumeration::DevicePairingKinds pairingKindsSupported,
                        /* [in] */ABI::Windows::Devices::Enumeration::DevicePairingProtectionLevel minProtectionLevel,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE PairWithProtectionLevelAndSettingsAsync(
                        /* [in] */ABI::Windows::Devices::Enumeration::DevicePairingKinds pairingKindsSupported,
                        /* [in] */ABI::Windows::Devices::Enumeration::DevicePairingProtectionLevel minProtectionLevel,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Enumeration::IDevicePairingSettings * devicePairingSettings,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * * result
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PairingRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PairingRequested(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceInformationCustomPairing=_uuidof(IDeviceInformationCustomPairing);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformationPairing
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformationPairing
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationPairing[] = L"Windows.Devices.Enumeration.IDeviceInformationPairing";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("2C4769F5-F684-40D5-8469-E8DBAAB70485"), exclusiveto, contract] */
                MIDL_INTERFACE("2C4769F5-F684-40D5-8469-E8DBAAB70485")
                IDeviceInformationPairing : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPaired(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanPair(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE PairAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE PairWithProtectionLevelAsync(
                        /* [in] */ABI::Windows::Devices::Enumeration::DevicePairingProtectionLevel minProtectionLevel,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceInformationPairing=_uuidof(IDeviceInformationPairing);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformationPairing2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformationPairing
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationPairing2[] = L"Windows.Devices.Enumeration.IDeviceInformationPairing2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("F68612FD-0AEE-4328-85CC-1C742BB1790D"), exclusiveto, contract] */
                MIDL_INTERFACE("F68612FD-0AEE-4328-85CC-1C742BB1790D")
                IDeviceInformationPairing2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProtectionLevel(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Enumeration::DevicePairingProtectionLevel * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Custom(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceInformationCustomPairing * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE PairWithProtectionLevelAndSettingsAsync(
                        /* [in] */ABI::Windows::Devices::Enumeration::DevicePairingProtectionLevel minProtectionLevel,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Enumeration::IDevicePairingSettings * devicePairingSettings,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE UnpairAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceInformationPairing2=_uuidof(IDeviceInformationPairing2);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformationPairingStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformationPairing
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationPairingStatics[] = L"Windows.Devices.Enumeration.IDeviceInformationPairingStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("E915C408-36D4-49A1-BF13-514173799B6B"), exclusiveto, contract] */
                MIDL_INTERFACE("E915C408-36D4-49A1-BF13-514173799B6B")
                IDeviceInformationPairingStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE TryRegisterForAllInboundPairingRequests(
                        /* [in] */ABI::Windows::Devices::Enumeration::DevicePairingKinds pairingKindsSupported,
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceInformationPairingStatics=_uuidof(IDeviceInformationPairingStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationStatics[] = L"Windows.Devices.Enumeration.IDeviceInformationStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("C17F100E-3A46-4A78-8013-769DC9B97390"), exclusiveto, contract] */
                MIDL_INTERFACE("C17F100E-3A46-4A78-8013-769DC9B97390")
                IDeviceInformationStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * * asyncOp
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFromIdAsyncAdditionalProperties(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * additionalProperties,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * * asyncOp
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAllAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * * asyncOp
                        ) = 0;
                    /* [overload, default_overload] */virtual HRESULT STDMETHODCALLTYPE FindAllAsyncDeviceClass(
                        /* [in] */ABI::Windows::Devices::Enumeration::DeviceClass deviceClass,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * * asyncOp
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAllAsyncAqsFilter(
                        /* [in] */__RPC__in HSTRING aqsFilter,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * * asyncOp
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAllAsyncAqsFilterAndAdditionalProperties(
                        /* [in] */__RPC__in HSTRING aqsFilter,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * additionalProperties,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * * asyncOp
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateWatcher(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceWatcher * * watcher
                        ) = 0;
                    /* [overload, default_overload] */virtual HRESULT STDMETHODCALLTYPE CreateWatcherDeviceClass(
                        /* [in] */ABI::Windows::Devices::Enumeration::DeviceClass deviceClass,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceWatcher * * watcher
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateWatcherAqsFilter(
                        /* [in] */__RPC__in HSTRING aqsFilter,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceWatcher * * watcher
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateWatcherAqsFilterAndAdditionalProperties(
                        /* [in] */__RPC__in HSTRING aqsFilter,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * additionalProperties,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceWatcher * * watcher
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceInformationStatics=_uuidof(IDeviceInformationStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformationStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationStatics2[] = L"Windows.Devices.Enumeration.IDeviceInformationStatics2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("493B4F34-A84F-45FD-9167-15D1CB1BD1F9"), exclusiveto, contract] */
                MIDL_INTERFACE("493B4F34-A84F-45FD-9167-15D1CB1BD1F9")
                IDeviceInformationStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetAqsFilterFromDeviceClass(
                        /* [in] */ABI::Windows::Devices::Enumeration::DeviceClass deviceClass,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * aqsFilter
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFromIdAsyncWithKindAndAdditionalProperties(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * additionalProperties,
                        /* [in] */ABI::Windows::Devices::Enumeration::DeviceInformationKind kind,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * * asyncOp
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAllAsyncWithKindAqsFilterAndAdditionalProperties(
                        /* [in] */__RPC__in HSTRING aqsFilter,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * additionalProperties,
                        /* [in] */ABI::Windows::Devices::Enumeration::DeviceInformationKind kind,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * * asyncOp
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateWatcherWithKindAqsFilterAndAdditionalProperties(
                        /* [in] */__RPC__in HSTRING aqsFilter,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * additionalProperties,
                        /* [in] */ABI::Windows::Devices::Enumeration::DeviceInformationKind kind,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceWatcher * * watcher
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceInformationStatics2=_uuidof(IDeviceInformationStatics2);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformationUpdate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformationUpdate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationUpdate[] = L"Windows.Devices.Enumeration.IDeviceInformationUpdate";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("8F315305-D972-44B7-A37E-9E822C78213B"), exclusiveto, contract] */
                MIDL_INTERFACE("8F315305-D972-44B7-A37E-9E822C78213B")
                IDeviceInformationUpdate : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceInformationUpdate=_uuidof(IDeviceInformationUpdate);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformationUpdate2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformationUpdate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationUpdate2[] = L"Windows.Devices.Enumeration.IDeviceInformationUpdate2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("5D9D148C-A873-485E-BAA6-AA620788E3CC"), exclusiveto, contract] */
                MIDL_INTERFACE("5D9D148C-A873-485E-BAA6-AA620788E3CC")
                IDeviceInformationUpdate2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Enumeration::DeviceInformationKind * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceInformationUpdate2=_uuidof(IDeviceInformationUpdate2);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDevicePairingRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DevicePairingRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePairingRequestedEventArgs[] = L"Windows.Devices.Enumeration.IDevicePairingRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("F717FC56-DE6B-487F-8376-0180ACA69963"), exclusiveto, contract] */
                MIDL_INTERFACE("F717FC56-DE6B-487F-8376-0180ACA69963")
                IDevicePairingRequestedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceInformation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PairingKind(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Enumeration::DevicePairingKinds * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pin(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE Accept(void) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AcceptWithPin(
                        /* [in] */__RPC__in HSTRING pin
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDevicePairingRequestedEventArgs=_uuidof(IDevicePairingRequestedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Enumeration.IDevicePairingResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DevicePairingResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePairingResult[] = L"Windows.Devices.Enumeration.IDevicePairingResult";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("072B02BF-DD95-4025-9B37-DE51ADBA37B7"), exclusiveto, contract] */
                MIDL_INTERFACE("072B02BF-DD95-4025-9B37-DE51ADBA37B7")
                IDevicePairingResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Enumeration::DevicePairingResultStatus * status
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProtectionLevelUsed(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Enumeration::DevicePairingProtectionLevel * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDevicePairingResult=_uuidof(IDevicePairingResult);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDevicePairingSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePairingSettings[] = L"Windows.Devices.Enumeration.IDevicePairingSettings";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("482CB27C-83BB-420E-BE51-6602B222DE54"), contract] */
                MIDL_INTERFACE("482CB27C-83BB-420E-BE51-6602B222DE54")
                IDevicePairingSettings : IInspectable
                {
                    
                };

                extern MIDL_CONST_ID IID & IID_IDevicePairingSettings=_uuidof(IDevicePairingSettings);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Enumeration.IDevicePicker
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DevicePicker
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePicker[] = L"Windows.Devices.Enumeration.IDevicePicker";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("84997AA2-034A-4440-8813-7D0BD479BF5A"), exclusiveto, contract] */
                MIDL_INTERFACE("84997AA2-034A-4440-8813-7D0BD479BF5A")
                IDevicePicker : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Filter(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDevicePickerFilter * * filter
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Appearance(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDevicePickerAppearance * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestedProperties(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DeviceSelected(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DeviceSelected(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DisconnectButtonClicked(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DisconnectButtonClicked(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DevicePickerDismissed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DevicePickerDismissed(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE Show(
                        /* [in] */ABI::Windows::Foundation::Rect selection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowWithPlacement(
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement placement
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE PickSingleDeviceAsync(
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE PickSingleDeviceAsyncWithPlacement(
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement placement,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Hide(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetDisplayStatus(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * device,
                        /* [in] */__RPC__in HSTRING status,
                        /* [in] */ABI::Windows::Devices::Enumeration::DevicePickerDisplayStatusOptions options
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDevicePicker=_uuidof(IDevicePicker);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDevicePickerAppearance
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DevicePickerAppearance
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePickerAppearance[] = L"Windows.Devices.Enumeration.IDevicePickerAppearance";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("E69A12C6-E627-4ED8-9B6C-460AF445E56D"), exclusiveto, contract] */
                MIDL_INTERFACE("E69A12C6-E627-4ED8-9B6C-460AF445E56D")
                IDevicePickerAppearance : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Title(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ForegroundColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ForegroundColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackgroundColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BackgroundColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccentColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AccentColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedForegroundColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SelectedForegroundColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedBackgroundColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SelectedBackgroundColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedAccentColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SelectedAccentColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDevicePickerAppearance=_uuidof(IDevicePickerAppearance);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDevicePickerFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DevicePickerFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePickerFilter[] = L"Windows.Devices.Enumeration.IDevicePickerFilter";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("91DB92A2-57CB-48F1-9B59-A59B7A1F02A2"), exclusiveto, contract] */
                MIDL_INTERFACE("91DB92A2-57CB-48F1-9B59-A59B7A1F02A2")
                IDevicePickerFilter : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedDeviceClasses(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedDeviceSelectors(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDevicePickerFilter=_uuidof(IDevicePickerFilter);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceSelectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceSelectedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceSelectedEventArgs[] = L"Windows.Devices.Enumeration.IDeviceSelectedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("269EDADE-1D2F-4940-8402-4156B81D3C77"), exclusiveto, contract] */
                MIDL_INTERFACE("269EDADE-1D2F-4940-8402-4156B81D3C77")
                IDeviceSelectedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedDevice(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceSelectedEventArgs=_uuidof(IDeviceSelectedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceUnpairingResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceUnpairingResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceUnpairingResult[] = L"Windows.Devices.Enumeration.IDeviceUnpairingResult";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("66F44AD3-79D9-444B-92CF-A92EF72571C7"), exclusiveto, contract] */
                MIDL_INTERFACE("66F44AD3-79D9-444B-92CF-A92EF72571C7")
                IDeviceUnpairingResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Enumeration::DeviceUnpairingResultStatus * status
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceUnpairingResult=_uuidof(IDeviceUnpairingResult);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceWatcher[] = L"Windows.Devices.Enumeration.IDeviceWatcher";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("C9EAB97D-8F6B-4F96-A9F4-ABC814E22271"), exclusiveto, contract] */
                MIDL_INTERFACE("C9EAB97D-8F6B-4F96-A9F4-ABC814E22271")
                IDeviceWatcher : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Added(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Added(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Updated(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Updated(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Removed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Removed(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_EnumerationCompleted(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_EnumerationCompleted(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Stopped(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Stopped(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Enumeration::DeviceWatcherStatus * status
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceWatcher=_uuidof(IDeviceWatcher);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceWatcher2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceWatcher2[] = L"Windows.Devices.Enumeration.IDeviceWatcher2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("FF08456E-ED14-49E9-9A69-8117C54AE971"), exclusiveto, contract] */
                MIDL_INTERFACE("FF08456E-ED14-49E9-9A69-8117C54AE971")
                IDeviceWatcher2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetBackgroundTrigger(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * requestedEventKinds,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Background::IDeviceWatcherTrigger * * trigger
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceWatcher2=_uuidof(IDeviceWatcher2);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceWatcherEvent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceWatcherEvent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceWatcherEvent[] = L"Windows.Devices.Enumeration.IDeviceWatcherEvent";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("74AA9C0B-1DBD-47FD-B635-3CC556D0FF8B"), exclusiveto, contract] */
                MIDL_INTERFACE("74AA9C0B-1DBD-47FD-B635-3CC556D0FF8B")
                IDeviceWatcherEvent : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Enumeration::DeviceWatcherEventKind * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceInformation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceInformationUpdate(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceInformationUpdate * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceWatcherEvent=_uuidof(IDeviceWatcherEvent);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceWatcherTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceWatcherTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceWatcherTriggerDetails[] = L"Windows.Devices.Enumeration.IDeviceWatcherTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("38808119-4CB7-4E57-A56D-776D07CBFEF9"), exclusiveto, contract] */
                MIDL_INTERFACE("38808119-4CB7-4E57-A56D-776D07CBFEF9")
                IDeviceWatcherTriggerDetails : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceWatcherEvents(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceWatcherTriggerDetails=_uuidof(IDeviceWatcherTriggerDetails);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IEnclosureLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.EnclosureLocation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IEnclosureLocation[] = L"Windows.Devices.Enumeration.IEnclosureLocation";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("42340A27-5810-459C-AABB-C65E1F813ECF"), exclusiveto, contract] */
                MIDL_INTERFACE("42340A27-5810-459C-AABB-C65E1F813ECF")
                IEnclosureLocation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InDock(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InLid(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Panel(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Enumeration::Panel * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEnclosureLocation=_uuidof(IEnclosureLocation);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IEnclosureLocation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.EnclosureLocation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Enumeration.IEnclosureLocation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IEnclosureLocation2[] = L"Windows.Devices.Enumeration.IEnclosureLocation2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                /* [object, uuid("2885995B-E07D-485D-8A9E-BDF29AEF4F66"), exclusiveto, contract] */
                MIDL_INTERFACE("2885995B-E07D-485D-8A9E-BDF29AEF4F66")
                IEnclosureLocation2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RotationAngleInDegreesClockwise(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEnclosureLocation2=_uuidof(IEnclosureLocation2);
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceAccessChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceAccessChangedEventArgs ** Default Interface **
 *    Windows.Devices.Enumeration.IDeviceAccessChangedEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceAccessChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceAccessChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceAccessChangedEventArgs[] = L"Windows.Devices.Enumeration.DeviceAccessChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceAccessInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Enumeration.IDeviceAccessInformationStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceAccessInformation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceAccessInformation_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceAccessInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceAccessInformation[] = L"Windows.Devices.Enumeration.DeviceAccessInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceConnectionChangeTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceConnectionChangeTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceConnectionChangeTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceConnectionChangeTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceConnectionChangeTriggerDetails[] = L"Windows.Devices.Enumeration.DeviceConnectionChangeTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceDisconnectButtonClickedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceDisconnectButtonClickedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceDisconnectButtonClickedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceDisconnectButtonClickedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceDisconnectButtonClickedEventArgs[] = L"Windows.Devices.Enumeration.DeviceDisconnectButtonClickedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Enumeration.IDeviceInformationStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Devices.Enumeration.IDeviceInformationStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceInformation ** Default Interface **
 *    Windows.Devices.Enumeration.IDeviceInformation2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformation_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceInformation[] = L"Windows.Devices.Enumeration.DeviceInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceInformationCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVectorView_1_Windows.Devices.Enumeration.DeviceInformation ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.Devices.Enumeration.DeviceInformation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformationCollection_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformationCollection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceInformationCollection[] = L"Windows.Devices.Enumeration.DeviceInformationCollection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceInformationCustomPairing
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceInformationCustomPairing ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformationCustomPairing_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformationCustomPairing_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceInformationCustomPairing[] = L"Windows.Devices.Enumeration.DeviceInformationCustomPairing";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceInformationPairing
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Enumeration.IDeviceInformationPairingStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceInformationPairing ** Default Interface **
 *    Windows.Devices.Enumeration.IDeviceInformationPairing2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformationPairing_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformationPairing_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceInformationPairing[] = L"Windows.Devices.Enumeration.DeviceInformationPairing";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceInformationUpdate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceInformationUpdate ** Default Interface **
 *    Windows.Devices.Enumeration.IDeviceInformationUpdate2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformationUpdate_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformationUpdate_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceInformationUpdate[] = L"Windows.Devices.Enumeration.DeviceInformationUpdate";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DevicePairingRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDevicePairingRequestedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DevicePairingRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DevicePairingRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DevicePairingRequestedEventArgs[] = L"Windows.Devices.Enumeration.DevicePairingRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.Enumeration.DevicePairingResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDevicePairingResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DevicePairingResult_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DevicePairingResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DevicePairingResult[] = L"Windows.Devices.Enumeration.DevicePairingResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DevicePicker
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDevicePicker ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DevicePicker_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DevicePicker_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DevicePicker[] = L"Windows.Devices.Enumeration.DevicePicker";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DevicePickerAppearance
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDevicePickerAppearance ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DevicePickerAppearance_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DevicePickerAppearance_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DevicePickerAppearance[] = L"Windows.Devices.Enumeration.DevicePickerAppearance";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DevicePickerFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDevicePickerFilter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DevicePickerFilter_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DevicePickerFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DevicePickerFilter[] = L"Windows.Devices.Enumeration.DevicePickerFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceSelectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceSelectedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceSelectedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceSelectedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceSelectedEventArgs[] = L"Windows.Devices.Enumeration.DeviceSelectedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceThumbnail
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IRandomAccessStreamWithContentType ** Default Interface **
 *    Windows.Storage.Streams.IContentTypeProvider
 *    Windows.Storage.Streams.IRandomAccessStream
 *    Windows.Storage.Streams.IOutputStream
 *    Windows.Foundation.IClosable
 *    Windows.Storage.Streams.IInputStream
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceThumbnail_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceThumbnail_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceThumbnail[] = L"Windows.Devices.Enumeration.DeviceThumbnail";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceUnpairingResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceUnpairingResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceUnpairingResult_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceUnpairingResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceUnpairingResult[] = L"Windows.Devices.Enumeration.DeviceUnpairingResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceWatcher ** Default Interface **
 *    Windows.Devices.Enumeration.IDeviceWatcher2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceWatcher_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceWatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceWatcher[] = L"Windows.Devices.Enumeration.DeviceWatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceWatcherEvent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceWatcherEvent ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceWatcherEvent_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceWatcherEvent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceWatcherEvent[] = L"Windows.Devices.Enumeration.DeviceWatcherEvent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceWatcherTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceWatcherTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceWatcherTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceWatcherTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceWatcherTriggerDetails[] = L"Windows.Devices.Enumeration.DeviceWatcherTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.EnclosureLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IEnclosureLocation ** Default Interface **
 *    Windows.Devices.Enumeration.IEnclosureLocation2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_EnclosureLocation_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_EnclosureLocation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_EnclosureLocation[] = L"Windows.Devices.Enumeration.EnclosureLocation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2 __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2 __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2 __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2 __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass;
#if !defined(____FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass;

typedef struct __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl;

interface __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass;

typedef  struct __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl;

interface __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation;

typedef struct __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl;

interface __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation;

typedef  struct __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl;

interface __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent;

typedef struct __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventVtbl;

interface __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent;

typedef  struct __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventVtbl;

interface __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherEventKind;
#if !defined(____FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind;

typedef struct __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKindVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherEventKind *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherEventKind *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKindVtbl;

interface __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKindVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind;

typedef  struct __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKindVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKindVtbl;

interface __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKindVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass;

typedef struct __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
            /* [in] */ enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl;

interface __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation;

typedef struct __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl;

interface __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent;

typedef struct __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventVtbl;

interface __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass;

typedef struct __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This, /* [out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This, /* [in] */ __RPC__in enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass *value);

    END_INTERFACE
} __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl;

interface __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass_INTERFACE_DEFINED__


enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollectionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollectionVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollectionVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResultVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnailVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnailVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnailVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnailVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnailVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResultVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdateVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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



#ifndef ____x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger;

#endif // ____x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__







typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;




typedef enum __x_ABI_CWindows_CUI_CPopups_CPlacement __x_ABI_CWindows_CUI_CPopups_CPlacement;





typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus;


typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass;


typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceInformationKind __x_ABI_CWindows_CDevices_CEnumeration_CDeviceInformationKind;


typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds;


typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel;


typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingResultStatus __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingResultStatus;


typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDevicePickerDisplayStatusOptions __x_ABI_CWindows_CDevices_CEnumeration_CDevicePickerDisplayStatusOptions;


typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceUnpairingResultStatus __x_ABI_CWindows_CDevices_CEnumeration_CDeviceUnpairingResultStatus;


typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherEventKind __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherEventKind;


typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus;


typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CPanel __x_ABI_CWindows_CDevices_CEnumeration_CPanel;




























































/*
 *
 * Struct Windows.Devices.Enumeration.DeviceAccessStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus
{
    DeviceAccessStatus_Unspecified = 0,
    DeviceAccessStatus_Allowed = 1,
    DeviceAccessStatus_DeniedByUser = 2,
    DeviceAccessStatus_DeniedBySystem = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Enumeration.DeviceClass
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass
{
    DeviceClass_All = 0,
    DeviceClass_AudioCapture = 1,
    DeviceClass_AudioRender = 2,
    DeviceClass_PortableStorageDevice = 3,
    DeviceClass_VideoCapture = 4,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    DeviceClass_ImageScanner = 5,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    DeviceClass_Location = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Enumeration.DeviceInformationKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceInformationKind
{
    DeviceInformationKind_Unknown = 0,
    DeviceInformationKind_DeviceInterface = 1,
    DeviceInformationKind_DeviceContainer = 2,
    DeviceInformationKind_Device = 3,
    DeviceInformationKind_DeviceInterfaceClass = 4,
    DeviceInformationKind_AssociationEndpoint = 5,
    DeviceInformationKind_AssociationEndpointContainer = 6,
    DeviceInformationKind_AssociationEndpointService = 7,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Enumeration.DevicePairingKinds
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds
{
    DevicePairingKinds_None = 0,
    DevicePairingKinds_ConfirmOnly = 0x1,
    DevicePairingKinds_DisplayPin = 0x2,
    DevicePairingKinds_ProvidePin = 0x4,
    DevicePairingKinds_ConfirmPinMatch = 0x8,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.Enumeration.DevicePairingProtectionLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel
{
    DevicePairingProtectionLevel_Default = 0,
    DevicePairingProtectionLevel_None = 1,
    DevicePairingProtectionLevel_Encryption = 2,
    DevicePairingProtectionLevel_EncryptionAndAuthentication = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Enumeration.DevicePairingResultStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingResultStatus
{
    DevicePairingResultStatus_Paired = 0,
    DevicePairingResultStatus_NotReadyToPair = 1,
    DevicePairingResultStatus_NotPaired = 2,
    DevicePairingResultStatus_AlreadyPaired = 3,
    DevicePairingResultStatus_ConnectionRejected = 4,
    DevicePairingResultStatus_TooManyConnections = 5,
    DevicePairingResultStatus_HardwareFailure = 6,
    DevicePairingResultStatus_AuthenticationTimeout = 7,
    DevicePairingResultStatus_AuthenticationNotAllowed = 8,
    DevicePairingResultStatus_AuthenticationFailure = 9,
    DevicePairingResultStatus_NoSupportedProfiles = 10,
    DevicePairingResultStatus_ProtectionLevelCouldNotBeMet = 11,
    DevicePairingResultStatus_AccessDenied = 12,
    DevicePairingResultStatus_InvalidCeremonyData = 13,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
    DevicePairingResultStatus_PairingCanceled = 14,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
    DevicePairingResultStatus_OperationAlreadyInProgress = 15,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
    DevicePairingResultStatus_RequiredHandlerNotRegistered = 16,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
    DevicePairingResultStatus_RejectedByHandler = 17,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
    DevicePairingResultStatus_RemoteDeviceHasAssociation = 18,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
    DevicePairingResultStatus_Failed = 19,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Enumeration.DevicePickerDisplayStatusOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CDevices_CEnumeration_CDevicePickerDisplayStatusOptions
{
    DevicePickerDisplayStatusOptions_None = 0,
    DevicePickerDisplayStatusOptions_ShowProgress = 0x1,
    DevicePickerDisplayStatusOptions_ShowDisconnectButton = 0x2,
    DevicePickerDisplayStatusOptions_ShowRetryButton = 0x4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Enumeration.DeviceUnpairingResultStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceUnpairingResultStatus
{
    DeviceUnpairingResultStatus_Unpaired = 0,
    DeviceUnpairingResultStatus_AlreadyUnpaired = 1,
    DeviceUnpairingResultStatus_OperationAlreadyInProgress = 2,
    DeviceUnpairingResultStatus_AccessDenied = 3,
    DeviceUnpairingResultStatus_Failed = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.Enumeration.DeviceWatcherEventKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherEventKind
{
    DeviceWatcherEventKind_Add = 0,
    DeviceWatcherEventKind_Update = 1,
    DeviceWatcherEventKind_Remove = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Enumeration.DeviceWatcherStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus
{
    DeviceWatcherStatus_Created = 0,
    DeviceWatcherStatus_Started = 1,
    DeviceWatcherStatus_EnumerationCompleted = 2,
    DeviceWatcherStatus_Stopping = 3,
    DeviceWatcherStatus_Stopped = 4,
    DeviceWatcherStatus_Aborted = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Enumeration.Panel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CEnumeration_CPanel
{
    Panel_Unknown = 0,
    Panel_Front = 1,
    Panel_Back = 2,
    Panel_Top = 3,
    Panel_Bottom = 4,
    Panel_Left = 5,
    Panel_Right = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceAccessChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceAccessChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceAccessChangedEventArgs[] = L"Windows.Devices.Enumeration.IDeviceAccessChangedEventArgs";
/* [object, uuid("DEDA0BCC-4F9D-4F58-9DBA-A9BC800408D5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceAccessChangedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceAccessChangedEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Enumeration.IDeviceAccessChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceAccessChangedEventArgs2[] = L"Windows.Devices.Enumeration.IDeviceAccessChangedEventArgs2";
/* [object, uuid("82523262-934B-4B30-A178-ADC39F2F2BE3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2Vtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceAccessInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceAccessInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceAccessInformation[] = L"Windows.Devices.Enumeration.IDeviceAccessInformation";
/* [object, uuid("0BAA9A73-6DE5-4915-8DDD-9A0554A6F545"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AccessChanged )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AccessChanged )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentStatus )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus * status
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_add_AccessChanged(This,handler,cookie) \
    ( (This)->lpVtbl->add_AccessChanged(This,handler,cookie) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_remove_AccessChanged(This,cookie) \
    ( (This)->lpVtbl->remove_AccessChanged(This,cookie) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_get_CurrentStatus(This,status) \
    ( (This)->lpVtbl->get_CurrentStatus(This,status) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceAccessInformationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceAccessInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceAccessInformationStatics[] = L"Windows.Devices.Enumeration.IDeviceAccessInformationStatics";
/* [object, uuid("574BD3D3-5F30-45CD-8A94-724FE5973084"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromId )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromDeviceClassId )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics * This,
        /* [in] */GUID deviceClassId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromDeviceClass )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics * This,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass deviceClass,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_CreateFromId(This,deviceId,value) \
    ( (This)->lpVtbl->CreateFromId(This,deviceId,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_CreateFromDeviceClassId(This,deviceClassId,value) \
    ( (This)->lpVtbl->CreateFromDeviceClassId(This,deviceClassId,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_CreateFromDeviceClass(This,deviceClass,value) \
    ( (This)->lpVtbl->CreateFromDeviceClass(This,deviceClass,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceConnectionChangeTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceConnectionChangeTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceConnectionChangeTriggerDetails[] = L"Windows.Devices.Enumeration.IDeviceConnectionChangeTriggerDetails";
/* [object, uuid("B8578C0C-BBC1-484B-BFFA-7B31DCC200B2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetailsVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceDisconnectButtonClickedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceDisconnectButtonClickedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceDisconnectButtonClickedEventArgs[] = L"Windows.Devices.Enumeration.IDeviceDisconnectButtonClickedEventArgs";
/* [object, uuid("8E44B56D-F902-4A00-B536-F37992E6A2A7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Device )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_get_Device(This,value) \
    ( (This)->lpVtbl->get_Device(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformation[] = L"Windows.Devices.Enumeration.IDeviceInformation";
/* [object, uuid("ABA0FB95-4398-489D-8E44-E6130927011F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDefault )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EnclosureLocation )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Update )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * updateInfo
        );
    HRESULT ( STDMETHODCALLTYPE *GetThumbnailAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * * asyncOp
        );
    HRESULT ( STDMETHODCALLTYPE *GetGlyphThumbnailAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * * asyncOp
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_get_IsEnabled(This,value) \
    ( (This)->lpVtbl->get_IsEnabled(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_get_IsDefault(This,value) \
    ( (This)->lpVtbl->get_IsDefault(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_get_EnclosureLocation(This,value) \
    ( (This)->lpVtbl->get_EnclosureLocation(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_Update(This,updateInfo) \
    ( (This)->lpVtbl->Update(This,updateInfo) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_GetThumbnailAsync(This,asyncOp) \
    ( (This)->lpVtbl->GetThumbnailAsync(This,asyncOp) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_GetGlyphThumbnailAsync(This,asyncOp) \
    ( (This)->lpVtbl->GetGlyphThumbnailAsync(This,asyncOp) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformation2[] = L"Windows.Devices.Enumeration.IDeviceInformation2";
/* [object, uuid("F156A638-7997-48D9-A10C-269D46533F48"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceInformationKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pairing )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2Vtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_get_Pairing(This,value) \
    ( (This)->lpVtbl->get_Pairing(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformationCustomPairing
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformationCustomPairing
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationCustomPairing[] = L"Windows.Devices.Enumeration.IDeviceInformationCustomPairing";
/* [object, uuid("85138C02-4EE6-4914-8370-107A39144C0E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *PairAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds pairingKindsSupported,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *PairWithProtectionLevelAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds pairingKindsSupported,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel minProtectionLevel,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *PairWithProtectionLevelAndSettingsAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds pairingKindsSupported,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel minProtectionLevel,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings * devicePairingSettings,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * * result
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PairingRequested )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PairingRequested )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairingVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairingVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_PairAsync(This,pairingKindsSupported,result) \
    ( (This)->lpVtbl->PairAsync(This,pairingKindsSupported,result) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_PairWithProtectionLevelAsync(This,pairingKindsSupported,minProtectionLevel,result) \
    ( (This)->lpVtbl->PairWithProtectionLevelAsync(This,pairingKindsSupported,minProtectionLevel,result) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_PairWithProtectionLevelAndSettingsAsync(This,pairingKindsSupported,minProtectionLevel,devicePairingSettings,result) \
    ( (This)->lpVtbl->PairWithProtectionLevelAndSettingsAsync(This,pairingKindsSupported,minProtectionLevel,devicePairingSettings,result) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_add_PairingRequested(This,handler,token) \
    ( (This)->lpVtbl->add_PairingRequested(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_remove_PairingRequested(This,token) \
    ( (This)->lpVtbl->remove_PairingRequested(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformationPairing
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformationPairing
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationPairing[] = L"Windows.Devices.Enumeration.IDeviceInformationPairing";
/* [object, uuid("2C4769F5-F684-40D5-8469-E8DBAAB70485"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPaired )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanPair )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *PairAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *PairWithProtectionLevelAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel minProtectionLevel,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_get_IsPaired(This,value) \
    ( (This)->lpVtbl->get_IsPaired(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_get_CanPair(This,value) \
    ( (This)->lpVtbl->get_CanPair(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_PairAsync(This,result) \
    ( (This)->lpVtbl->PairAsync(This,result) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_PairWithProtectionLevelAsync(This,minProtectionLevel,result) \
    ( (This)->lpVtbl->PairWithProtectionLevelAsync(This,minProtectionLevel,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformationPairing2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformationPairing
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationPairing2[] = L"Windows.Devices.Enumeration.IDeviceInformationPairing2";
/* [object, uuid("F68612FD-0AEE-4328-85CC-1C742BB1790D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProtectionLevel )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Custom )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *PairWithProtectionLevelAndSettingsAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel minProtectionLevel,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings * devicePairingSettings,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *UnpairAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2Vtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_get_ProtectionLevel(This,value) \
    ( (This)->lpVtbl->get_ProtectionLevel(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_get_Custom(This,value) \
    ( (This)->lpVtbl->get_Custom(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_PairWithProtectionLevelAndSettingsAsync(This,minProtectionLevel,devicePairingSettings,result) \
    ( (This)->lpVtbl->PairWithProtectionLevelAndSettingsAsync(This,minProtectionLevel,devicePairingSettings,result) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_UnpairAsync(This,result) \
    ( (This)->lpVtbl->UnpairAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformationPairingStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformationPairing
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationPairingStatics[] = L"Windows.Devices.Enumeration.IDeviceInformationPairingStatics";
/* [object, uuid("E915C408-36D4-49A1-BF13-514173799B6B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryRegisterForAllInboundPairingRequests )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics * This,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds pairingKindsSupported,
        /* [retval, out] */__RPC__out boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_TryRegisterForAllInboundPairingRequests(This,pairingKindsSupported,result) \
    ( (This)->lpVtbl->TryRegisterForAllInboundPairingRequests(This,pairingKindsSupported,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationStatics[] = L"Windows.Devices.Enumeration.IDeviceInformationStatics";
/* [object, uuid("C17F100E-3A46-4A78-8013-769DC9B97390"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFromIdAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * * asyncOp
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFromIdAsyncAdditionalProperties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * additionalProperties,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * * asyncOp
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * * asyncOp
        );
    /* [overload, default_overload] */HRESULT ( STDMETHODCALLTYPE *FindAllAsyncDeviceClass )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass deviceClass,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * * asyncOp
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAllAsyncAqsFilter )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
        /* [in] */__RPC__in HSTRING aqsFilter,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * * asyncOp
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAllAsyncAqsFilterAndAdditionalProperties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
        /* [in] */__RPC__in HSTRING aqsFilter,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * additionalProperties,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * * asyncOp
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateWatcher )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * * watcher
        );
    /* [overload, default_overload] */HRESULT ( STDMETHODCALLTYPE *CreateWatcherDeviceClass )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass deviceClass,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * * watcher
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateWatcherAqsFilter )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
        /* [in] */__RPC__in HSTRING aqsFilter,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * * watcher
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateWatcherAqsFilterAndAdditionalProperties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
        /* [in] */__RPC__in HSTRING aqsFilter,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * additionalProperties,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * * watcher
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_CreateFromIdAsync(This,deviceId,asyncOp) \
    ( (This)->lpVtbl->CreateFromIdAsync(This,deviceId,asyncOp) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_CreateFromIdAsyncAdditionalProperties(This,deviceId,additionalProperties,asyncOp) \
    ( (This)->lpVtbl->CreateFromIdAsyncAdditionalProperties(This,deviceId,additionalProperties,asyncOp) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_FindAllAsync(This,asyncOp) \
    ( (This)->lpVtbl->FindAllAsync(This,asyncOp) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_FindAllAsyncDeviceClass(This,deviceClass,asyncOp) \
    ( (This)->lpVtbl->FindAllAsyncDeviceClass(This,deviceClass,asyncOp) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_FindAllAsyncAqsFilter(This,aqsFilter,asyncOp) \
    ( (This)->lpVtbl->FindAllAsyncAqsFilter(This,aqsFilter,asyncOp) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_FindAllAsyncAqsFilterAndAdditionalProperties(This,aqsFilter,additionalProperties,asyncOp) \
    ( (This)->lpVtbl->FindAllAsyncAqsFilterAndAdditionalProperties(This,aqsFilter,additionalProperties,asyncOp) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_CreateWatcher(This,watcher) \
    ( (This)->lpVtbl->CreateWatcher(This,watcher) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_CreateWatcherDeviceClass(This,deviceClass,watcher) \
    ( (This)->lpVtbl->CreateWatcherDeviceClass(This,deviceClass,watcher) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_CreateWatcherAqsFilter(This,aqsFilter,watcher) \
    ( (This)->lpVtbl->CreateWatcherAqsFilter(This,aqsFilter,watcher) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_CreateWatcherAqsFilterAndAdditionalProperties(This,aqsFilter,additionalProperties,watcher) \
    ( (This)->lpVtbl->CreateWatcherAqsFilterAndAdditionalProperties(This,aqsFilter,additionalProperties,watcher) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformationStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationStatics2[] = L"Windows.Devices.Enumeration.IDeviceInformationStatics2";
/* [object, uuid("493B4F34-A84F-45FD-9167-15D1CB1BD1F9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAqsFilterFromDeviceClass )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass deviceClass,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * aqsFilter
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFromIdAsyncWithKindAndAdditionalProperties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * additionalProperties,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CDeviceInformationKind kind,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * * asyncOp
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAllAsyncWithKindAqsFilterAndAdditionalProperties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This,
        /* [in] */__RPC__in HSTRING aqsFilter,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * additionalProperties,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CDeviceInformationKind kind,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * * asyncOp
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateWatcherWithKindAqsFilterAndAdditionalProperties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This,
        /* [in] */__RPC__in HSTRING aqsFilter,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * additionalProperties,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CDeviceInformationKind kind,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * * watcher
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2Vtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_GetAqsFilterFromDeviceClass(This,deviceClass,aqsFilter) \
    ( (This)->lpVtbl->GetAqsFilterFromDeviceClass(This,deviceClass,aqsFilter) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_CreateFromIdAsyncWithKindAndAdditionalProperties(This,deviceId,additionalProperties,kind,asyncOp) \
    ( (This)->lpVtbl->CreateFromIdAsyncWithKindAndAdditionalProperties(This,deviceId,additionalProperties,kind,asyncOp) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_FindAllAsyncWithKindAqsFilterAndAdditionalProperties(This,aqsFilter,additionalProperties,kind,asyncOp) \
    ( (This)->lpVtbl->FindAllAsyncWithKindAqsFilterAndAdditionalProperties(This,aqsFilter,additionalProperties,kind,asyncOp) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_CreateWatcherWithKindAqsFilterAndAdditionalProperties(This,aqsFilter,additionalProperties,kind,watcher) \
    ( (This)->lpVtbl->CreateWatcherWithKindAqsFilterAndAdditionalProperties(This,aqsFilter,additionalProperties,kind,watcher) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformationUpdate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformationUpdate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationUpdate[] = L"Windows.Devices.Enumeration.IDeviceInformationUpdate";
/* [object, uuid("8F315305-D972-44B7-A37E-9E822C78213B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdateVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceInformationUpdate2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceInformationUpdate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationUpdate2[] = L"Windows.Devices.Enumeration.IDeviceInformationUpdate2";
/* [object, uuid("5D9D148C-A873-485E-BAA6-AA620788E3CC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceInformationKind * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2Vtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDevicePairingRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DevicePairingRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePairingRequestedEventArgs[] = L"Windows.Devices.Enumeration.IDevicePairingRequestedEventArgs";
/* [object, uuid("F717FC56-DE6B-487F-8376-0180ACA69963"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceInformation )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PairingKind )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pin )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *Accept )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AcceptWithPin )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This,
        /* [in] */__RPC__in HSTRING pin
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_get_DeviceInformation(This,value) \
    ( (This)->lpVtbl->get_DeviceInformation(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_get_PairingKind(This,value) \
    ( (This)->lpVtbl->get_PairingKind(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_get_Pin(This,value) \
    ( (This)->lpVtbl->get_Pin(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_Accept(This) \
    ( (This)->lpVtbl->Accept(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_AcceptWithPin(This,pin) \
    ( (This)->lpVtbl->AcceptWithPin(This,pin) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_GetDeferral(This,result) \
    ( (This)->lpVtbl->GetDeferral(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Enumeration.IDevicePairingResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DevicePairingResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePairingResult[] = L"Windows.Devices.Enumeration.IDevicePairingResult";
/* [object, uuid("072B02BF-DD95-4025-9B37-DE51ADBA37B7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingResultStatus * status
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProtectionLevelUsed )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResultVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_get_Status(This,status) \
    ( (This)->lpVtbl->get_Status(This,status) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_get_ProtectionLevelUsed(This,value) \
    ( (This)->lpVtbl->get_ProtectionLevelUsed(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDevicePairingSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePairingSettings[] = L"Windows.Devices.Enumeration.IDevicePairingSettings";
/* [object, uuid("482CB27C-83BB-420E-BE51-6602B222DE54"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettingsVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Enumeration.IDevicePicker
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DevicePicker
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePicker[] = L"Windows.Devices.Enumeration.IDevicePicker";
/* [object, uuid("84997AA2-034A-4440-8813-7D0BD479BF5A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Filter )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter * * filter
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Appearance )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestedProperties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DeviceSelected )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DeviceSelected )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DisconnectButtonClicked )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DisconnectButtonClicked )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DevicePickerDismissed )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DevicePickerDismissed )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
        /* [in] */EventRegistrationToken token
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *Show )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowWithPlacement )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement placement
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *PickSingleDeviceAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *PickSingleDeviceAsyncWithPlacement )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement placement,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *Hide )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetDisplayStatus )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * device,
        /* [in] */__RPC__in HSTRING status,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CDevicePickerDisplayStatusOptions options
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_get_Filter(This,filter) \
    ( (This)->lpVtbl->get_Filter(This,filter) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_get_Appearance(This,value) \
    ( (This)->lpVtbl->get_Appearance(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_get_RequestedProperties(This,value) \
    ( (This)->lpVtbl->get_RequestedProperties(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_add_DeviceSelected(This,handler,token) \
    ( (This)->lpVtbl->add_DeviceSelected(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_remove_DeviceSelected(This,token) \
    ( (This)->lpVtbl->remove_DeviceSelected(This,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_add_DisconnectButtonClicked(This,handler,token) \
    ( (This)->lpVtbl->add_DisconnectButtonClicked(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_remove_DisconnectButtonClicked(This,token) \
    ( (This)->lpVtbl->remove_DisconnectButtonClicked(This,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_add_DevicePickerDismissed(This,handler,token) \
    ( (This)->lpVtbl->add_DevicePickerDismissed(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_remove_DevicePickerDismissed(This,token) \
    ( (This)->lpVtbl->remove_DevicePickerDismissed(This,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_Show(This,selection) \
    ( (This)->lpVtbl->Show(This,selection) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_ShowWithPlacement(This,selection,placement) \
    ( (This)->lpVtbl->ShowWithPlacement(This,selection,placement) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_PickSingleDeviceAsync(This,selection,operation) \
    ( (This)->lpVtbl->PickSingleDeviceAsync(This,selection,operation) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_PickSingleDeviceAsyncWithPlacement(This,selection,placement,operation) \
    ( (This)->lpVtbl->PickSingleDeviceAsyncWithPlacement(This,selection,placement,operation) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_Hide(This) \
    ( (This)->lpVtbl->Hide(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_SetDisplayStatus(This,device,status,options) \
    ( (This)->lpVtbl->SetDisplayStatus(This,device,status,options) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDevicePickerAppearance
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DevicePickerAppearance
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePickerAppearance[] = L"Windows.Devices.Enumeration.IDevicePickerAppearance";
/* [object, uuid("E69A12C6-E627-4ED8-9B6C-460AF445E56D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ForegroundColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ForegroundColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccentColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AccentColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedForegroundColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SelectedForegroundColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedBackgroundColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SelectedBackgroundColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedAccentColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SelectedAccentColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearanceVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearanceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_put_Title(This,value) \
    ( (This)->lpVtbl->put_Title(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_get_ForegroundColor(This,value) \
    ( (This)->lpVtbl->get_ForegroundColor(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_put_ForegroundColor(This,value) \
    ( (This)->lpVtbl->put_ForegroundColor(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_get_BackgroundColor(This,value) \
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_put_BackgroundColor(This,value) \
    ( (This)->lpVtbl->put_BackgroundColor(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_get_AccentColor(This,value) \
    ( (This)->lpVtbl->get_AccentColor(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_put_AccentColor(This,value) \
    ( (This)->lpVtbl->put_AccentColor(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_get_SelectedForegroundColor(This,value) \
    ( (This)->lpVtbl->get_SelectedForegroundColor(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_put_SelectedForegroundColor(This,value) \
    ( (This)->lpVtbl->put_SelectedForegroundColor(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_get_SelectedBackgroundColor(This,value) \
    ( (This)->lpVtbl->get_SelectedBackgroundColor(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_put_SelectedBackgroundColor(This,value) \
    ( (This)->lpVtbl->put_SelectedBackgroundColor(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_get_SelectedAccentColor(This,value) \
    ( (This)->lpVtbl->get_SelectedAccentColor(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_put_SelectedAccentColor(This,value) \
    ( (This)->lpVtbl->put_SelectedAccentColor(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDevicePickerFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DevicePickerFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePickerFilter[] = L"Windows.Devices.Enumeration.IDevicePickerFilter";
/* [object, uuid("91DB92A2-57CB-48F1-9B59-A59B7A1F02A2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedDeviceClasses )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedDeviceSelectors )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilterVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_get_SupportedDeviceClasses(This,value) \
    ( (This)->lpVtbl->get_SupportedDeviceClasses(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_get_SupportedDeviceSelectors(This,value) \
    ( (This)->lpVtbl->get_SupportedDeviceSelectors(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceSelectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceSelectedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceSelectedEventArgs[] = L"Windows.Devices.Enumeration.IDeviceSelectedEventArgs";
/* [object, uuid("269EDADE-1D2F-4940-8402-4156B81D3C77"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedDevice )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_get_SelectedDevice(This,value) \
    ( (This)->lpVtbl->get_SelectedDevice(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceUnpairingResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceUnpairingResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceUnpairingResult[] = L"Windows.Devices.Enumeration.IDeviceUnpairingResult";
/* [object, uuid("66F44AD3-79D9-444B-92CF-A92EF72571C7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceUnpairingResultStatus * status
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResultVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_get_Status(This,status) \
    ( (This)->lpVtbl->get_Status(This,status) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceWatcher[] = L"Windows.Devices.Enumeration.IDeviceWatcher";
/* [object, uuid("C9EAB97D-8F6B-4F96-A9F4-ABC814E22271"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Updated )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Updated )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus * status
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_add_Added(This,handler,token) \
    ( (This)->lpVtbl->add_Added(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_remove_Added(This,token) \
    ( (This)->lpVtbl->remove_Added(This,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_add_Updated(This,handler,token) \
    ( (This)->lpVtbl->add_Updated(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_remove_Updated(This,token) \
    ( (This)->lpVtbl->remove_Updated(This,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_add_Removed(This,handler,token) \
    ( (This)->lpVtbl->add_Removed(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_remove_Removed(This,token) \
    ( (This)->lpVtbl->remove_Removed(This,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_add_EnumerationCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_remove_EnumerationCompleted(This,token) \
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_add_Stopped(This,handler,token) \
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_remove_Stopped(This,token) \
    ( (This)->lpVtbl->remove_Stopped(This,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_get_Status(This,status) \
    ( (This)->lpVtbl->get_Status(This,status) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceWatcher2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceWatcher2[] = L"Windows.Devices.Enumeration.IDeviceWatcher2";
/* [object, uuid("FF08456E-ED14-49E9-9A69-8117C54AE971"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetBackgroundTrigger )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * requestedEventKinds,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger * * trigger
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2Vtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_GetBackgroundTrigger(This,requestedEventKinds,trigger) \
    ( (This)->lpVtbl->GetBackgroundTrigger(This,requestedEventKinds,trigger) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceWatcherEvent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceWatcherEvent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceWatcherEvent[] = L"Windows.Devices.Enumeration.IDeviceWatcherEvent";
/* [object, uuid("74AA9C0B-1DBD-47FD-B635-3CC556D0FF8B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEventVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherEventKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceInformation )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceInformationUpdate )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEventVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEventVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_get_DeviceInformation(This,value) \
    ( (This)->lpVtbl->get_DeviceInformation(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_get_DeviceInformationUpdate(This,value) \
    ( (This)->lpVtbl->get_DeviceInformationUpdate(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IDeviceWatcherTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.DeviceWatcherTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceWatcherTriggerDetails[] = L"Windows.Devices.Enumeration.IDeviceWatcherTriggerDetails";
/* [object, uuid("38808119-4CB7-4E57-A56D-776D07CBFEF9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceWatcherEvents )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetailsVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_get_DeviceWatcherEvents(This,value) \
    ( (This)->lpVtbl->get_DeviceWatcherEvents(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IEnclosureLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.EnclosureLocation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IEnclosureLocation[] = L"Windows.Devices.Enumeration.IEnclosureLocation";
/* [object, uuid("42340A27-5810-459C-AABB-C65E1F813ECF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InDock )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InLid )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Panel )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CPanel * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocationVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_get_InDock(This,value) \
    ( (This)->lpVtbl->get_InDock(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_get_InLid(This,value) \
    ( (This)->lpVtbl->get_InLid(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_get_Panel(This,value) \
    ( (This)->lpVtbl->get_Panel(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.IEnclosureLocation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.EnclosureLocation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Enumeration.IEnclosureLocation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IEnclosureLocation2[] = L"Windows.Devices.Enumeration.IEnclosureLocation2";
/* [object, uuid("2885995B-E07D-485D-8A9E-BDF29AEF4F66"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RotationAngleInDegreesClockwise )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2Vtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_get_RotationAngleInDegreesClockwise(This,value) \
    ( (This)->lpVtbl->get_RotationAngleInDegreesClockwise(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceAccessChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceAccessChangedEventArgs ** Default Interface **
 *    Windows.Devices.Enumeration.IDeviceAccessChangedEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceAccessChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceAccessChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceAccessChangedEventArgs[] = L"Windows.Devices.Enumeration.DeviceAccessChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceAccessInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Enumeration.IDeviceAccessInformationStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceAccessInformation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceAccessInformation_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceAccessInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceAccessInformation[] = L"Windows.Devices.Enumeration.DeviceAccessInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceConnectionChangeTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceConnectionChangeTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceConnectionChangeTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceConnectionChangeTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceConnectionChangeTriggerDetails[] = L"Windows.Devices.Enumeration.DeviceConnectionChangeTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceDisconnectButtonClickedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceDisconnectButtonClickedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceDisconnectButtonClickedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceDisconnectButtonClickedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceDisconnectButtonClickedEventArgs[] = L"Windows.Devices.Enumeration.DeviceDisconnectButtonClickedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Enumeration.IDeviceInformationStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Devices.Enumeration.IDeviceInformationStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceInformation ** Default Interface **
 *    Windows.Devices.Enumeration.IDeviceInformation2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformation_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceInformation[] = L"Windows.Devices.Enumeration.DeviceInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceInformationCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVectorView_1_Windows.Devices.Enumeration.DeviceInformation ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.Devices.Enumeration.DeviceInformation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformationCollection_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformationCollection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceInformationCollection[] = L"Windows.Devices.Enumeration.DeviceInformationCollection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceInformationCustomPairing
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceInformationCustomPairing ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformationCustomPairing_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformationCustomPairing_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceInformationCustomPairing[] = L"Windows.Devices.Enumeration.DeviceInformationCustomPairing";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceInformationPairing
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Enumeration.IDeviceInformationPairingStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceInformationPairing ** Default Interface **
 *    Windows.Devices.Enumeration.IDeviceInformationPairing2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformationPairing_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformationPairing_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceInformationPairing[] = L"Windows.Devices.Enumeration.DeviceInformationPairing";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceInformationUpdate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceInformationUpdate ** Default Interface **
 *    Windows.Devices.Enumeration.IDeviceInformationUpdate2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformationUpdate_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceInformationUpdate_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceInformationUpdate[] = L"Windows.Devices.Enumeration.DeviceInformationUpdate";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DevicePairingRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDevicePairingRequestedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DevicePairingRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DevicePairingRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DevicePairingRequestedEventArgs[] = L"Windows.Devices.Enumeration.DevicePairingRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.Enumeration.DevicePairingResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDevicePairingResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DevicePairingResult_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DevicePairingResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DevicePairingResult[] = L"Windows.Devices.Enumeration.DevicePairingResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DevicePicker
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDevicePicker ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DevicePicker_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DevicePicker_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DevicePicker[] = L"Windows.Devices.Enumeration.DevicePicker";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DevicePickerAppearance
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDevicePickerAppearance ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DevicePickerAppearance_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DevicePickerAppearance_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DevicePickerAppearance[] = L"Windows.Devices.Enumeration.DevicePickerAppearance";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DevicePickerFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDevicePickerFilter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DevicePickerFilter_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DevicePickerFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DevicePickerFilter[] = L"Windows.Devices.Enumeration.DevicePickerFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceSelectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceSelectedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceSelectedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceSelectedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceSelectedEventArgs[] = L"Windows.Devices.Enumeration.DeviceSelectedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceThumbnail
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IRandomAccessStreamWithContentType ** Default Interface **
 *    Windows.Storage.Streams.IContentTypeProvider
 *    Windows.Storage.Streams.IRandomAccessStream
 *    Windows.Storage.Streams.IOutputStream
 *    Windows.Foundation.IClosable
 *    Windows.Storage.Streams.IInputStream
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceThumbnail_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceThumbnail_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceThumbnail[] = L"Windows.Devices.Enumeration.DeviceThumbnail";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceUnpairingResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceUnpairingResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceUnpairingResult_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceUnpairingResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceUnpairingResult[] = L"Windows.Devices.Enumeration.DeviceUnpairingResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceWatcher ** Default Interface **
 *    Windows.Devices.Enumeration.IDeviceWatcher2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceWatcher_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceWatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceWatcher[] = L"Windows.Devices.Enumeration.DeviceWatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceWatcherEvent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceWatcherEvent ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceWatcherEvent_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceWatcherEvent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceWatcherEvent[] = L"Windows.Devices.Enumeration.DeviceWatcherEvent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.DeviceWatcherTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IDeviceWatcherTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_DeviceWatcherTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_DeviceWatcherTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceWatcherTriggerDetails[] = L"Windows.Devices.Enumeration.DeviceWatcherTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.EnclosureLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.IEnclosureLocation ** Default Interface **
 *    Windows.Devices.Enumeration.IEnclosureLocation2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_EnclosureLocation_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_EnclosureLocation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_EnclosureLocation[] = L"Windows.Devices.Enumeration.EnclosureLocation";
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
#endif // __windows2Edevices2Eenumeration_p_h__

#endif // __windows2Edevices2Eenumeration_h__
