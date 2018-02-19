/* Header file automatically generated from windows.devices.bluetooth.idl */
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
#ifndef __windows2Edevices2Ebluetooth_h__
#define __windows2Edevices2Ebluetooth_h__
#ifndef __windows2Edevices2Ebluetooth_p_h__
#define __windows2Edevices2Ebluetooth_p_h__


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
#include "Windows.Devices.Bluetooth.GenericAttributeProfile.h"
#include "Windows.Devices.Bluetooth.Rfcomm.h"
#include "Windows.Devices.Enumeration.h"
#include "Windows.Devices.Radios.h"
#include "Windows.Networking.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothAdapter;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter ABI::Windows::Devices::Bluetooth::IBluetoothAdapter

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothAdapterStatics;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics ABI::Windows::Devices::Bluetooth::IBluetoothAdapterStatics

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothClassOfDevice;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice ABI::Windows::Devices::Bluetooth::IBluetoothClassOfDevice

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothClassOfDeviceStatics;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics ABI::Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothDevice;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice ABI::Windows::Devices::Bluetooth::IBluetoothDevice

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothDevice2;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2 ABI::Windows::Devices::Bluetooth::IBluetoothDevice2

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothDevice3;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 ABI::Windows::Devices::Bluetooth::IBluetoothDevice3

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothDevice4;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4 ABI::Windows::Devices::Bluetooth::IBluetoothDevice4

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothDeviceId;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId ABI::Windows::Devices::Bluetooth::IBluetoothDeviceId

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothDeviceIdStatics;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics ABI::Windows::Devices::Bluetooth::IBluetoothDeviceIdStatics

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothDeviceStatics;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics ABI::Windows::Devices::Bluetooth::IBluetoothDeviceStatics

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothDeviceStatics2;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 ABI::Windows::Devices::Bluetooth::IBluetoothDeviceStatics2

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothLEAppearance;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance ABI::Windows::Devices::Bluetooth::IBluetoothLEAppearance

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothLEAppearanceCategoriesStatics;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics ABI::Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothLEAppearanceStatics;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics ABI::Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothLEAppearanceSubcategoriesStatics;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics ABI::Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothLEDevice;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice ABI::Windows::Devices::Bluetooth::IBluetoothLEDevice

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothLEDevice2;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 ABI::Windows::Devices::Bluetooth::IBluetoothLEDevice2

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothLEDevice3;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 ABI::Windows::Devices::Bluetooth::IBluetoothLEDevice3

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothLEDevice4;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4 ABI::Windows::Devices::Bluetooth::IBluetoothLEDevice4

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothLEDeviceStatics;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics ABI::Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothLEDeviceStatics2;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 ABI::Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothSignalStrengthFilter;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter ABI::Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothUuidHelperStatics;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics ABI::Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                class BluetoothAdapter;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("10a10a88-90e0-511a-9a08-d75feb52a19f"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::BluetoothAdapter*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::BluetoothAdapter*, ABI::Windows::Devices::Bluetooth::IBluetoothAdapter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Bluetooth.BluetoothAdapter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::BluetoothAdapter*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::IBluetoothAdapter*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::IBluetoothAdapter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("46fce70c-6c07-5a3a-b775-26f99402553f"))
IAsyncOperation<ABI::Windows::Devices::Bluetooth::BluetoothAdapter*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::BluetoothAdapter*, ABI::Windows::Devices::Bluetooth::IBluetoothAdapter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Bluetooth.BluetoothAdapter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Bluetooth::BluetoothAdapter*> __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_t;
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Bluetooth::IBluetoothAdapter*>
//#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Bluetooth::IBluetoothAdapter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                class BluetoothDevice;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b2e8cdd1-66aa-5892-85a3-8f0b165e43fc"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::BluetoothDevice*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::BluetoothDevice*, ABI::Windows::Devices::Bluetooth::IBluetoothDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Bluetooth.BluetoothDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::BluetoothDevice*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::IBluetoothDevice*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::IBluetoothDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b58d8d19-44bd-5ac0-a0d6-1b50800f3181"))
IAsyncOperation<ABI::Windows::Devices::Bluetooth::BluetoothDevice*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::BluetoothDevice*, ABI::Windows::Devices::Bluetooth::IBluetoothDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Bluetooth.BluetoothDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Bluetooth::BluetoothDevice*> __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice_t;
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Bluetooth::IBluetoothDevice*>
//#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Bluetooth::IBluetoothDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                class BluetoothLEDevice;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9156b79f-c54a-5277-8f8b-d2cc43c7e004"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::BluetoothLEDevice*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::BluetoothLEDevice*, ABI::Windows::Devices::Bluetooth::IBluetoothLEDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Bluetooth.BluetoothLEDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::BluetoothLEDevice*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::IBluetoothLEDevice*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::IBluetoothLEDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("375f9d67-74a2-5f91-a11d-169093718d41"))
IAsyncOperation<ABI::Windows::Devices::Bluetooth::BluetoothLEDevice*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::BluetoothLEDevice*, ABI::Windows::Devices::Bluetooth::IBluetoothLEDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Bluetooth.BluetoothLEDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Bluetooth::BluetoothLEDevice*> __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_t;
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Bluetooth::IBluetoothLEDevice*>
//#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Bluetooth::IBluetoothLEDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("db56ce1c-5e9f-5138-9227-b1a66d60bc1b"))
ITypedEventHandler<ABI::Windows::Devices::Bluetooth::BluetoothDevice*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::BluetoothDevice*, ABI::Windows::Devices::Bluetooth::IBluetoothDevice*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Bluetooth.BluetoothDevice, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Bluetooth::BluetoothDevice*,IInspectable*> __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Bluetooth::IBluetoothDevice*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Bluetooth::IBluetoothDevice*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a90661e2-372e-5d1e-bbbb-b8a2ce0e7c4d"))
ITypedEventHandler<ABI::Windows::Devices::Bluetooth::BluetoothLEDevice*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::BluetoothLEDevice*, ABI::Windows::Devices::Bluetooth::IBluetoothLEDevice*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Bluetooth.BluetoothLEDevice, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Bluetooth::BluetoothLEDevice*,IInspectable*> __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Bluetooth::IBluetoothLEDevice*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Bluetooth::IBluetoothLEDevice*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Radios {
                class Radio;
            } /* Windows */
        } /* Devices */
    } /* Radios */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CRadios_CIRadio_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CRadios_CIRadio_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Radios {
                interface IRadio;
            } /* Windows */
        } /* Devices */
    } /* Radios */} /* ABI */
#define __x_ABI_CWindows_CDevices_CRadios_CIRadio ABI::Windows::Devices::Radios::IRadio

#endif // ____x_ABI_CWindows_CDevices_CRadios_CIRadio_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8a5c7e3a-80e2-585b-8630-7a8e777f0354"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Radios::Radio*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Radios::Radio*, ABI::Windows::Devices::Radios::IRadio*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Radios.Radio>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Radios::Radio*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Radios::IRadio*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Radios::IRadio*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("eac62c40-8dbc-5854-8ba0-b7b9940e7389"))
IAsyncOperation<ABI::Windows::Devices::Radios::Radio*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Radios::Radio*, ABI::Windows::Devices::Radios::IRadio*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Radios.Radio>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Radios::Radio*> __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio_t;
#define __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Radios::IRadio*>
//#define __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Radios::IRadio*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIIterator_1_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("afee38e0-f882-5f10-9655-1fc98cc8cce5"))
IIterator<ABI::Windows::Storage::Streams::IBuffer*> : IIterator_impl<ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Storage::Streams::IBuffer*> __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIIterable_1_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("902972bf-a984-5443-b1c5-2f04a99e1fca"))
IIterable<ABI::Windows::Storage::Streams::IBuffer*> : IIterable_impl<ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Storage::Streams::IBuffer*> __FIIterable_1_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fd944562-11d6-5eab-bd72-701993b68fac"))
IVectorView<ABI::Windows::Storage::Streams::IBuffer*> : IVectorView_impl<ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Storage::Streams::IBuffer*> __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Rfcomm {
                    class RfcommDeviceService;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Rfcomm */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Rfcomm {
                    interface IRfcommDeviceService;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Rfcomm */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_USE
#define DEF___FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("64ab0132-c64c-5a87-8113-613ef356924c"))
IIterator<ABI::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService*, ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Bluetooth.Rfcomm.RfcommDeviceService>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService*> __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_t;
#define __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService*>
//#define __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_USE
#define DEF___FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3378e9a6-f6e2-50ea-bfee-b8109631feca"))
IIterable<ABI::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService*, ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Bluetooth.Rfcomm.RfcommDeviceService>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService*> __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_t;
#define __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService*>
//#define __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_USE
#define DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("97df6b82-d15c-597e-ba69-492207a1c108"))
IVectorView<ABI::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService*, ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Bluetooth.Rfcomm.RfcommDeviceService>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService*> __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_t;
#define __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService*>
//#define __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Rfcomm {
                    class RfcommDeviceServicesResult;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Rfcomm */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Rfcomm {
                    interface IRfcommDeviceServicesResult;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Rfcomm */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("522c25d1-866b-5de4-bd8e-1feb5ae60d47"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult*, ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Bluetooth.Rfcomm.RfcommDeviceServicesResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b7f2f74d-bf9c-5721-bf6e-03f1b4409588"))
IAsyncOperation<ABI::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult*, ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Bluetooth.Rfcomm.RfcommDeviceServicesResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult*> __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_t;
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult*>
//#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace GenericAttributeProfile {
                    class GattDeviceService;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* GenericAttributeProfile */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace GenericAttributeProfile {
                    interface IGattDeviceService;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* GenericAttributeProfile */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_USE
#define DEF___FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8beb3a26-73ca-50f3-a1d3-418c60a9f3b2"))
IIterator<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService*, ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Bluetooth.GenericAttributeProfile.GattDeviceService>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService*> __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_t;
#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService*>
//#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_USE
#define DEF___FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4b192e23-4893-56b2-8eff-439c3ab7fd1f"))
IIterable<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService*, ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Bluetooth.GenericAttributeProfile.GattDeviceService>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService*> __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_t;
#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService*>
//#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_USE
#define DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7c8e7fdd-a1a1-528a-81d1-296769227a08"))
IVectorView<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService*, ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Bluetooth.GenericAttributeProfile.GattDeviceService>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService*> __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_t;
#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService*>
//#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace GenericAttributeProfile {
                    class GattDeviceServicesResult;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* GenericAttributeProfile */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace GenericAttributeProfile {
                    interface IGattDeviceServicesResult;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* GenericAttributeProfile */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("74ab0892-a631-5d6c-b1b4-bd2e1a741a9b"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult*, ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Bluetooth.GenericAttributeProfile.GattDeviceServicesResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e7c667f6-e874-500f-86ff-760ca6f07a58"))
IAsyncOperation<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult*, ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Bluetooth.GenericAttributeProfile.GattDeviceServicesResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult*> __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_t;
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult*>
//#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#ifndef DEF___FIReference_1_short_USE
#define DEF___FIReference_1_short_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6ec9e41b-6709-5647-9918-a1270110fc4e"))
IReference<short> : IReference_impl<short> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Int16>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<short> __FIReference_1_short_t;
#define __FIReference_1_short ABI::Windows::Foundation::__FIReference_1_short_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_short ABI::Windows::Foundation::IReference<INT16>
//#define __FIReference_1_short_t ABI::Windows::Foundation::IReference<INT16>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_short_USE */



namespace ABI {
    namespace Windows {
        namespace Foundation {
            struct TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CTimeSpan_USE
#define DEF___FIReference_1_Windows__CFoundation__CTimeSpan_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("604d0c4c-91de-5c2a-935f-362f13eaf800"))
IReference<struct ABI::Windows::Foundation::TimeSpan> : IReference_impl<struct ABI::Windows::Foundation::TimeSpan> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::TimeSpan> __FIReference_1_Windows__CFoundation__CTimeSpan_t;
#define __FIReference_1_Windows__CFoundation__CTimeSpan ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CTimeSpan_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CTimeSpan ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::TimeSpan>
//#define __FIReference_1_Windows__CFoundation__CTimeSpan_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::TimeSpan>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CTimeSpan_USE */




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













namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Rfcomm {
                    class RfcommServiceId;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Rfcomm */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Rfcomm {
                    interface IRfcommServiceId;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Rfcomm */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceAccessInformation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

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
        namespace Devices {
            namespace Bluetooth {
                
                typedef enum BluetoothAddressType : int BluetoothAddressType;
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                
                typedef enum BluetoothCacheMode : int BluetoothCacheMode;
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                
                typedef enum BluetoothConnectionStatus : int BluetoothConnectionStatus;
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                
                typedef enum BluetoothError : int BluetoothError;
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                
                typedef enum BluetoothMajorClass : int BluetoothMajorClass;
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                
                typedef enum BluetoothMinorClass : int BluetoothMinorClass;
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                
                typedef enum BluetoothServiceCapabilities : unsigned int BluetoothServiceCapabilities;
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */


























namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                class BluetoothClassOfDevice;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                class BluetoothDeviceId;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                class BluetoothLEAppearance;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                class BluetoothSignalStrengthFilter;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */











/*
 *
 * Struct Windows.Devices.Bluetooth.BluetoothAddressType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [v1_enum, contract] */
                enum BluetoothAddressType : int
                {
                    BluetoothAddressType_Public = 0,
                    BluetoothAddressType_Random = 1,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
                    BluetoothAddressType_Unspecified = 2,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
                };
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.Bluetooth.BluetoothCacheMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [v1_enum, contract] */
                enum BluetoothCacheMode : int
                {
                    BluetoothCacheMode_Cached = 0,
                    BluetoothCacheMode_Uncached = 1,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Bluetooth.BluetoothConnectionStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [v1_enum, contract] */
                enum BluetoothConnectionStatus : int
                {
                    BluetoothConnectionStatus_Disconnected = 0,
                    BluetoothConnectionStatus_Connected = 1,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Bluetooth.BluetoothError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [v1_enum, contract] */
                enum BluetoothError : int
                {
                    BluetoothError_Success = 0,
                    BluetoothError_RadioNotAvailable = 1,
                    BluetoothError_ResourceInUse = 2,
                    BluetoothError_DeviceNotConnected = 3,
                    BluetoothError_OtherError = 4,
                    BluetoothError_DisabledByPolicy = 5,
                    BluetoothError_NotSupported = 6,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
                    BluetoothError_DisabledByUser = 7,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    BluetoothError_ConsentRequired = 8,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
                    BluetoothError_TransportNotSupported = 9,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
                };
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Bluetooth.BluetoothMajorClass
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [v1_enum, contract] */
                enum BluetoothMajorClass : int
                {
                    BluetoothMajorClass_Miscellaneous = 0,
                    BluetoothMajorClass_Computer = 1,
                    BluetoothMajorClass_Phone = 2,
                    BluetoothMajorClass_NetworkAccessPoint = 3,
                    BluetoothMajorClass_AudioVideo = 4,
                    BluetoothMajorClass_Peripheral = 5,
                    BluetoothMajorClass_Imaging = 6,
                    BluetoothMajorClass_Wearable = 7,
                    BluetoothMajorClass_Toy = 8,
                    BluetoothMajorClass_Health = 9,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Bluetooth.BluetoothMinorClass
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [v1_enum, contract] */
                enum BluetoothMinorClass : int
                {
                    BluetoothMinorClass_Uncategorized = 0,
                    BluetoothMinorClass_ComputerDesktop = 1,
                    BluetoothMinorClass_ComputerServer = 2,
                    BluetoothMinorClass_ComputerLaptop = 3,
                    BluetoothMinorClass_ComputerHandheld = 4,
                    BluetoothMinorClass_ComputerPalmSize = 5,
                    BluetoothMinorClass_ComputerWearable = 6,
                    BluetoothMinorClass_ComputerTablet = 7,
                    BluetoothMinorClass_PhoneCellular = 1,
                    BluetoothMinorClass_PhoneCordless = 2,
                    BluetoothMinorClass_PhoneSmartPhone = 3,
                    BluetoothMinorClass_PhoneWired = 4,
                    BluetoothMinorClass_PhoneIsdn = 5,
                    BluetoothMinorClass_NetworkFullyAvailable = 0,
                    BluetoothMinorClass_NetworkUsed01To17Percent = 8,
                    BluetoothMinorClass_NetworkUsed17To33Percent = 16,
                    BluetoothMinorClass_NetworkUsed33To50Percent = 24,
                    BluetoothMinorClass_NetworkUsed50To67Percent = 32,
                    BluetoothMinorClass_NetworkUsed67To83Percent = 40,
                    BluetoothMinorClass_NetworkUsed83To99Percent = 48,
                    BluetoothMinorClass_NetworkNoServiceAvailable = 56,
                    BluetoothMinorClass_AudioVideoWearableHeadset = 1,
                    BluetoothMinorClass_AudioVideoHandsFree = 2,
                    BluetoothMinorClass_AudioVideoMicrophone = 4,
                    BluetoothMinorClass_AudioVideoLoudspeaker = 5,
                    BluetoothMinorClass_AudioVideoHeadphones = 6,
                    BluetoothMinorClass_AudioVideoPortableAudio = 7,
                    BluetoothMinorClass_AudioVideoCarAudio = 8,
                    BluetoothMinorClass_AudioVideoSetTopBox = 9,
                    BluetoothMinorClass_AudioVideoHifiAudioDevice = 10,
                    BluetoothMinorClass_AudioVideoVcr = 11,
                    BluetoothMinorClass_AudioVideoVideoCamera = 12,
                    BluetoothMinorClass_AudioVideoCamcorder = 13,
                    BluetoothMinorClass_AudioVideoVideoMonitor = 14,
                    BluetoothMinorClass_AudioVideoVideoDisplayAndLoudspeaker = 15,
                    BluetoothMinorClass_AudioVideoVideoConferencing = 16,
                    BluetoothMinorClass_AudioVideoGamingOrToy = 18,
                    BluetoothMinorClass_PeripheralJoystick = 1,
                    BluetoothMinorClass_PeripheralGamepad = 2,
                    BluetoothMinorClass_PeripheralRemoteControl = 3,
                    BluetoothMinorClass_PeripheralSensing = 4,
                    BluetoothMinorClass_PeripheralDigitizerTablet = 5,
                    BluetoothMinorClass_PeripheralCardReader = 6,
                    BluetoothMinorClass_PeripheralDigitalPen = 7,
                    BluetoothMinorClass_PeripheralHandheldScanner = 8,
                    BluetoothMinorClass_PeripheralHandheldGesture = 9,
                    BluetoothMinorClass_WearableWristwatch = 1,
                    BluetoothMinorClass_WearablePager = 2,
                    BluetoothMinorClass_WearableJacket = 3,
                    BluetoothMinorClass_WearableHelmet = 4,
                    BluetoothMinorClass_WearableGlasses = 5,
                    BluetoothMinorClass_ToyRobot = 1,
                    BluetoothMinorClass_ToyVehicle = 2,
                    BluetoothMinorClass_ToyDoll = 3,
                    BluetoothMinorClass_ToyController = 4,
                    BluetoothMinorClass_ToyGame = 5,
                    BluetoothMinorClass_HealthBloodPressureMonitor = 1,
                    BluetoothMinorClass_HealthThermometer = 2,
                    BluetoothMinorClass_HealthWeighingScale = 3,
                    BluetoothMinorClass_HealthGlucoseMeter = 4,
                    BluetoothMinorClass_HealthPulseOximeter = 5,
                    BluetoothMinorClass_HealthHeartRateMonitor = 6,
                    BluetoothMinorClass_HealthHealthDataDisplay = 7,
                    BluetoothMinorClass_HealthStepCounter = 8,
                    BluetoothMinorClass_HealthBodyCompositionAnalyzer = 9,
                    BluetoothMinorClass_HealthPeakFlowMonitor = 10,
                    BluetoothMinorClass_HealthMedicationMonitor = 11,
                    BluetoothMinorClass_HealthKneeProsthesis = 12,
                    BluetoothMinorClass_HealthAnkleProsthesis = 13,
                    BluetoothMinorClass_HealthGenericHealthManager = 14,
                    BluetoothMinorClass_HealthPersonalMobilityDevice = 15,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Bluetooth.BluetoothServiceCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [v1_enum, flags, contract] */
                enum BluetoothServiceCapabilities : unsigned int
                {
                    BluetoothServiceCapabilities_None = 0,
                    BluetoothServiceCapabilities_LimitedDiscoverableMode = 0x1,
                    BluetoothServiceCapabilities_PositioningService = 0x8,
                    BluetoothServiceCapabilities_NetworkingService = 0x10,
                    BluetoothServiceCapabilities_RenderingService = 0x20,
                    BluetoothServiceCapabilities_CapturingService = 0x40,
                    BluetoothServiceCapabilities_ObjectTransferService = 0x80,
                    BluetoothServiceCapabilities_AudioService = 0x100,
                    BluetoothServiceCapabilities_TelephoneService = 0x200,
                    BluetoothServiceCapabilities_InformationService = 0x400,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(BluetoothServiceCapabilities)
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothAdapter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothAdapter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothAdapter[] = L"Windows.Devices.Bluetooth.IBluetoothAdapter";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("7974F04C-5F7A-4A34-9225-A855F84B1A8B"), exclusiveto, contract] */
                MIDL_INTERFACE("7974F04C-5F7A-4A34-9225-A855F84B1A8B")
                IBluetoothAdapter : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BluetoothAddress(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsClassicSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsLowEnergySupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPeripheralRoleSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCentralRoleSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAdvertisementOffloadSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetRadioAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothAdapter=_uuidof(IBluetoothAdapter);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothAdapterStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothAdapter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothAdapterStatics[] = L"Windows.Devices.Bluetooth.IBluetoothAdapterStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("8B02FB6A-AC4C-4741-8661-8EAB7D17EA9F"), exclusiveto, contract] */
                MIDL_INTERFACE("8B02FB6A-AC4C-4741-8661-8EAB7D17EA9F")
                IBluetoothAdapterStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDefaultAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothAdapterStatics=_uuidof(IBluetoothAdapterStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothClassOfDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothClassOfDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothClassOfDevice[] = L"Windows.Devices.Bluetooth.IBluetoothClassOfDevice";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("D640227E-D7D7-4661-9454-65039CA17A2B"), exclusiveto, contract] */
                MIDL_INTERFACE("D640227E-D7D7-4661-9454-65039CA17A2B")
                IBluetoothClassOfDevice : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RawValue(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MajorClass(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::BluetoothMajorClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinorClass(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::BluetoothMinorClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceCapabilities(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::BluetoothServiceCapabilities * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothClassOfDevice=_uuidof(IBluetoothClassOfDevice);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothClassOfDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothClassOfDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothClassOfDeviceStatics[] = L"Windows.Devices.Bluetooth.IBluetoothClassOfDeviceStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("E46135BD-0FA2-416C-91B4-C1E48CA061C1"), exclusiveto, contract] */
                MIDL_INTERFACE("E46135BD-0FA2-416C-91B4-C1E48CA061C1")
                IBluetoothClassOfDeviceStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromRawValue(
                        /* [in] */UINT32 rawValue,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::IBluetoothClassOfDevice * * classOfDevice
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromParts(
                        /* [in] */ABI::Windows::Devices::Bluetooth::BluetoothMajorClass majorClass,
                        /* [in] */ABI::Windows::Devices::Bluetooth::BluetoothMinorClass minorClass,
                        /* [in] */ABI::Windows::Devices::Bluetooth::BluetoothServiceCapabilities serviceCapabilities,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::IBluetoothClassOfDevice * * classOfDevice
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothClassOfDeviceStatics=_uuidof(IBluetoothClassOfDeviceStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDevice[] = L"Windows.Devices.Bluetooth.IBluetoothDevice";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("2335B156-90D2-4A04-AEF5-0E20B9E6B707"), exclusiveto, contract] */
                MIDL_INTERFACE("2335B156-90D2-4A04-AEF5-0E20B9E6B707")
                IBluetoothDevice : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HostName(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClassOfDevice(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::IBluetoothClassOfDevice * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SdpRecords(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("Use GetRfcommServicesAsync instead of RfcommServices.  For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_RfcommServices(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConnectionStatus(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::BluetoothConnectionStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BluetoothAddress(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_NameChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_NameChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SdpRecordsChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SdpRecordsChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ConnectionStatusChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ConnectionStatusChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothDevice=_uuidof(IBluetoothDevice);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothDevice2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Bluetooth.IBluetoothDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDevice2[] = L"Windows.Devices.Bluetooth.IBluetoothDevice2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("0133F954-B156-4DD0-B1F5-C11BC31A5163"), exclusiveto, contract] */
                MIDL_INTERFACE("0133F954-B156-4DD0-B1F5-C11BC31A5163")
                IBluetoothDevice2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceInformation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothDevice2=_uuidof(IBluetoothDevice2);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothDevice3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Bluetooth.IBluetoothDevice2
 *     Windows.Devices.Bluetooth.IBluetoothDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDevice3[] = L"Windows.Devices.Bluetooth.IBluetoothDevice3";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("57FFF78B-651A-4454-B90F-EB21EF0B0D71"), exclusiveto, contract] */
                MIDL_INTERFACE("57FFF78B-651A-4454-B90F-EB21EF0B0D71")
                IBluetoothDevice3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceAccessInformation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceAccessInformation * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestAccessAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetRfcommServicesAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetRfcommServicesWithCacheModeAsync(
                        /* [in] */ABI::Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetRfcommServicesForIdAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId * serviceId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetRfcommServicesForIdWithCacheModeAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId * serviceId,
                        /* [in] */ABI::Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothDevice3=_uuidof(IBluetoothDevice3);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothDevice4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDevice4[] = L"Windows.Devices.Bluetooth.IBluetoothDevice4";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("817C34AD-0E9C-42B2-A8DC-3E8094940D12"), exclusiveto, contract] */
                MIDL_INTERFACE("817C34AD-0E9C-42B2-A8DC-3E8094940D12")
                IBluetoothDevice4 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BluetoothDeviceId(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::IBluetoothDeviceId * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothDevice4=_uuidof(IBluetoothDevice4);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothDeviceId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothDeviceId
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDeviceId[] = L"Windows.Devices.Bluetooth.IBluetoothDeviceId";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("C17949AF-57C1-4642-BCCE-E6C06B20AE76"), exclusiveto, contract] */
                MIDL_INTERFACE("C17949AF-57C1-4642-BCCE-E6C06B20AE76")
                IBluetoothDeviceId : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsClassicDevice(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsLowEnergyDevice(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothDeviceId=_uuidof(IBluetoothDeviceId);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothDeviceIdStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothDeviceId
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDeviceIdStatics[] = L"Windows.Devices.Bluetooth.IBluetoothDeviceIdStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("A7884E67-3EFB-4F31-BBC2-810E09977404"), exclusiveto, contract] */
                MIDL_INTERFACE("A7884E67-3EFB-4F31-BBC2-810E09977404")
                IBluetoothDeviceIdStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromId(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::IBluetoothDeviceId * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothDeviceIdStatics=_uuidof(IBluetoothDeviceIdStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDeviceStatics[] = L"Windows.Devices.Bluetooth.IBluetoothDeviceStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("0991DF51-57DB-4725-BBD7-84F64327EC2C"), exclusiveto, contract] */
                MIDL_INTERFACE("0991DF51-57DB-4725-BBD7-84F64327EC2C")
                IBluetoothDeviceStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromHostNameAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * hostName,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromBluetoothAddressAsync(
                        /* [in] */UINT64 address,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothDeviceStatics=_uuidof(IBluetoothDeviceStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothDeviceStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Bluetooth.IBluetoothDeviceStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDeviceStatics2[] = L"Windows.Devices.Bluetooth.IBluetoothDeviceStatics2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("C29E8E2F-4E14-4477-AA1B-B8B47E5B7ECE"), exclusiveto, contract] */
                MIDL_INTERFACE("C29E8E2F-4E14-4477-AA1B-B8B47E5B7ECE")
                IBluetoothDeviceStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorFromPairingState(
                        /* [in] */boolean pairingState,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorFromConnectionStatus(
                        /* [in] */ABI::Windows::Devices::Bluetooth::BluetoothConnectionStatus connectionStatus,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorFromDeviceName(
                        /* [in] */__RPC__in HSTRING deviceName,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorFromBluetoothAddress(
                        /* [in] */UINT64 bluetoothAddress,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorFromClassOfDevice(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Bluetooth::IBluetoothClassOfDevice * classOfDevice,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothDeviceStatics2=_uuidof(IBluetoothDeviceStatics2);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEAppearance
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEAppearance
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEAppearance[] = L"Windows.Devices.Bluetooth.IBluetoothLEAppearance";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("5D2079F2-66A8-4258-985E-02B4D9509F18"), exclusiveto, contract] */
                MIDL_INTERFACE("5D2079F2-66A8-4258-985E-02B4D9509F18")
                IBluetoothLEAppearance : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RawValue(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Category(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SubCategory(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothLEAppearance=_uuidof(IBluetoothLEAppearance);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEAppearanceCategoriesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEAppearanceCategories
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics[] = L"Windows.Devices.Bluetooth.IBluetoothLEAppearanceCategoriesStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("6D4D54FE-046A-4185-AAB6-824CF0610861"), exclusiveto, contract] */
                MIDL_INTERFACE("6D4D54FE-046A-4185-AAB6-824CF0610861")
                IBluetoothLEAppearanceCategoriesStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uncategorized(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Phone(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Computer(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Watch(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Clock(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Display(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteControl(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EyeGlasses(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Tag(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Keyring(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediaPlayer(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BarcodeScanner(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Thermometer(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeartRate(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BloodPressure(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HumanInterfaceDevice(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GlucoseMeter(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RunningWalking(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cycling(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PulseOximeter(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WeightScale(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutdoorSportActivity(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothLEAppearanceCategoriesStatics=_uuidof(IBluetoothLEAppearanceCategoriesStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEAppearanceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEAppearance
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEAppearanceStatics[] = L"Windows.Devices.Bluetooth.IBluetoothLEAppearanceStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("A193C0C7-4504-4F4A-9BA5-CD1054E5E065"), exclusiveto, contract] */
                MIDL_INTERFACE("A193C0C7-4504-4F4A-9BA5-CD1054E5E065")
                IBluetoothLEAppearanceStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromRawValue(
                        /* [in] */UINT16 rawValue,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::IBluetoothLEAppearance * * appearance
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromParts(
                        /* [in] */UINT16 appearanceCategory,
                        /* [in] */UINT16 appearanceSubCategory,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::IBluetoothLEAppearance * * appearance
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothLEAppearanceStatics=_uuidof(IBluetoothLEAppearanceStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEAppearanceSubcategoriesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEAppearanceSubcategories
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics[] = L"Windows.Devices.Bluetooth.IBluetoothLEAppearanceSubcategoriesStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("E57BA606-2144-415A-8312-71CCF291F8D1"), exclusiveto, contract] */
                MIDL_INTERFACE("E57BA606-2144-415A-8312-71CCF291F8D1")
                IBluetoothLEAppearanceSubcategoriesStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Generic(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SportsWatch(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ThermometerEar(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeartRateBelt(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BloodPressureArm(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BloodPressureWrist(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Keyboard(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mouse(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Joystick(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Gamepad(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DigitizerTablet(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CardReader(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DigitalPen(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BarcodeScanner(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RunningWalkingInShoe(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RunningWalkingOnShoe(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RunningWalkingOnHip(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CyclingComputer(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CyclingSpeedSensor(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CyclingCadenceSensor(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CyclingPowerSensor(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CyclingSpeedCadenceSensor(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OximeterFingertip(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OximeterWristWorn(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocationDisplay(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocationNavigationDisplay(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocationPod(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocationNavigationPod(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothLEAppearanceSubcategoriesStatics=_uuidof(IBluetoothLEAppearanceSubcategoriesStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDevice[] = L"Windows.Devices.Bluetooth.IBluetoothLEDevice";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("B5EE2F7B-4AD8-4642-AC48-80A0B500E887"), exclusiveto, contract] */
                MIDL_INTERFACE("B5EE2F7B-4AD8-4642-AC48-80A0B500E887")
                IBluetoothLEDevice : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("Use GetGattServicesAsync instead of GattServices.  For more information, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_GattServices(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConnectionStatus(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::BluetoothConnectionStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BluetoothAddress(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("Use GetGattServicesForUuidAsync instead of GetGattService.  For more information, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE GetGattService(
                        /* [in] */GUID serviceUuid,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService * * service
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_NameChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_NameChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_GattServicesChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_GattServicesChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ConnectionStatusChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ConnectionStatusChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothLEDevice=_uuidof(IBluetoothLEDevice);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEDevice2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Bluetooth.IBluetoothLEDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDevice2[] = L"Windows.Devices.Bluetooth.IBluetoothLEDevice2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("26F062B3-7AEE-4D31-BABA-B1B9775F5916"), exclusiveto, contract] */
                MIDL_INTERFACE("26F062B3-7AEE-4D31-BABA-B1B9775F5916")
                IBluetoothLEDevice2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceInformation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Appearance(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::IBluetoothLEAppearance * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BluetoothAddressType(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::BluetoothAddressType * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothLEDevice2=_uuidof(IBluetoothLEDevice2);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEDevice3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDevice3[] = L"Windows.Devices.Bluetooth.IBluetoothLEDevice3";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("AEE9E493-44AC-40DC-AF33-B2C13C01CA46"), exclusiveto, contract] */
                MIDL_INTERFACE("AEE9E493-44AC-40DC-AF33-B2C13C01CA46")
                IBluetoothLEDevice3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceAccessInformation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceAccessInformation * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestAccessAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetGattServicesAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetGattServicesWithCacheModeAsync(
                        /* [in] */ABI::Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetGattServicesForUuidAsync(
                        /* [in] */GUID serviceUuid,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetGattServicesForUuidWithCacheModeAsync(
                        /* [in] */GUID serviceUuid,
                        /* [in] */ABI::Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothLEDevice3=_uuidof(IBluetoothLEDevice3);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEDevice4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDevice4[] = L"Windows.Devices.Bluetooth.IBluetoothLEDevice4";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("2B605031-2248-4B2F-ACF0-7CEE36FC5870"), exclusiveto, contract] */
                MIDL_INTERFACE("2B605031-2248-4B2F-ACF0-7CEE36FC5870")
                IBluetoothLEDevice4 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BluetoothDeviceId(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::IBluetoothDeviceId * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothLEDevice4=_uuidof(IBluetoothLEDevice4);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics[] = L"Windows.Devices.Bluetooth.IBluetoothLEDeviceStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("C8CF1A19-F0B6-4BF0-8689-41303DE2D9F4"), exclusiveto, contract] */
                MIDL_INTERFACE("C8CF1A19-F0B6-4BF0-8689-41303DE2D9F4")
                IBluetoothLEDeviceStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FromBluetoothAddressAsync(
                        /* [in] */UINT64 bluetoothAddress,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothLEDeviceStatics=_uuidof(IBluetoothLEDeviceStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEDeviceStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics2[] = L"Windows.Devices.Bluetooth.IBluetoothLEDeviceStatics2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("5F12C06B-3BAC-43E8-AD16-563271BD41C2"), exclusiveto, contract] */
                MIDL_INTERFACE("5F12C06B-3BAC-43E8-AD16-563271BD41C2")
                IBluetoothLEDeviceStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorFromPairingState(
                        /* [in] */boolean pairingState,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorFromConnectionStatus(
                        /* [in] */ABI::Windows::Devices::Bluetooth::BluetoothConnectionStatus connectionStatus,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorFromDeviceName(
                        /* [in] */__RPC__in HSTRING deviceName,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorFromBluetoothAddress(
                        /* [in] */UINT64 bluetoothAddress,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorFromBluetoothAddressWithBluetoothAddressType(
                        /* [in] */UINT64 bluetoothAddress,
                        /* [in] */ABI::Windows::Devices::Bluetooth::BluetoothAddressType bluetoothAddressType,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorFromAppearance(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Bluetooth::IBluetoothLEAppearance * appearance,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FromBluetoothAddressWithBluetoothAddressTypeAsync(
                        /* [in] */UINT64 bluetoothAddress,
                        /* [in] */ABI::Windows::Devices::Bluetooth::BluetoothAddressType bluetoothAddressType,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothLEDeviceStatics2=_uuidof(IBluetoothLEDeviceStatics2);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothSignalStrengthFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothSignalStrengthFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothSignalStrengthFilter[] = L"Windows.Devices.Bluetooth.IBluetoothSignalStrengthFilter";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("DF7B7391-6BB5-4CFE-90B1-5D7324EDCF7F"), exclusiveto, contract] */
                MIDL_INTERFACE("DF7B7391-6BB5-4CFE-90B1-5D7324EDCF7F")
                IBluetoothSignalStrengthFilter : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InRangeThresholdInDBm(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_short * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InRangeThresholdInDBm(
                        /* [in] */__RPC__in_opt __FIReference_1_short * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutOfRangeThresholdInDBm(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_short * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OutOfRangeThresholdInDBm(
                        /* [in] */__RPC__in_opt __FIReference_1_short * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutOfRangeTimeout(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OutOfRangeTimeout(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SamplingInterval(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SamplingInterval(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothSignalStrengthFilter=_uuidof(IBluetoothSignalStrengthFilter);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothUuidHelperStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothUuidHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothUuidHelperStatics[] = L"Windows.Devices.Bluetooth.IBluetoothUuidHelperStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                /* [object, uuid("17DF0CD8-CF74-4B21-AFE6-F57A11BCDEA0"), exclusiveto, contract] */
                MIDL_INTERFACE("17DF0CD8-CF74-4B21-AFE6-F57A11BCDEA0")
                IBluetoothUuidHelperStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromShortId(
                        /* [in] */UINT32 shortId,
                        /* [retval, out] */__RPC__out GUID * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryGetShortId(
                        /* [in] */GUID uuid,
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBluetoothUuidHelperStatics=_uuidof(IBluetoothUuidHelperStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothAdapter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothAdapterStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.IBluetoothAdapter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothAdapter_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothAdapter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothAdapter[] = L"Windows.Devices.Bluetooth.BluetoothAdapter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothClassOfDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothClassOfDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.IBluetoothClassOfDevice ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothClassOfDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothClassOfDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothClassOfDevice[] = L"Windows.Devices.Bluetooth.BluetoothClassOfDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothDeviceStatics2 interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.IBluetoothDevice ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Devices.Bluetooth.IBluetoothDevice2
 *    Windows.Devices.Bluetooth.IBluetoothDevice3
 *    Windows.Devices.Bluetooth.IBluetoothDevice4
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothDevice[] = L"Windows.Devices.Bluetooth.BluetoothDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothDeviceId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothDeviceIdStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.IBluetoothDeviceId ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothDeviceId_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothDeviceId_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothDeviceId[] = L"Windows.Devices.Bluetooth.BluetoothDeviceId";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothLEAppearance
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothLEAppearanceStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.IBluetoothLEAppearance ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothLEAppearance_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothLEAppearance_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothLEAppearance[] = L"Windows.Devices.Bluetooth.BluetoothLEAppearance";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothLEAppearanceCategories
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothLEAppearanceCategoriesStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothLEAppearanceCategories_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothLEAppearanceCategories_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothLEAppearanceCategories[] = L"Windows.Devices.Bluetooth.BluetoothLEAppearanceCategories";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothLEAppearanceSubcategories
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothLEAppearanceSubcategoriesStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothLEAppearanceSubcategories_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothLEAppearanceSubcategories_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothLEAppearanceSubcategories[] = L"Windows.Devices.Bluetooth.BluetoothLEAppearanceSubcategories";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothLEDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothLEDeviceStatics2 interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothLEDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.IBluetoothLEDevice ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Devices.Bluetooth.IBluetoothLEDevice2
 *    Windows.Devices.Bluetooth.IBluetoothLEDevice3
 *    Windows.Devices.Bluetooth.IBluetoothLEDevice4
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothLEDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothLEDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothLEDevice[] = L"Windows.Devices.Bluetooth.BluetoothLEDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothSignalStrengthFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.IBluetoothSignalStrengthFilter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothSignalStrengthFilter_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothSignalStrengthFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothSignalStrengthFilter[] = L"Windows.Devices.Bluetooth.BluetoothSignalStrengthFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothUuidHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothUuidHelperStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothUuidHelper_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothUuidHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothUuidHelper[] = L"Windows.Devices.Bluetooth.BluetoothUuidHelper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapterVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapterVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDeviceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDeviceVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDeviceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDeviceVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CDevices_CRadios_CIRadio_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CRadios_CIRadio_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CRadios_CIRadio __x_ABI_CWindows_CDevices_CRadios_CIRadio;

#endif // ____x_ABI_CWindows_CDevices_CRadios_CIRadio_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadioVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadioVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadioVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadioVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CRadios_CIRadio * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadioVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadioVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CStorage__CStreams__CIBuffer __FIIterator_1_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIIterator_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIIterator_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CStorage__CStreams__CIBuffer __FIIterable_1_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStreams__CIBuffer;

typedef  struct __FIIterable_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStreams__CIBuffer **first);

    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIIterable_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIVectorView_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CStreams_CIBuffer * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;

typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl;

interface __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;

typedef  struct __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl;

interface __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;

typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl;

interface __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResultVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;

typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl;

interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;

typedef  struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl;

interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;

typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl;

interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResultVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#if !defined(____FIReference_1_short_INTERFACE_DEFINED__)
#define ____FIReference_1_short_INTERFACE_DEFINED__

typedef interface __FIReference_1_short __FIReference_1_short;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_short;

typedef struct __FIReference_1_shortVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_short * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_short * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_short * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_short * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_short * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_short * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_short * This, /* [retval][out] */ __RPC__out short *value);
    END_INTERFACE
} __FIReference_1_shortVtbl;

interface __FIReference_1_short
{
    CONST_VTBL struct __FIReference_1_shortVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_short_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_short_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_short_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_short_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_short_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_short_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_short_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_short_INTERFACE_DEFINED__


struct __x_ABI_CWindows_CFoundation_CTimeSpan;

#if !defined(____FIReference_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CTimeSpan __FIReference_1_Windows__CFoundation__CTimeSpan;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CTimeSpan;

typedef struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CTimeSpan *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CTimeSpanVtbl;

interface __FIReference_1_Windows__CFoundation__CTimeSpan
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CTimeSpan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CTimeSpan_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CTimeSpan_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__


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











#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus;

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__









#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




#ifndef ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;

#endif // ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__









typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothAddressType __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothAddressType;


typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode;


typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothConnectionStatus __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothConnectionStatus;


typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError;


typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMajorClass __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMajorClass;


typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMinorClass __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMinorClass;


typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothServiceCapabilities __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothServiceCapabilities;











































/*
 *
 * Struct Windows.Devices.Bluetooth.BluetoothAddressType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothAddressType
{
    BluetoothAddressType_Public = 0,
    BluetoothAddressType_Random = 1,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    BluetoothAddressType_Unspecified = 2,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.Bluetooth.BluetoothCacheMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode
{
    BluetoothCacheMode_Cached = 0,
    BluetoothCacheMode_Uncached = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Bluetooth.BluetoothConnectionStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothConnectionStatus
{
    BluetoothConnectionStatus_Disconnected = 0,
    BluetoothConnectionStatus_Connected = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Bluetooth.BluetoothError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError
{
    BluetoothError_Success = 0,
    BluetoothError_RadioNotAvailable = 1,
    BluetoothError_ResourceInUse = 2,
    BluetoothError_DeviceNotConnected = 3,
    BluetoothError_OtherError = 4,
    BluetoothError_DisabledByPolicy = 5,
    BluetoothError_NotSupported = 6,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
    BluetoothError_DisabledByUser = 7,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    BluetoothError_ConsentRequired = 8,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    BluetoothError_TransportNotSupported = 9,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Bluetooth.BluetoothMajorClass
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMajorClass
{
    BluetoothMajorClass_Miscellaneous = 0,
    BluetoothMajorClass_Computer = 1,
    BluetoothMajorClass_Phone = 2,
    BluetoothMajorClass_NetworkAccessPoint = 3,
    BluetoothMajorClass_AudioVideo = 4,
    BluetoothMajorClass_Peripheral = 5,
    BluetoothMajorClass_Imaging = 6,
    BluetoothMajorClass_Wearable = 7,
    BluetoothMajorClass_Toy = 8,
    BluetoothMajorClass_Health = 9,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Bluetooth.BluetoothMinorClass
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMinorClass
{
    BluetoothMinorClass_Uncategorized = 0,
    BluetoothMinorClass_ComputerDesktop = 1,
    BluetoothMinorClass_ComputerServer = 2,
    BluetoothMinorClass_ComputerLaptop = 3,
    BluetoothMinorClass_ComputerHandheld = 4,
    BluetoothMinorClass_ComputerPalmSize = 5,
    BluetoothMinorClass_ComputerWearable = 6,
    BluetoothMinorClass_ComputerTablet = 7,
    BluetoothMinorClass_PhoneCellular = 1,
    BluetoothMinorClass_PhoneCordless = 2,
    BluetoothMinorClass_PhoneSmartPhone = 3,
    BluetoothMinorClass_PhoneWired = 4,
    BluetoothMinorClass_PhoneIsdn = 5,
    BluetoothMinorClass_NetworkFullyAvailable = 0,
    BluetoothMinorClass_NetworkUsed01To17Percent = 8,
    BluetoothMinorClass_NetworkUsed17To33Percent = 16,
    BluetoothMinorClass_NetworkUsed33To50Percent = 24,
    BluetoothMinorClass_NetworkUsed50To67Percent = 32,
    BluetoothMinorClass_NetworkUsed67To83Percent = 40,
    BluetoothMinorClass_NetworkUsed83To99Percent = 48,
    BluetoothMinorClass_NetworkNoServiceAvailable = 56,
    BluetoothMinorClass_AudioVideoWearableHeadset = 1,
    BluetoothMinorClass_AudioVideoHandsFree = 2,
    BluetoothMinorClass_AudioVideoMicrophone = 4,
    BluetoothMinorClass_AudioVideoLoudspeaker = 5,
    BluetoothMinorClass_AudioVideoHeadphones = 6,
    BluetoothMinorClass_AudioVideoPortableAudio = 7,
    BluetoothMinorClass_AudioVideoCarAudio = 8,
    BluetoothMinorClass_AudioVideoSetTopBox = 9,
    BluetoothMinorClass_AudioVideoHifiAudioDevice = 10,
    BluetoothMinorClass_AudioVideoVcr = 11,
    BluetoothMinorClass_AudioVideoVideoCamera = 12,
    BluetoothMinorClass_AudioVideoCamcorder = 13,
    BluetoothMinorClass_AudioVideoVideoMonitor = 14,
    BluetoothMinorClass_AudioVideoVideoDisplayAndLoudspeaker = 15,
    BluetoothMinorClass_AudioVideoVideoConferencing = 16,
    BluetoothMinorClass_AudioVideoGamingOrToy = 18,
    BluetoothMinorClass_PeripheralJoystick = 1,
    BluetoothMinorClass_PeripheralGamepad = 2,
    BluetoothMinorClass_PeripheralRemoteControl = 3,
    BluetoothMinorClass_PeripheralSensing = 4,
    BluetoothMinorClass_PeripheralDigitizerTablet = 5,
    BluetoothMinorClass_PeripheralCardReader = 6,
    BluetoothMinorClass_PeripheralDigitalPen = 7,
    BluetoothMinorClass_PeripheralHandheldScanner = 8,
    BluetoothMinorClass_PeripheralHandheldGesture = 9,
    BluetoothMinorClass_WearableWristwatch = 1,
    BluetoothMinorClass_WearablePager = 2,
    BluetoothMinorClass_WearableJacket = 3,
    BluetoothMinorClass_WearableHelmet = 4,
    BluetoothMinorClass_WearableGlasses = 5,
    BluetoothMinorClass_ToyRobot = 1,
    BluetoothMinorClass_ToyVehicle = 2,
    BluetoothMinorClass_ToyDoll = 3,
    BluetoothMinorClass_ToyController = 4,
    BluetoothMinorClass_ToyGame = 5,
    BluetoothMinorClass_HealthBloodPressureMonitor = 1,
    BluetoothMinorClass_HealthThermometer = 2,
    BluetoothMinorClass_HealthWeighingScale = 3,
    BluetoothMinorClass_HealthGlucoseMeter = 4,
    BluetoothMinorClass_HealthPulseOximeter = 5,
    BluetoothMinorClass_HealthHeartRateMonitor = 6,
    BluetoothMinorClass_HealthHealthDataDisplay = 7,
    BluetoothMinorClass_HealthStepCounter = 8,
    BluetoothMinorClass_HealthBodyCompositionAnalyzer = 9,
    BluetoothMinorClass_HealthPeakFlowMonitor = 10,
    BluetoothMinorClass_HealthMedicationMonitor = 11,
    BluetoothMinorClass_HealthKneeProsthesis = 12,
    BluetoothMinorClass_HealthAnkleProsthesis = 13,
    BluetoothMinorClass_HealthGenericHealthManager = 14,
    BluetoothMinorClass_HealthPersonalMobilityDevice = 15,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Bluetooth.BluetoothServiceCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothServiceCapabilities
{
    BluetoothServiceCapabilities_None = 0,
    BluetoothServiceCapabilities_LimitedDiscoverableMode = 0x1,
    BluetoothServiceCapabilities_PositioningService = 0x8,
    BluetoothServiceCapabilities_NetworkingService = 0x10,
    BluetoothServiceCapabilities_RenderingService = 0x20,
    BluetoothServiceCapabilities_CapturingService = 0x40,
    BluetoothServiceCapabilities_ObjectTransferService = 0x80,
    BluetoothServiceCapabilities_AudioService = 0x100,
    BluetoothServiceCapabilities_TelephoneService = 0x200,
    BluetoothServiceCapabilities_InformationService = 0x400,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothAdapter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothAdapter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothAdapter[] = L"Windows.Devices.Bluetooth.IBluetoothAdapter";
/* [object, uuid("7974F04C-5F7A-4A34-9225-A855F84B1A8B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BluetoothAddress )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsClassicSupported )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsLowEnergySupported )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPeripheralRoleSupported )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCentralRoleSupported )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAdvertisementOffloadSupported )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetRadioAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_get_BluetoothAddress(This,value) \
    ( (This)->lpVtbl->get_BluetoothAddress(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_get_IsClassicSupported(This,value) \
    ( (This)->lpVtbl->get_IsClassicSupported(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_get_IsLowEnergySupported(This,value) \
    ( (This)->lpVtbl->get_IsLowEnergySupported(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_get_IsPeripheralRoleSupported(This,value) \
    ( (This)->lpVtbl->get_IsPeripheralRoleSupported(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_get_IsCentralRoleSupported(This,value) \
    ( (This)->lpVtbl->get_IsCentralRoleSupported(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_get_IsAdvertisementOffloadSupported(This,value) \
    ( (This)->lpVtbl->get_IsAdvertisementOffloadSupported(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_GetRadioAsync(This,operation) \
    ( (This)->lpVtbl->GetRadioAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothAdapterStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothAdapter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothAdapterStatics[] = L"Windows.Devices.Bluetooth.IBluetoothAdapterStatics";
/* [object, uuid("8B02FB6A-AC4C-4741-8661-8EAB7D17EA9F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_GetDeviceSelector(This,result) \
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_FromIdAsync(This,deviceId,operation) \
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_GetDefaultAsync(This,operation) \
    ( (This)->lpVtbl->GetDefaultAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothClassOfDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothClassOfDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothClassOfDevice[] = L"Windows.Devices.Bluetooth.IBluetoothClassOfDevice";
/* [object, uuid("D640227E-D7D7-4661-9454-65039CA17A2B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RawValue )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MajorClass )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMajorClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinorClass )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMinorClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceCapabilities )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothServiceCapabilities * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_get_RawValue(This,value) \
    ( (This)->lpVtbl->get_RawValue(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_get_MajorClass(This,value) \
    ( (This)->lpVtbl->get_MajorClass(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_get_MinorClass(This,value) \
    ( (This)->lpVtbl->get_MinorClass(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_get_ServiceCapabilities(This,value) \
    ( (This)->lpVtbl->get_ServiceCapabilities(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothClassOfDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothClassOfDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothClassOfDeviceStatics[] = L"Windows.Devices.Bluetooth.IBluetoothClassOfDeviceStatics";
/* [object, uuid("E46135BD-0FA2-416C-91B4-C1E48CA061C1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromRawValue )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics * This,
        /* [in] */UINT32 rawValue,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * * classOfDevice
        );
    HRESULT ( STDMETHODCALLTYPE *FromParts )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics * This,
        /* [in] */__x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMajorClass majorClass,
        /* [in] */__x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMinorClass minorClass,
        /* [in] */__x_ABI_CWindows_CDevices_CBluetooth_CBluetoothServiceCapabilities serviceCapabilities,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * * classOfDevice
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_FromRawValue(This,rawValue,classOfDevice) \
    ( (This)->lpVtbl->FromRawValue(This,rawValue,classOfDevice) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_FromParts(This,majorClass,minorClass,serviceCapabilities,classOfDevice) \
    ( (This)->lpVtbl->FromParts(This,majorClass,minorClass,serviceCapabilities,classOfDevice) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDevice[] = L"Windows.Devices.Bluetooth.IBluetoothDevice";
/* [object, uuid("2335B156-90D2-4A04-AEF5-0E20B9E6B707"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HostName )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClassOfDevice )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SdpRecords )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("Use GetRfcommServicesAsync instead of RfcommServices.  For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_RfcommServices )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConnectionStatus )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothConnectionStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BluetoothAddress )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_NameChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_NameChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SdpRecordsChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SdpRecordsChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ConnectionStatusChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ConnectionStatusChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_get_HostName(This,value) \
    ( (This)->lpVtbl->get_HostName(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_get_ClassOfDevice(This,value) \
    ( (This)->lpVtbl->get_ClassOfDevice(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_get_SdpRecords(This,value) \
    ( (This)->lpVtbl->get_SdpRecords(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("Use GetRfcommServicesAsync instead of RfcommServices.  For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_get_RfcommServices(This,value) \
    ( (This)->lpVtbl->get_RfcommServices(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_get_ConnectionStatus(This,value) \
    ( (This)->lpVtbl->get_ConnectionStatus(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_get_BluetoothAddress(This,value) \
    ( (This)->lpVtbl->get_BluetoothAddress(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_add_NameChanged(This,handler,token) \
    ( (This)->lpVtbl->add_NameChanged(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_remove_NameChanged(This,token) \
    ( (This)->lpVtbl->remove_NameChanged(This,token) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_add_SdpRecordsChanged(This,handler,token) \
    ( (This)->lpVtbl->add_SdpRecordsChanged(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_remove_SdpRecordsChanged(This,token) \
    ( (This)->lpVtbl->remove_SdpRecordsChanged(This,token) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_add_ConnectionStatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ConnectionStatusChanged(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_remove_ConnectionStatusChanged(This,token) \
    ( (This)->lpVtbl->remove_ConnectionStatusChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothDevice2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Bluetooth.IBluetoothDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDevice2[] = L"Windows.Devices.Bluetooth.IBluetoothDevice2";
/* [object, uuid("0133F954-B156-4DD0-B1F5-C11BC31A5163"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceInformation )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2Vtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_get_DeviceInformation(This,value) \
    ( (This)->lpVtbl->get_DeviceInformation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothDevice3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Bluetooth.IBluetoothDevice2
 *     Windows.Devices.Bluetooth.IBluetoothDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDevice3[] = L"Windows.Devices.Bluetooth.IBluetoothDevice3";
/* [object, uuid("57FFF78B-651A-4454-B90F-EB21EF0B0D71"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceAccessInformation )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetRfcommServicesAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetRfcommServicesWithCacheModeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
        /* [in] */__x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetRfcommServicesForIdAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * serviceId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetRfcommServicesForIdWithCacheModeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * serviceId,
        /* [in] */__x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3Vtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_get_DeviceAccessInformation(This,value) \
    ( (This)->lpVtbl->get_DeviceAccessInformation(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_RequestAccessAsync(This,value) \
    ( (This)->lpVtbl->RequestAccessAsync(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_GetRfcommServicesAsync(This,operation) \
    ( (This)->lpVtbl->GetRfcommServicesAsync(This,operation) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_GetRfcommServicesWithCacheModeAsync(This,cacheMode,operation) \
    ( (This)->lpVtbl->GetRfcommServicesWithCacheModeAsync(This,cacheMode,operation) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_GetRfcommServicesForIdAsync(This,serviceId,operation) \
    ( (This)->lpVtbl->GetRfcommServicesForIdAsync(This,serviceId,operation) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_GetRfcommServicesForIdWithCacheModeAsync(This,serviceId,cacheMode,operation) \
    ( (This)->lpVtbl->GetRfcommServicesForIdWithCacheModeAsync(This,serviceId,cacheMode,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothDevice4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDevice4[] = L"Windows.Devices.Bluetooth.IBluetoothDevice4";
/* [object, uuid("817C34AD-0E9C-42B2-A8DC-3E8094940D12"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BluetoothDeviceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4Vtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_get_BluetoothDeviceId(This,value) \
    ( (This)->lpVtbl->get_BluetoothDeviceId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothDeviceId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothDeviceId
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDeviceId[] = L"Windows.Devices.Bluetooth.IBluetoothDeviceId";
/* [object, uuid("C17949AF-57C1-4642-BCCE-E6C06B20AE76"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsClassicDevice )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsLowEnergyDevice )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_get_IsClassicDevice(This,value) \
    ( (This)->lpVtbl->get_IsClassicDevice(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_get_IsLowEnergyDevice(This,value) \
    ( (This)->lpVtbl->get_IsLowEnergyDevice(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothDeviceIdStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothDeviceId
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDeviceIdStatics[] = L"Windows.Devices.Bluetooth.IBluetoothDeviceIdStatics";
/* [object, uuid("A7884E67-3EFB-4F31-BBC2-810E09977404"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_FromId(This,deviceId,result) \
    ( (This)->lpVtbl->FromId(This,deviceId,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDeviceStatics[] = L"Windows.Devices.Bluetooth.IBluetoothDeviceStatics";
/* [object, uuid("0991DF51-57DB-4725-BBD7-84F64327EC2C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FromHostNameAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * hostName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FromBluetoothAddressAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This,
        /* [in] */UINT64 address,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_FromIdAsync(This,deviceId,operation) \
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_FromHostNameAsync(This,hostName,operation) \
    ( (This)->lpVtbl->FromHostNameAsync(This,hostName,operation) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_FromBluetoothAddressAsync(This,address,operation) \
    ( (This)->lpVtbl->FromBluetoothAddressAsync(This,address,operation) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_GetDeviceSelector(This,deviceSelector) \
    ( (This)->lpVtbl->GetDeviceSelector(This,deviceSelector) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothDeviceStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Bluetooth.IBluetoothDeviceStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDeviceStatics2[] = L"Windows.Devices.Bluetooth.IBluetoothDeviceStatics2";
/* [object, uuid("C29E8E2F-4E14-4477-AA1B-B8B47E5B7ECE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromPairingState )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This,
        /* [in] */boolean pairingState,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromConnectionStatus )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This,
        /* [in] */__x_ABI_CWindows_CDevices_CBluetooth_CBluetoothConnectionStatus connectionStatus,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromDeviceName )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This,
        /* [in] */__RPC__in HSTRING deviceName,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromBluetoothAddress )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This,
        /* [in] */UINT64 bluetoothAddress,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromClassOfDevice )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * classOfDevice,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2Vtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_GetDeviceSelectorFromPairingState(This,pairingState,deviceSelector) \
    ( (This)->lpVtbl->GetDeviceSelectorFromPairingState(This,pairingState,deviceSelector) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_GetDeviceSelectorFromConnectionStatus(This,connectionStatus,deviceSelector) \
    ( (This)->lpVtbl->GetDeviceSelectorFromConnectionStatus(This,connectionStatus,deviceSelector) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_GetDeviceSelectorFromDeviceName(This,deviceName,deviceSelector) \
    ( (This)->lpVtbl->GetDeviceSelectorFromDeviceName(This,deviceName,deviceSelector) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_GetDeviceSelectorFromBluetoothAddress(This,bluetoothAddress,deviceSelector) \
    ( (This)->lpVtbl->GetDeviceSelectorFromBluetoothAddress(This,bluetoothAddress,deviceSelector) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_GetDeviceSelectorFromClassOfDevice(This,classOfDevice,deviceSelector) \
    ( (This)->lpVtbl->GetDeviceSelectorFromClassOfDevice(This,classOfDevice,deviceSelector) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEAppearance
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEAppearance
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEAppearance[] = L"Windows.Devices.Bluetooth.IBluetoothLEAppearance";
/* [object, uuid("5D2079F2-66A8-4258-985E-02B4D9509F18"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RawValue )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Category )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SubCategory )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_get_RawValue(This,value) \
    ( (This)->lpVtbl->get_RawValue(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_get_Category(This,value) \
    ( (This)->lpVtbl->get_Category(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_get_SubCategory(This,value) \
    ( (This)->lpVtbl->get_SubCategory(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEAppearanceCategoriesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEAppearanceCategories
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics[] = L"Windows.Devices.Bluetooth.IBluetoothLEAppearanceCategoriesStatics";
/* [object, uuid("6D4D54FE-046A-4185-AAB6-824CF0610861"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uncategorized )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Phone )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Computer )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Watch )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Clock )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Display )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteControl )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EyeGlasses )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Tag )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Keyring )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediaPlayer )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BarcodeScanner )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Thermometer )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeartRate )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BloodPressure )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HumanInterfaceDevice )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GlucoseMeter )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RunningWalking )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cycling )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PulseOximeter )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WeightScale )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutdoorSportActivity )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_Uncategorized(This,value) \
    ( (This)->lpVtbl->get_Uncategorized(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_Phone(This,value) \
    ( (This)->lpVtbl->get_Phone(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_Computer(This,value) \
    ( (This)->lpVtbl->get_Computer(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_Watch(This,value) \
    ( (This)->lpVtbl->get_Watch(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_Clock(This,value) \
    ( (This)->lpVtbl->get_Clock(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_Display(This,value) \
    ( (This)->lpVtbl->get_Display(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_RemoteControl(This,value) \
    ( (This)->lpVtbl->get_RemoteControl(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_EyeGlasses(This,value) \
    ( (This)->lpVtbl->get_EyeGlasses(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_Tag(This,value) \
    ( (This)->lpVtbl->get_Tag(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_Keyring(This,value) \
    ( (This)->lpVtbl->get_Keyring(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_MediaPlayer(This,value) \
    ( (This)->lpVtbl->get_MediaPlayer(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_BarcodeScanner(This,value) \
    ( (This)->lpVtbl->get_BarcodeScanner(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_Thermometer(This,value) \
    ( (This)->lpVtbl->get_Thermometer(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_HeartRate(This,value) \
    ( (This)->lpVtbl->get_HeartRate(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_BloodPressure(This,value) \
    ( (This)->lpVtbl->get_BloodPressure(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_HumanInterfaceDevice(This,value) \
    ( (This)->lpVtbl->get_HumanInterfaceDevice(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_GlucoseMeter(This,value) \
    ( (This)->lpVtbl->get_GlucoseMeter(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_RunningWalking(This,value) \
    ( (This)->lpVtbl->get_RunningWalking(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_Cycling(This,value) \
    ( (This)->lpVtbl->get_Cycling(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_PulseOximeter(This,value) \
    ( (This)->lpVtbl->get_PulseOximeter(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_WeightScale(This,value) \
    ( (This)->lpVtbl->get_WeightScale(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_get_OutdoorSportActivity(This,value) \
    ( (This)->lpVtbl->get_OutdoorSportActivity(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEAppearanceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEAppearance
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEAppearanceStatics[] = L"Windows.Devices.Bluetooth.IBluetoothLEAppearanceStatics";
/* [object, uuid("A193C0C7-4504-4F4A-9BA5-CD1054E5E065"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromRawValue )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics * This,
        /* [in] */UINT16 rawValue,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * * appearance
        );
    HRESULT ( STDMETHODCALLTYPE *FromParts )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics * This,
        /* [in] */UINT16 appearanceCategory,
        /* [in] */UINT16 appearanceSubCategory,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * * appearance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_FromRawValue(This,rawValue,appearance) \
    ( (This)->lpVtbl->FromRawValue(This,rawValue,appearance) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_FromParts(This,appearanceCategory,appearanceSubCategory,appearance) \
    ( (This)->lpVtbl->FromParts(This,appearanceCategory,appearanceSubCategory,appearance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEAppearanceSubcategoriesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEAppearanceSubcategories
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics[] = L"Windows.Devices.Bluetooth.IBluetoothLEAppearanceSubcategoriesStatics";
/* [object, uuid("E57BA606-2144-415A-8312-71CCF291F8D1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Generic )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SportsWatch )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ThermometerEar )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeartRateBelt )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BloodPressureArm )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BloodPressureWrist )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Keyboard )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mouse )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Joystick )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Gamepad )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DigitizerTablet )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CardReader )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DigitalPen )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BarcodeScanner )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RunningWalkingInShoe )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RunningWalkingOnShoe )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RunningWalkingOnHip )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CyclingComputer )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CyclingSpeedSensor )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CyclingCadenceSensor )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CyclingPowerSensor )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CyclingSpeedCadenceSensor )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OximeterFingertip )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OximeterWristWorn )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocationDisplay )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocationNavigationDisplay )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocationPod )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocationNavigationPod )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_Generic(This,value) \
    ( (This)->lpVtbl->get_Generic(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_SportsWatch(This,value) \
    ( (This)->lpVtbl->get_SportsWatch(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_ThermometerEar(This,value) \
    ( (This)->lpVtbl->get_ThermometerEar(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_HeartRateBelt(This,value) \
    ( (This)->lpVtbl->get_HeartRateBelt(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_BloodPressureArm(This,value) \
    ( (This)->lpVtbl->get_BloodPressureArm(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_BloodPressureWrist(This,value) \
    ( (This)->lpVtbl->get_BloodPressureWrist(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_Keyboard(This,value) \
    ( (This)->lpVtbl->get_Keyboard(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_Mouse(This,value) \
    ( (This)->lpVtbl->get_Mouse(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_Joystick(This,value) \
    ( (This)->lpVtbl->get_Joystick(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_Gamepad(This,value) \
    ( (This)->lpVtbl->get_Gamepad(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_DigitizerTablet(This,value) \
    ( (This)->lpVtbl->get_DigitizerTablet(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_CardReader(This,value) \
    ( (This)->lpVtbl->get_CardReader(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_DigitalPen(This,value) \
    ( (This)->lpVtbl->get_DigitalPen(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_BarcodeScanner(This,value) \
    ( (This)->lpVtbl->get_BarcodeScanner(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_RunningWalkingInShoe(This,value) \
    ( (This)->lpVtbl->get_RunningWalkingInShoe(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_RunningWalkingOnShoe(This,value) \
    ( (This)->lpVtbl->get_RunningWalkingOnShoe(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_RunningWalkingOnHip(This,value) \
    ( (This)->lpVtbl->get_RunningWalkingOnHip(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_CyclingComputer(This,value) \
    ( (This)->lpVtbl->get_CyclingComputer(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_CyclingSpeedSensor(This,value) \
    ( (This)->lpVtbl->get_CyclingSpeedSensor(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_CyclingCadenceSensor(This,value) \
    ( (This)->lpVtbl->get_CyclingCadenceSensor(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_CyclingPowerSensor(This,value) \
    ( (This)->lpVtbl->get_CyclingPowerSensor(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_CyclingSpeedCadenceSensor(This,value) \
    ( (This)->lpVtbl->get_CyclingSpeedCadenceSensor(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_OximeterFingertip(This,value) \
    ( (This)->lpVtbl->get_OximeterFingertip(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_OximeterWristWorn(This,value) \
    ( (This)->lpVtbl->get_OximeterWristWorn(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_LocationDisplay(This,value) \
    ( (This)->lpVtbl->get_LocationDisplay(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_LocationNavigationDisplay(This,value) \
    ( (This)->lpVtbl->get_LocationNavigationDisplay(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_LocationPod(This,value) \
    ( (This)->lpVtbl->get_LocationPod(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_get_LocationNavigationPod(This,value) \
    ( (This)->lpVtbl->get_LocationNavigationPod(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDevice[] = L"Windows.Devices.Bluetooth.IBluetoothLEDevice";
/* [object, uuid("B5EE2F7B-4AD8-4642-AC48-80A0B500E887"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("Use GetGattServicesAsync instead of GattServices.  For more information, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_GattServices )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConnectionStatus )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothConnectionStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BluetoothAddress )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("Use GetGattServicesForUuidAsync instead of GetGattService.  For more information, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *GetGattService )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
        /* [in] */GUID serviceUuid,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * * service
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_NameChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_NameChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_GattServicesChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_GattServicesChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ConnectionStatusChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ConnectionStatusChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("Use GetGattServicesAsync instead of GattServices.  For more information, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_get_GattServices(This,value) \
    ( (This)->lpVtbl->get_GattServices(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_get_ConnectionStatus(This,value) \
    ( (This)->lpVtbl->get_ConnectionStatus(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_get_BluetoothAddress(This,value) \
    ( (This)->lpVtbl->get_BluetoothAddress(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("Use GetGattServicesForUuidAsync instead of GetGattService.  For more information, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_GetGattService(This,serviceUuid,service) \
    ( (This)->lpVtbl->GetGattService(This,serviceUuid,service) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_add_NameChanged(This,handler,token) \
    ( (This)->lpVtbl->add_NameChanged(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_remove_NameChanged(This,token) \
    ( (This)->lpVtbl->remove_NameChanged(This,token) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_add_GattServicesChanged(This,handler,token) \
    ( (This)->lpVtbl->add_GattServicesChanged(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_remove_GattServicesChanged(This,token) \
    ( (This)->lpVtbl->remove_GattServicesChanged(This,token) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_add_ConnectionStatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ConnectionStatusChanged(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_remove_ConnectionStatusChanged(This,token) \
    ( (This)->lpVtbl->remove_ConnectionStatusChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEDevice2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Bluetooth.IBluetoothLEDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDevice2[] = L"Windows.Devices.Bluetooth.IBluetoothLEDevice2";
/* [object, uuid("26F062B3-7AEE-4D31-BABA-B1B9775F5916"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceInformation )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Appearance )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BluetoothAddressType )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothAddressType * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2Vtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_get_DeviceInformation(This,value) \
    ( (This)->lpVtbl->get_DeviceInformation(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_get_Appearance(This,value) \
    ( (This)->lpVtbl->get_Appearance(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_get_BluetoothAddressType(This,value) \
    ( (This)->lpVtbl->get_BluetoothAddressType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEDevice3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDevice3[] = L"Windows.Devices.Bluetooth.IBluetoothLEDevice3";
/* [object, uuid("AEE9E493-44AC-40DC-AF33-B2C13C01CA46"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceAccessInformation )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetGattServicesAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetGattServicesWithCacheModeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
        /* [in] */__x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetGattServicesForUuidAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
        /* [in] */GUID serviceUuid,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetGattServicesForUuidWithCacheModeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
        /* [in] */GUID serviceUuid,
        /* [in] */__x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3Vtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_get_DeviceAccessInformation(This,value) \
    ( (This)->lpVtbl->get_DeviceAccessInformation(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_RequestAccessAsync(This,operation) \
    ( (This)->lpVtbl->RequestAccessAsync(This,operation) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_GetGattServicesAsync(This,operation) \
    ( (This)->lpVtbl->GetGattServicesAsync(This,operation) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_GetGattServicesWithCacheModeAsync(This,cacheMode,operation) \
    ( (This)->lpVtbl->GetGattServicesWithCacheModeAsync(This,cacheMode,operation) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_GetGattServicesForUuidAsync(This,serviceUuid,operation) \
    ( (This)->lpVtbl->GetGattServicesForUuidAsync(This,serviceUuid,operation) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_GetGattServicesForUuidWithCacheModeAsync(This,serviceUuid,cacheMode,operation) \
    ( (This)->lpVtbl->GetGattServicesForUuidWithCacheModeAsync(This,serviceUuid,cacheMode,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEDevice4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDevice4[] = L"Windows.Devices.Bluetooth.IBluetoothLEDevice4";
/* [object, uuid("2B605031-2248-4B2F-ACF0-7CEE36FC5870"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BluetoothDeviceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4Vtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_get_BluetoothDeviceId(This,value) \
    ( (This)->lpVtbl->get_BluetoothDeviceId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics[] = L"Windows.Devices.Bluetooth.IBluetoothLEDeviceStatics";
/* [object, uuid("C8CF1A19-F0B6-4BF0-8689-41303DE2D9F4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FromBluetoothAddressAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics * This,
        /* [in] */UINT64 bluetoothAddress,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_FromIdAsync(This,deviceId,operation) \
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_FromBluetoothAddressAsync(This,bluetoothAddress,operation) \
    ( (This)->lpVtbl->FromBluetoothAddressAsync(This,bluetoothAddress,operation) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_GetDeviceSelector(This,deviceSelector) \
    ( (This)->lpVtbl->GetDeviceSelector(This,deviceSelector) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothLEDeviceStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothLEDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics2[] = L"Windows.Devices.Bluetooth.IBluetoothLEDeviceStatics2";
/* [object, uuid("5F12C06B-3BAC-43E8-AD16-563271BD41C2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromPairingState )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
        /* [in] */boolean pairingState,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromConnectionStatus )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
        /* [in] */__x_ABI_CWindows_CDevices_CBluetooth_CBluetoothConnectionStatus connectionStatus,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromDeviceName )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
        /* [in] */__RPC__in HSTRING deviceName,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromBluetoothAddress )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
        /* [in] */UINT64 bluetoothAddress,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromBluetoothAddressWithBluetoothAddressType )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
        /* [in] */UINT64 bluetoothAddress,
        /* [in] */__x_ABI_CWindows_CDevices_CBluetooth_CBluetoothAddressType bluetoothAddressType,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromAppearance )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * appearance,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FromBluetoothAddressWithBluetoothAddressTypeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
        /* [in] */UINT64 bluetoothAddress,
        /* [in] */__x_ABI_CWindows_CDevices_CBluetooth_CBluetoothAddressType bluetoothAddressType,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2Vtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_GetDeviceSelectorFromPairingState(This,pairingState,deviceSelector) \
    ( (This)->lpVtbl->GetDeviceSelectorFromPairingState(This,pairingState,deviceSelector) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_GetDeviceSelectorFromConnectionStatus(This,connectionStatus,deviceSelector) \
    ( (This)->lpVtbl->GetDeviceSelectorFromConnectionStatus(This,connectionStatus,deviceSelector) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_GetDeviceSelectorFromDeviceName(This,deviceName,deviceSelector) \
    ( (This)->lpVtbl->GetDeviceSelectorFromDeviceName(This,deviceName,deviceSelector) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_GetDeviceSelectorFromBluetoothAddress(This,bluetoothAddress,deviceSelector) \
    ( (This)->lpVtbl->GetDeviceSelectorFromBluetoothAddress(This,bluetoothAddress,deviceSelector) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_GetDeviceSelectorFromBluetoothAddressWithBluetoothAddressType(This,bluetoothAddress,bluetoothAddressType,deviceSelector) \
    ( (This)->lpVtbl->GetDeviceSelectorFromBluetoothAddressWithBluetoothAddressType(This,bluetoothAddress,bluetoothAddressType,deviceSelector) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_GetDeviceSelectorFromAppearance(This,appearance,deviceSelector) \
    ( (This)->lpVtbl->GetDeviceSelectorFromAppearance(This,appearance,deviceSelector) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_FromBluetoothAddressWithBluetoothAddressTypeAsync(This,bluetoothAddress,bluetoothAddressType,operation) \
    ( (This)->lpVtbl->FromBluetoothAddressWithBluetoothAddressTypeAsync(This,bluetoothAddress,bluetoothAddressType,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothSignalStrengthFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothSignalStrengthFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothSignalStrengthFilter[] = L"Windows.Devices.Bluetooth.IBluetoothSignalStrengthFilter";
/* [object, uuid("DF7B7391-6BB5-4CFE-90B1-5D7324EDCF7F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InRangeThresholdInDBm )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_short * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InRangeThresholdInDBm )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
        /* [in] */__RPC__in_opt __FIReference_1_short * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutOfRangeThresholdInDBm )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_short * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OutOfRangeThresholdInDBm )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
        /* [in] */__RPC__in_opt __FIReference_1_short * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutOfRangeTimeout )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OutOfRangeTimeout )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SamplingInterval )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SamplingInterval )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilterVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_get_InRangeThresholdInDBm(This,value) \
    ( (This)->lpVtbl->get_InRangeThresholdInDBm(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_put_InRangeThresholdInDBm(This,value) \
    ( (This)->lpVtbl->put_InRangeThresholdInDBm(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_get_OutOfRangeThresholdInDBm(This,value) \
    ( (This)->lpVtbl->get_OutOfRangeThresholdInDBm(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_put_OutOfRangeThresholdInDBm(This,value) \
    ( (This)->lpVtbl->put_OutOfRangeThresholdInDBm(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_get_OutOfRangeTimeout(This,value) \
    ( (This)->lpVtbl->get_OutOfRangeTimeout(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_put_OutOfRangeTimeout(This,value) \
    ( (This)->lpVtbl->put_OutOfRangeTimeout(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_get_SamplingInterval(This,value) \
    ( (This)->lpVtbl->get_SamplingInterval(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_put_SamplingInterval(This,value) \
    ( (This)->lpVtbl->put_SamplingInterval(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.IBluetoothUuidHelperStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.BluetoothUuidHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothUuidHelperStatics[] = L"Windows.Devices.Bluetooth.IBluetoothUuidHelperStatics";
/* [object, uuid("17DF0CD8-CF74-4B21-AFE6-F57A11BCDEA0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromShortId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics * This,
        /* [in] */UINT32 shortId,
        /* [retval, out] */__RPC__out GUID * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetShortId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics * This,
        /* [in] */GUID uuid,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_FromShortId(This,shortId,result) \
    ( (This)->lpVtbl->FromShortId(This,shortId,result) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_TryGetShortId(This,uuid,result) \
    ( (This)->lpVtbl->TryGetShortId(This,uuid,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothAdapter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothAdapterStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.IBluetoothAdapter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothAdapter_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothAdapter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothAdapter[] = L"Windows.Devices.Bluetooth.BluetoothAdapter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothClassOfDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothClassOfDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.IBluetoothClassOfDevice ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothClassOfDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothClassOfDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothClassOfDevice[] = L"Windows.Devices.Bluetooth.BluetoothClassOfDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothDeviceStatics2 interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.IBluetoothDevice ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Devices.Bluetooth.IBluetoothDevice2
 *    Windows.Devices.Bluetooth.IBluetoothDevice3
 *    Windows.Devices.Bluetooth.IBluetoothDevice4
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothDevice[] = L"Windows.Devices.Bluetooth.BluetoothDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothDeviceId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothDeviceIdStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.IBluetoothDeviceId ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothDeviceId_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothDeviceId_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothDeviceId[] = L"Windows.Devices.Bluetooth.BluetoothDeviceId";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothLEAppearance
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothLEAppearanceStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.IBluetoothLEAppearance ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothLEAppearance_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothLEAppearance_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothLEAppearance[] = L"Windows.Devices.Bluetooth.BluetoothLEAppearance";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothLEAppearanceCategories
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothLEAppearanceCategoriesStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothLEAppearanceCategories_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothLEAppearanceCategories_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothLEAppearanceCategories[] = L"Windows.Devices.Bluetooth.BluetoothLEAppearanceCategories";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothLEAppearanceSubcategories
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothLEAppearanceSubcategoriesStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothLEAppearanceSubcategories_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothLEAppearanceSubcategories_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothLEAppearanceSubcategories[] = L"Windows.Devices.Bluetooth.BluetoothLEAppearanceSubcategories";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothLEDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothLEDeviceStatics2 interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothLEDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.IBluetoothLEDevice ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Devices.Bluetooth.IBluetoothLEDevice2
 *    Windows.Devices.Bluetooth.IBluetoothLEDevice3
 *    Windows.Devices.Bluetooth.IBluetoothLEDevice4
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothLEDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothLEDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothLEDevice[] = L"Windows.Devices.Bluetooth.BluetoothLEDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothSignalStrengthFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.IBluetoothSignalStrengthFilter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothSignalStrengthFilter_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothSignalStrengthFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothSignalStrengthFilter[] = L"Windows.Devices.Bluetooth.BluetoothSignalStrengthFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.BluetoothUuidHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.IBluetoothUuidHelperStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothUuidHelper_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_BluetoothUuidHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothUuidHelper[] = L"Windows.Devices.Bluetooth.BluetoothUuidHelper";
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
#endif // __windows2Edevices2Ebluetooth_p_h__

#endif // __windows2Edevices2Ebluetooth_h__
