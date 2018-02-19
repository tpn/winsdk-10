/* Header file automatically generated from windows.devices.bluetooth.advertisement.idl */
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
#ifndef __windows2Edevices2Ebluetooth2Eadvertisement_h__
#define __windows2Edevices2Ebluetooth2Eadvertisement_h__
#ifndef __windows2Edevices2Ebluetooth2Eadvertisement_p_h__
#define __windows2Edevices2Ebluetooth2Eadvertisement_p_h__


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
#include "Windows.Devices.Bluetooth.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    interface IBluetoothLEAdvertisement;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    interface IBluetoothLEAdvertisementBytePattern;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    interface IBluetoothLEAdvertisementBytePatternFactory;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePatternFactory

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    interface IBluetoothLEAdvertisementDataSection;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    interface IBluetoothLEAdvertisementDataSectionFactory;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSectionFactory

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    interface IBluetoothLEAdvertisementDataTypesStatics;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    interface IBluetoothLEAdvertisementFilter;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    interface IBluetoothLEAdvertisementPublisher;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    interface IBluetoothLEAdvertisementPublisherFactory;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherFactory

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    interface IBluetoothLEAdvertisementPublisherStatusChangedEventArgs;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    interface IBluetoothLEAdvertisementReceivedEventArgs;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    interface IBluetoothLEAdvertisementWatcher;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    interface IBluetoothLEAdvertisementWatcherFactory;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherFactory

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    interface IBluetoothLEAdvertisementWatcherStoppedEventArgs;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherStoppedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    interface IBluetoothLEManufacturerData;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    interface IBluetoothLEManufacturerDataFactory;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerDataFactory

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    class BluetoothLEAdvertisementBytePattern;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_USE
#define DEF___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b33e103a-1a61-5107-8813-c0e905c05486"))
IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementBytePattern>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern*> __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_t;
#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern*>
//#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_USE
#define DEF___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1e3fadee-54ac-538b-8777-351afb78cb74"))
IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementBytePattern>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern*> __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_t;
#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern*>
//#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    class BluetoothLEAdvertisementDataSection;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_USE
#define DEF___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("af5c0e81-788b-52d4-82a2-1ed28c66a05e"))
IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataSection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection*> __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_t;
#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection*>
//#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_USE
#define DEF___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("db98b5d1-897e-59cc-b86a-7b8855ac98af"))
IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataSection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection*> __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_t;
#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection*>
//#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    class BluetoothLEAdvertisementReceivedEventArgs;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE
#define DEF___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("096edbb8-ecef-5724-be62-240dcff6aca9"))
IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*> __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t;
#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>
//#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE
#define DEF___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("34f6412f-8314-5205-967c-db357c9a42a7"))
IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*> __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t;
#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>
//#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    class BluetoothLEManufacturerData;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_USE
#define DEF___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("12f158dd-7016-5338-ac5c-7d5503d73274"))
IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEManufacturerData>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData*> __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_t;
#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData*>
//#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_USE
#define DEF___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("834a4cac-bb8b-5f0f-9f28-4dbc98c17907"))
IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEManufacturerData>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData*> __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_t;
#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData*>
//#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_USE
#define DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a7d9983a-a11f-572e-89fb-683ea429bcbc"))
IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementBytePattern>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern*> __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_t;
#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern*>
//#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_USE
#define DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c4f2b8ea-11a8-5109-9013-4047e12c72e8"))
IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataSection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection*> __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_t;
#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection*>
//#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE
#define DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8aef9bca-fe7d-5966-9789-fede24cb41c4"))
IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*> __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t;
#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>
//#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_USE
#define DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("78ab070e-ad7e-5912-a4f1-7be33e4560af"))
IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEManufacturerData>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData*> __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_t;
#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData*>
//#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_USE
#define DEF___FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8dd461b7-9775-5e82-a0a6-6627abd0d010"))
IVector<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementBytePattern>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern*> __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_t;
#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern*>
//#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_USE
#define DEF___FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b6f71ad2-e2cf-5d54-b6f1-90964ee5d4da"))
IVector<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataSection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection*> __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_t;
#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection*>
//#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_USE
#define DEF___FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("52d75b45-1d24-5eeb-babb-65effae45e46"))
IVector<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEManufacturerData>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData*> __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_t;
#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData*>
//#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    enum BluetoothLEAdvertisementFlags : unsigned int;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags_USE
#define DEF___FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("91c0ba96-9e69-5b82-bf1d-83ab2a509c53"))
IReference<enum ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFlags> : IReference_impl<enum ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFlags> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementFlags>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<enum ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFlags> __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags_t;
#define __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags ABI::Windows::Foundation::__FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags ABI::Windows::Foundation::IReference<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFlags>
//#define __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags_t ABI::Windows::Foundation::IReference<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFlags>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags_USE */



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    class BluetoothLEAdvertisementPublisher;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    class BluetoothLEAdvertisementPublisherStatusChangedEventArgs;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c2ffa4f1-5893-54a8-bd94-aa1198b05d07"))
ITypedEventHandler<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisher*,ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatusChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisher*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatusChangedEventArgs*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisher, Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisherStatusChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisher*,ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatusChangedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher*,ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher*,ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    class BluetoothLEAdvertisementWatcher;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("90eb4eca-d465-5ea0-a61c-033c8c5ecef2"))
ITypedEventHandler<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher*,ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcher, Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher*,ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher*,ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher*,ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    class BluetoothLEAdvertisementWatcherStoppedEventArgs;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9936a4db-dc99-55c3-9e9b-bf4854bd9eab"))
ITypedEventHandler<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher*,ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStoppedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStoppedEventArgs*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherStoppedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcher, Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcherStoppedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher*,ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStoppedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher*,ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherStoppedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher*,ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherStoppedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIIterator_1_GUID_USE
#define DEF___FIIterator_1_GUID_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d3d64048-82b3-53c7-9285-b0be18368482"))
IIterator<GUID> : IIterator_impl<GUID> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Guid>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<GUID> __FIIterator_1_GUID_t;
#define __FIIterator_1_GUID ABI::Windows::Foundation::Collections::__FIIterator_1_GUID_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_GUID ABI::Windows::Foundation::Collections::IIterator<GUID>
//#define __FIIterator_1_GUID_t ABI::Windows::Foundation::Collections::IIterator<GUID>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_GUID_USE */




#ifndef DEF___FIIterable_1_GUID_USE
#define DEF___FIIterable_1_GUID_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f4ca3045-5dd7-54be-982e-d88d8ca0876e"))
IIterable<GUID> : IIterable_impl<GUID> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Guid>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<GUID> __FIIterable_1_GUID_t;
#define __FIIterable_1_GUID ABI::Windows::Foundation::Collections::__FIIterable_1_GUID_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_GUID ABI::Windows::Foundation::Collections::IIterable<GUID>
//#define __FIIterable_1_GUID_t ABI::Windows::Foundation::Collections::IIterable<GUID>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_GUID_USE */




#ifndef DEF___FIVectorView_1_GUID_USE
#define DEF___FIVectorView_1_GUID_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9520e64b-15b2-52a6-98ed-3191fa6cf68a"))
IVectorView<GUID> : IVectorView_impl<GUID> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Guid>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<GUID> __FIVectorView_1_GUID_t;
#define __FIVectorView_1_GUID ABI::Windows::Foundation::Collections::__FIVectorView_1_GUID_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_GUID ABI::Windows::Foundation::Collections::IVectorView<GUID>
//#define __FIVectorView_1_GUID_t ABI::Windows::Foundation::Collections::IVectorView<GUID>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_GUID_USE */




#ifndef DEF___FIVector_1_GUID_USE
#define DEF___FIVector_1_GUID_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("482e676d-b913-5ec1-afa8-5f96922e94ae"))
IVector<GUID> : IVector_impl<GUID> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Guid>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<GUID> __FIVector_1_GUID_t;
#define __FIVector_1_GUID ABI::Windows::Foundation::Collections::__FIVector_1_GUID_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_GUID ABI::Windows::Foundation::Collections::IVector<GUID>
//#define __FIVector_1_GUID_t ABI::Windows::Foundation::Collections::IVector<GUID>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_GUID_USE */





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
                class BluetoothSignalStrengthFilter;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

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
            namespace Bluetooth {
                namespace Advertisement {
                    
                    typedef enum BluetoothLEAdvertisementFlags : unsigned int BluetoothLEAdvertisementFlags;
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    
                    typedef enum BluetoothLEAdvertisementPublisherStatus : int BluetoothLEAdvertisementPublisherStatus;
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    
                    typedef enum BluetoothLEAdvertisementType : int BluetoothLEAdvertisementType;
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    
                    typedef enum BluetoothLEAdvertisementWatcherStatus : int BluetoothLEAdvertisementWatcherStatus;
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    
                    typedef enum BluetoothLEScanningMode : int BluetoothLEScanningMode;
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

















namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    class BluetoothLEAdvertisement;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    class BluetoothLEAdvertisementFilter;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */


















/*
 *
 * Struct Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementFlags
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
                namespace Advertisement {
                    /* [v1_enum, flags, contract] */
                    enum BluetoothLEAdvertisementFlags : unsigned int
                    {
                        BluetoothLEAdvertisementFlags_None = 0,
                        BluetoothLEAdvertisementFlags_LimitedDiscoverableMode = 0x1,
                        BluetoothLEAdvertisementFlags_GeneralDiscoverableMode = 0x2,
                        BluetoothLEAdvertisementFlags_ClassicNotSupported = 0x4,
                        BluetoothLEAdvertisementFlags_DualModeControllerCapable = 0x8,
                        BluetoothLEAdvertisementFlags_DualModeHostCapable = 0x10,
                    };
                    
                    DEFINE_ENUM_FLAG_OPERATORS(BluetoothLEAdvertisementFlags)
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisherStatus
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
                namespace Advertisement {
                    /* [v1_enum, contract] */
                    enum BluetoothLEAdvertisementPublisherStatus : int
                    {
                        BluetoothLEAdvertisementPublisherStatus_Created = 0,
                        BluetoothLEAdvertisementPublisherStatus_Waiting = 1,
                        BluetoothLEAdvertisementPublisherStatus_Started = 2,
                        BluetoothLEAdvertisementPublisherStatus_Stopping = 3,
                        BluetoothLEAdvertisementPublisherStatus_Stopped = 4,
                        BluetoothLEAdvertisementPublisherStatus_Aborted = 5,
                    };
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementType
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
                namespace Advertisement {
                    /* [v1_enum, contract] */
                    enum BluetoothLEAdvertisementType : int
                    {
                        BluetoothLEAdvertisementType_ConnectableUndirected = 0,
                        BluetoothLEAdvertisementType_ConnectableDirected = 1,
                        BluetoothLEAdvertisementType_ScannableUndirected = 2,
                        BluetoothLEAdvertisementType_NonConnectableUndirected = 3,
                        BluetoothLEAdvertisementType_ScanResponse = 4,
                    };
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcherStatus
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
                namespace Advertisement {
                    /* [v1_enum, contract] */
                    enum BluetoothLEAdvertisementWatcherStatus : int
                    {
                        BluetoothLEAdvertisementWatcherStatus_Created = 0,
                        BluetoothLEAdvertisementWatcherStatus_Started = 1,
                        BluetoothLEAdvertisementWatcherStatus_Stopping = 2,
                        BluetoothLEAdvertisementWatcherStatus_Stopped = 3,
                        BluetoothLEAdvertisementWatcherStatus_Aborted = 4,
                    };
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Bluetooth.Advertisement.BluetoothLEScanningMode
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
                namespace Advertisement {
                    /* [v1_enum, contract] */
                    enum BluetoothLEScanningMode : int
                    {
                        BluetoothLEScanningMode_Passive = 0,
                        BluetoothLEScanningMode_Active = 1,
                    };
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisement[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisement";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    /* [object, uuid("066FB2B7-33D1-4E7D-8367-CF81D0F79653"), exclusiveto, contract] */
                    MIDL_INTERFACE("066FB2B7-33D1-4E7D-8367-CF81D0F79653")
                    IBluetoothLEAdvertisement : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Flags(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Flags(
                            /* [in] */__RPC__in_opt __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LocalName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceUuids(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_GUID * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ManufacturerData(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataSections(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetManufacturerDataByCompanyId(
                            /* [in] */UINT16 companyId,
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * * dataList
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetSectionsByType(
                            /* [in] */BYTE type,
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * * sectionList
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBluetoothLEAdvertisement=_uuidof(IBluetoothLEAdvertisement);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementBytePattern
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementBytePattern
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementBytePattern[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementBytePattern";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    /* [object, uuid("FBFAD7F2-B9C5-4A08-BC51-502F8EF68A79"), exclusiveto, contract] */
                    MIDL_INTERFACE("FBFAD7F2-B9C5-4A08-BC51-502F8EF68A79")
                    IBluetoothLEAdvertisementBytePattern : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataType(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DataType(
                            /* [in] */BYTE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Offset(
                            /* [retval, out] */__RPC__out INT16 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Offset(
                            /* [in] */INT16 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Data(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Data(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBluetoothLEAdvertisementBytePattern=_uuidof(IBluetoothLEAdvertisementBytePattern);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementBytePatternFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementBytePattern
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementBytePatternFactory[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementBytePatternFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    /* [object, uuid("C2E24D73-FD5C-4EC3-BE2A-9CA6FA11B7BD"), exclusiveto, contract] */
                    MIDL_INTERFACE("C2E24D73-FD5C-4EC3-BE2A-9CA6FA11B7BD")
                    IBluetoothLEAdvertisementBytePatternFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */BYTE dataType,
                            /* [in] */INT16 offset,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBluetoothLEAdvertisementBytePatternFactory=_uuidof(IBluetoothLEAdvertisementBytePatternFactory);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataSection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataSection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataSection[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataSection";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    /* [object, uuid("D7213314-3A43-40F9-B6F0-92BFEFC34AE3"), exclusiveto, contract] */
                    MIDL_INTERFACE("D7213314-3A43-40F9-B6F0-92BFEFC34AE3")
                    IBluetoothLEAdvertisementDataSection : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataType(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DataType(
                            /* [in] */BYTE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Data(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Data(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBluetoothLEAdvertisementDataSection=_uuidof(IBluetoothLEAdvertisementDataSection);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataSectionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataSection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataSectionFactory[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataSectionFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    /* [object, uuid("E7A40942-A845-4045-BF7E-3E9971DB8A6B"), exclusiveto, contract] */
                    MIDL_INTERFACE("E7A40942-A845-4045-BF7E-3E9971DB8A6B")
                    IBluetoothLEAdvertisementDataSectionFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */BYTE dataType,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBluetoothLEAdvertisementDataSectionFactory=_uuidof(IBluetoothLEAdvertisementDataSectionFactory);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataTypesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataTypes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataTypesStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    /* [object, uuid("3BB6472F-0606-434B-A76E-74159F0684D3"), exclusiveto, contract] */
                    MIDL_INTERFACE("3BB6472F-0606-434B-A76E-74159F0684D3")
                    IBluetoothLEAdvertisementDataTypesStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Flags(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncompleteService16BitUuids(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CompleteService16BitUuids(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncompleteService32BitUuids(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CompleteService32BitUuids(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncompleteService128BitUuids(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CompleteService128BitUuids(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShortenedLocalName(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CompleteLocalName(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TxPowerLevel(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SlaveConnectionIntervalRange(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceSolicitation16BitUuids(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceSolicitation32BitUuids(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceSolicitation128BitUuids(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceData16BitUuids(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceData32BitUuids(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceData128BitUuids(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PublicTargetAddress(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RandomTargetAddress(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Appearance(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AdvertisingInterval(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ManufacturerSpecificData(
                            /* [retval, out] */__RPC__out BYTE * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBluetoothLEAdvertisementDataTypesStatics=_uuidof(IBluetoothLEAdvertisementDataTypesStatics);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementFilter[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementFilter";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    /* [object, uuid("131EB0D3-D04E-47B1-837E-49405BF6F80F"), exclusiveto, contract] */
                    MIDL_INTERFACE("131EB0D3-D04E-47B1-837E-49405BF6F80F")
                    IBluetoothLEAdvertisementFilter : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Advertisement(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Advertisement(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BytePatterns(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBluetoothLEAdvertisementFilter=_uuidof(IBluetoothLEAdvertisementFilter);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisher[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisher";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    /* [object, uuid("CDE820F9-D9FA-43D6-A264-DDD8B7DA8B78"), exclusiveto, contract] */
                    MIDL_INTERFACE("CDE820F9-D9FA-43D6-A264-DDD8B7DA8B78")
                    IBluetoothLEAdvertisementPublisher : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Advertisement(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StatusChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StatusChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBluetoothLEAdvertisementPublisher=_uuidof(IBluetoothLEAdvertisementPublisher);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisherFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisherFactory[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisherFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    /* [object, uuid("5C5F065E-B863-4981-A1AF-1C544D8B0C0D"), exclusiveto, contract] */
                    MIDL_INTERFACE("5C5F065E-B863-4981-A1AF-1C544D8B0C0D")
                    IBluetoothLEAdvertisementPublisherFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement * advertisement,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBluetoothLEAdvertisementPublisherFactory=_uuidof(IBluetoothLEAdvertisementPublisherFactory);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisherStatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisherStatusChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisherStatusChangedEventArgs[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisherStatusChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    /* [object, uuid("09C2BD9F-2DFF-4B23-86EE-0D14FB94AEAE"), exclusiveto, contract] */
                    MIDL_INTERFACE("09C2BD9F-2DFF-4B23-86EE-0D14FB94AEAE")
                    IBluetoothLEAdvertisementPublisherStatusChangedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Error(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::BluetoothError * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBluetoothLEAdvertisementPublisherStatusChangedEventArgs=_uuidof(IBluetoothLEAdvertisementPublisherStatusChangedEventArgs);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementReceivedEventArgs[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementReceivedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    /* [object, uuid("27987DDF-E596-41BE-8D43-9E6731D4A913"), exclusiveto, contract] */
                    MIDL_INTERFACE("27987DDF-E596-41BE-8D43-9E6731D4A913")
                    IBluetoothLEAdvertisementReceivedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RawSignalStrengthInDBm(
                            /* [retval, out] */__RPC__out INT16 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BluetoothAddress(
                            /* [retval, out] */__RPC__out UINT64 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AdvertisementType(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Advertisement(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBluetoothLEAdvertisementReceivedEventArgs=_uuidof(IBluetoothLEAdvertisementReceivedEventArgs);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcher";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    /* [object, uuid("A6AC336F-F3D3-4297-8D6C-C81EA6623F40"), exclusiveto, contract] */
                    MIDL_INTERFACE("A6AC336F-F3D3-4297-8D6C-C81EA6623F40")
                    IBluetoothLEAdvertisementWatcher : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinSamplingInterval(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxSamplingInterval(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinOutOfRangeTimeout(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxOutOfRangeTimeout(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStatus * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScanningMode(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEScanningMode * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ScanningMode(
                            /* [in] */ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEScanningMode value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SignalStrengthFilter(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SignalStrengthFilter(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AdvertisementFilter(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AdvertisementFilter(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Received(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Received(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Stopped(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Stopped(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBluetoothLEAdvertisementWatcher=_uuidof(IBluetoothLEAdvertisementWatcher);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcherFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcherFactory[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcherFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    /* [object, uuid("9AAF2D56-39AC-453E-B32A-85C657E017F1"), exclusiveto, contract] */
                    MIDL_INTERFACE("9AAF2D56-39AC-453E-B32A-85C657E017F1")
                    IBluetoothLEAdvertisementWatcherFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter * advertisementFilter,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBluetoothLEAdvertisementWatcherFactory=_uuidof(IBluetoothLEAdvertisementWatcherFactory);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcherStoppedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcherStoppedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcherStoppedEventArgs[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcherStoppedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    /* [object, uuid("DD40F84D-E7B9-43E3-9C04-0685D085FD8C"), exclusiveto, contract] */
                    MIDL_INTERFACE("DD40F84D-E7B9-43E3-9C04-0685D085FD8C")
                    IBluetoothLEAdvertisementWatcherStoppedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Error(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::BluetoothError * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBluetoothLEAdvertisementWatcherStoppedEventArgs=_uuidof(IBluetoothLEAdvertisementWatcherStoppedEventArgs);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEManufacturerData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEManufacturerData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEManufacturerData[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEManufacturerData";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    /* [object, uuid("912DBA18-6963-4533-B061-4694DAFB34E5"), exclusiveto, contract] */
                    MIDL_INTERFACE("912DBA18-6963-4533-B061-4694DAFB34E5")
                    IBluetoothLEManufacturerData : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CompanyId(
                            /* [retval, out] */__RPC__out UINT16 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CompanyId(
                            /* [in] */UINT16 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Data(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Data(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBluetoothLEManufacturerData=_uuidof(IBluetoothLEManufacturerData);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEManufacturerDataFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEManufacturerData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEManufacturerDataFactory[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEManufacturerDataFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    /* [object, uuid("C09B39F8-319A-441E-8DE5-66A81E877A6C"), exclusiveto, contract] */
                    MIDL_INTERFACE("C09B39F8-319A-441E-8DE5-66A81E877A6C")
                    IBluetoothLEManufacturerDataFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */UINT16 companyId,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBluetoothLEManufacturerDataFactory=_uuidof(IBluetoothLEManufacturerDataFactory);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisement ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisement_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisement_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisement[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisement";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementBytePattern
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementBytePatternFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementBytePattern ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementBytePattern_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementBytePattern_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementBytePattern[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementBytePattern";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataSection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataSectionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataSection ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementDataSection_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementDataSection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementDataSection[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataSection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataTypes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataTypesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementDataTypes_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementDataTypes_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementDataTypes[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataTypes";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementFilter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementFilter_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementFilter[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisherFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisher ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementPublisher_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementPublisher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementPublisher[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisherStatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisherStatusChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementPublisherStatusChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementPublisherStatusChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementPublisherStatusChangedEventArgs[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisherStatusChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementReceivedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementReceivedEventArgs[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcherFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcher ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementWatcher_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementWatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementWatcher[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcherStoppedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcherStoppedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementWatcherStoppedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementWatcherStoppedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementWatcherStoppedEventArgs[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcherStoppedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEManufacturerData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Devices.Bluetooth.Advertisement.IBluetoothLEManufacturerDataFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEManufacturerData ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEManufacturerData_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEManufacturerData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEManufacturerData[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEManufacturerData";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern;

typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePatternVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePatternVtbl;

interface __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePatternVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern;

typedef  struct __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePatternVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePatternVtbl;

interface __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePatternVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection;

typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSectionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSectionVtbl;

interface __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSectionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection;

typedef  struct __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSectionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSectionVtbl;

interface __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSectionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;

typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl;

interface __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;

typedef  struct __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl;

interface __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData;

typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerDataVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerDataVtbl;

interface __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerDataVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData;

typedef  struct __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerDataVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerDataVtbl;

interface __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerDataVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern;

typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePatternVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePatternVtbl;

interface __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePatternVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection;

typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSectionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSectionVtbl;

interface __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSectionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;

typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl;

interface __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData;

typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerDataVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerDataVtbl;

interface __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerDataVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern;

typedef struct __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePatternVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This, /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * *value);

    END_INTERFACE
} __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePatternVtbl;

interface __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePatternVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection;

typedef struct __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSectionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This, /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * *value);

    END_INTERFACE
} __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSectionVtbl;

interface __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSectionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData;

typedef struct __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerDataVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This, /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * *value);

    END_INTERFACE
} __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerDataVtbl;

interface __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerDataVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementFlags;
#if !defined(____FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags;

typedef struct __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlagsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementFlags *value);
    END_INTERFACE
} __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlagsVtbl;

interface __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags
{
    CONST_VTBL struct __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlagsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIIterator_1_GUID_INTERFACE_DEFINED__)
#define ____FIIterator_1_GUID_INTERFACE_DEFINED__

typedef interface __FIIterator_1_GUID __FIIterator_1_GUID;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_GUID;

typedef struct __FIIterator_1_GUIDVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_GUID * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_GUID * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_GUID * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_GUID * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_GUID * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_GUID * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_GUID * This, /* [retval][out] */ __RPC__out GUID *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_GUID * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_GUID * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_GUID * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) GUID *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_GUIDVtbl;

interface __FIIterator_1_GUID
{
    CONST_VTBL struct __FIIterator_1_GUIDVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_GUID_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_GUID_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_GUID_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_GUID_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_GUID_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_GUID_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_GUID_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_GUID_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_GUID_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_GUID_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_GUID_INTERFACE_DEFINED__


#if !defined(____FIIterable_1_GUID_INTERFACE_DEFINED__)
#define ____FIIterable_1_GUID_INTERFACE_DEFINED__

typedef interface __FIIterable_1_GUID __FIIterable_1_GUID;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_GUID;

typedef  struct __FIIterable_1_GUIDVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_GUID * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_GUID * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_GUID * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_GUID * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_GUID * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_GUID * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_GUID * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_GUID **first);

    END_INTERFACE
} __FIIterable_1_GUIDVtbl;

interface __FIIterable_1_GUID
{
    CONST_VTBL struct __FIIterable_1_GUIDVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_GUID_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_GUID_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_GUID_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_GUID_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_GUID_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_GUID_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_GUID_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_GUID_INTERFACE_DEFINED__


#if !defined(____FIVectorView_1_GUID_INTERFACE_DEFINED__)
#define ____FIVectorView_1_GUID_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_GUID __FIVectorView_1_GUID;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_GUID;

typedef struct __FIVectorView_1_GUIDVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_GUID * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_GUID * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_GUID * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_GUID * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_GUID * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_GUID * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_GUID * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out GUID *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_GUID * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_GUID * This,
            /* [in] */ GUID item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_GUID * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) GUID *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_GUIDVtbl;

interface __FIVectorView_1_GUID
{
    CONST_VTBL struct __FIVectorView_1_GUIDVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_GUID_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_GUID_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_GUID_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_GUID_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_GUID_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_GUID_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_GUID_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_GUID_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_GUID_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_GUID_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_GUID_INTERFACE_DEFINED__


#if !defined(____FIVector_1_GUID_INTERFACE_DEFINED__)
#define ____FIVector_1_GUID_INTERFACE_DEFINED__

typedef interface __FIVector_1_GUID __FIVector_1_GUID;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_GUID;

typedef struct __FIVector_1_GUIDVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_GUID * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_GUID * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_GUID * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_GUID * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_GUID * This, /* [out] */ __RPC__deref_out_opt GUID *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_GUID * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_GUID * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt GUID *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_GUID * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_GUID * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_GUID **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_GUID * This,
        /* [in] */ __RPC__in GUID item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_GUID * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in GUID item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_GUID * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in GUID item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_GUID * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_GUID * This, /* [in] */ __RPC__in GUID item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_GUID * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_GUID * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_GUID * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) GUID *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_GUID * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) GUID *value);

    END_INTERFACE
} __FIVector_1_GUIDVtbl;

interface __FIVector_1_GUID
{
    CONST_VTBL struct __FIVector_1_GUIDVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_GUID_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_GUID_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_GUID_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_GUID_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_GUID_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_GUID_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_GUID_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_GUID_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_GUID_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_GUID_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_GUID_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_GUID_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_GUID_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_GUID_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_GUID_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_GUID_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_GUID_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_GUID_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_GUID_INTERFACE_DEFINED__




typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError;

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementFlags __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementFlags;


typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementPublisherStatus __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementPublisherStatus;


typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementType __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementType;


typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementWatcherStatus __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementWatcherStatus;


typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEScanningMode __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEScanningMode;






































/*
 *
 * Struct Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementFlags
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementFlags
{
    BluetoothLEAdvertisementFlags_None = 0,
    BluetoothLEAdvertisementFlags_LimitedDiscoverableMode = 0x1,
    BluetoothLEAdvertisementFlags_GeneralDiscoverableMode = 0x2,
    BluetoothLEAdvertisementFlags_ClassicNotSupported = 0x4,
    BluetoothLEAdvertisementFlags_DualModeControllerCapable = 0x8,
    BluetoothLEAdvertisementFlags_DualModeHostCapable = 0x10,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisherStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementPublisherStatus
{
    BluetoothLEAdvertisementPublisherStatus_Created = 0,
    BluetoothLEAdvertisementPublisherStatus_Waiting = 1,
    BluetoothLEAdvertisementPublisherStatus_Started = 2,
    BluetoothLEAdvertisementPublisherStatus_Stopping = 3,
    BluetoothLEAdvertisementPublisherStatus_Stopped = 4,
    BluetoothLEAdvertisementPublisherStatus_Aborted = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementType
{
    BluetoothLEAdvertisementType_ConnectableUndirected = 0,
    BluetoothLEAdvertisementType_ConnectableDirected = 1,
    BluetoothLEAdvertisementType_ScannableUndirected = 2,
    BluetoothLEAdvertisementType_NonConnectableUndirected = 3,
    BluetoothLEAdvertisementType_ScanResponse = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcherStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementWatcherStatus
{
    BluetoothLEAdvertisementWatcherStatus_Created = 0,
    BluetoothLEAdvertisementWatcherStatus_Started = 1,
    BluetoothLEAdvertisementWatcherStatus_Stopping = 2,
    BluetoothLEAdvertisementWatcherStatus_Stopped = 3,
    BluetoothLEAdvertisementWatcherStatus_Aborted = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Bluetooth.Advertisement.BluetoothLEScanningMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEScanningMode
{
    BluetoothLEScanningMode_Passive = 0,
    BluetoothLEScanningMode_Active = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisement[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisement";
/* [object, uuid("066FB2B7-33D1-4E7D-8367-CF81D0F79653"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Flags )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Flags )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementFlags * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalName )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LocalName )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceUuids )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_GUID * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ManufacturerData )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataSections )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetManufacturerDataByCompanyId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * This,
        /* [in] */UINT16 companyId,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEManufacturerData * * dataList
        );
    HRESULT ( STDMETHODCALLTYPE *GetSectionsByType )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * This,
        /* [in] */BYTE type,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementDataSection * * sectionList
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_get_Flags(This,value) \
    ( (This)->lpVtbl->get_Flags(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_put_Flags(This,value) \
    ( (This)->lpVtbl->put_Flags(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_get_LocalName(This,value) \
    ( (This)->lpVtbl->get_LocalName(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_put_LocalName(This,value) \
    ( (This)->lpVtbl->put_LocalName(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_get_ServiceUuids(This,value) \
    ( (This)->lpVtbl->get_ServiceUuids(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_get_ManufacturerData(This,value) \
    ( (This)->lpVtbl->get_ManufacturerData(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_get_DataSections(This,value) \
    ( (This)->lpVtbl->get_DataSections(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_GetManufacturerDataByCompanyId(This,companyId,dataList) \
    ( (This)->lpVtbl->GetManufacturerDataByCompanyId(This,companyId,dataList) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_GetSectionsByType(This,type,sectionList) \
    ( (This)->lpVtbl->GetSectionsByType(This,type,sectionList) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementBytePattern
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementBytePattern
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementBytePattern[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementBytePattern";
/* [object, uuid("FBFAD7F2-B9C5-4A08-BC51-502F8EF68A79"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataType )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DataType )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * This,
        /* [retval, out] */__RPC__out INT16 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Offset )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * This,
        /* [in] */INT16 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_get_DataType(This,value) \
    ( (This)->lpVtbl->get_DataType(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_put_DataType(This,value) \
    ( (This)->lpVtbl->put_DataType(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_get_Offset(This,value) \
    ( (This)->lpVtbl->get_Offset(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_put_Offset(This,value) \
    ( (This)->lpVtbl->put_Offset(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_get_Data(This,value) \
    ( (This)->lpVtbl->get_Data(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_put_Data(This,value) \
    ( (This)->lpVtbl->put_Data(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementBytePatternFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementBytePattern
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementBytePatternFactory[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementBytePatternFactory";
/* [object, uuid("C2E24D73-FD5C-4EC3-BE2A-9CA6FA11B7BD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory * This,
        /* [in] */BYTE dataType,
        /* [in] */INT16 offset,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePattern * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_Create(This,dataType,offset,data,value) \
    ( (This)->lpVtbl->Create(This,dataType,offset,data,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementBytePatternFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataSection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataSection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataSection[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataSection";
/* [object, uuid("D7213314-3A43-40F9-B6F0-92BFEFC34AE3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataType )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DataType )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_get_DataType(This,value) \
    ( (This)->lpVtbl->get_DataType(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_put_DataType(This,value) \
    ( (This)->lpVtbl->put_DataType(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_get_Data(This,value) \
    ( (This)->lpVtbl->get_Data(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_put_Data(This,value) \
    ( (This)->lpVtbl->put_Data(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataSectionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataSection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataSectionFactory[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataSectionFactory";
/* [object, uuid("E7A40942-A845-4045-BF7E-3E9971DB8A6B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory * This,
        /* [in] */BYTE dataType,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSection * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_Create(This,dataType,data,value) \
    ( (This)->lpVtbl->Create(This,dataType,data,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataSectionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataTypesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataTypes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataTypesStatics";
/* [object, uuid("3BB6472F-0606-434B-A76E-74159F0684D3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Flags )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncompleteService16BitUuids )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CompleteService16BitUuids )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncompleteService32BitUuids )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CompleteService32BitUuids )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncompleteService128BitUuids )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CompleteService128BitUuids )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShortenedLocalName )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CompleteLocalName )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TxPowerLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SlaveConnectionIntervalRange )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceSolicitation16BitUuids )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceSolicitation32BitUuids )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceSolicitation128BitUuids )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceData16BitUuids )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceData32BitUuids )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceData128BitUuids )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PublicTargetAddress )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RandomTargetAddress )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Appearance )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AdvertisingInterval )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ManufacturerSpecificData )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_Flags(This,value) \
    ( (This)->lpVtbl->get_Flags(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_IncompleteService16BitUuids(This,value) \
    ( (This)->lpVtbl->get_IncompleteService16BitUuids(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_CompleteService16BitUuids(This,value) \
    ( (This)->lpVtbl->get_CompleteService16BitUuids(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_IncompleteService32BitUuids(This,value) \
    ( (This)->lpVtbl->get_IncompleteService32BitUuids(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_CompleteService32BitUuids(This,value) \
    ( (This)->lpVtbl->get_CompleteService32BitUuids(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_IncompleteService128BitUuids(This,value) \
    ( (This)->lpVtbl->get_IncompleteService128BitUuids(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_CompleteService128BitUuids(This,value) \
    ( (This)->lpVtbl->get_CompleteService128BitUuids(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_ShortenedLocalName(This,value) \
    ( (This)->lpVtbl->get_ShortenedLocalName(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_CompleteLocalName(This,value) \
    ( (This)->lpVtbl->get_CompleteLocalName(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_TxPowerLevel(This,value) \
    ( (This)->lpVtbl->get_TxPowerLevel(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_SlaveConnectionIntervalRange(This,value) \
    ( (This)->lpVtbl->get_SlaveConnectionIntervalRange(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_ServiceSolicitation16BitUuids(This,value) \
    ( (This)->lpVtbl->get_ServiceSolicitation16BitUuids(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_ServiceSolicitation32BitUuids(This,value) \
    ( (This)->lpVtbl->get_ServiceSolicitation32BitUuids(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_ServiceSolicitation128BitUuids(This,value) \
    ( (This)->lpVtbl->get_ServiceSolicitation128BitUuids(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_ServiceData16BitUuids(This,value) \
    ( (This)->lpVtbl->get_ServiceData16BitUuids(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_ServiceData32BitUuids(This,value) \
    ( (This)->lpVtbl->get_ServiceData32BitUuids(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_ServiceData128BitUuids(This,value) \
    ( (This)->lpVtbl->get_ServiceData128BitUuids(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_PublicTargetAddress(This,value) \
    ( (This)->lpVtbl->get_PublicTargetAddress(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_RandomTargetAddress(This,value) \
    ( (This)->lpVtbl->get_RandomTargetAddress(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_Appearance(This,value) \
    ( (This)->lpVtbl->get_Appearance(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_AdvertisingInterval(This,value) \
    ( (This)->lpVtbl->get_AdvertisingInterval(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_get_ManufacturerSpecificData(This,value) \
    ( (This)->lpVtbl->get_ManufacturerSpecificData(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementDataTypesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementFilter[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementFilter";
/* [object, uuid("131EB0D3-D04E-47B1-837E-49405BF6F80F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Advertisement )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Advertisement )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BytePatterns )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementBytePattern * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilterVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_get_Advertisement(This,value) \
    ( (This)->lpVtbl->get_Advertisement(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_put_Advertisement(This,value) \
    ( (This)->lpVtbl->put_Advertisement(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_get_BytePatterns(This,value) \
    ( (This)->lpVtbl->get_BytePatterns(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisher[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisher";
/* [object, uuid("CDE820F9-D9FA-43D6-A264-DDD8B7DA8B78"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementPublisherStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Advertisement )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher * This
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StatusChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementPublisherStatusChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StatusChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_get_Advertisement(This,value) \
    ( (This)->lpVtbl->get_Advertisement(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_add_StatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_StatusChanged(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_remove_StatusChanged(This,token) \
    ( (This)->lpVtbl->remove_StatusChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisherFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisherFactory[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisherFactory";
/* [object, uuid("5C5F065E-B863-4981-A1AF-1C544D8B0C0D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * advertisement,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisher * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_Create(This,advertisement,value) \
    ( (This)->lpVtbl->Create(This,advertisement,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisherStatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisherStatusChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisherStatusChangedEventArgs[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisherStatusChangedEventArgs";
/* [object, uuid("09C2BD9F-2DFF-4B23-86EE-0D14FB94AEAE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementPublisherStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_get_Error(This,value) \
    ( (This)->lpVtbl->get_Error(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementPublisherStatusChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementReceivedEventArgs[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementReceivedEventArgs";
/* [object, uuid("27987DDF-E596-41BE-8D43-9E6731D4A913"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RawSignalStrengthInDBm )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * This,
        /* [retval, out] */__RPC__out INT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BluetoothAddress )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AdvertisementType )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Advertisement )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_get_RawSignalStrengthInDBm(This,value) \
    ( (This)->lpVtbl->get_RawSignalStrengthInDBm(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_get_BluetoothAddress(This,value) \
    ( (This)->lpVtbl->get_BluetoothAddress(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_get_AdvertisementType(This,value) \
    ( (This)->lpVtbl->get_AdvertisementType(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_get_Advertisement(This,value) \
    ( (This)->lpVtbl->get_Advertisement(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcher";
/* [object, uuid("A6AC336F-F3D3-4297-8D6C-C81EA6623F40"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinSamplingInterval )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxSamplingInterval )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinOutOfRangeTimeout )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxOutOfRangeTimeout )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementWatcherStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScanningMode )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEScanningMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ScanningMode )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
        /* [in] */__x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEScanningMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SignalStrengthFilter )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SignalStrengthFilter )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AdvertisementFilter )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AdvertisementFilter )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter * value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Received )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Received )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcher_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementWatcherStoppedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_get_MinSamplingInterval(This,value) \
    ( (This)->lpVtbl->get_MinSamplingInterval(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_get_MaxSamplingInterval(This,value) \
    ( (This)->lpVtbl->get_MaxSamplingInterval(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_get_MinOutOfRangeTimeout(This,value) \
    ( (This)->lpVtbl->get_MinOutOfRangeTimeout(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_get_MaxOutOfRangeTimeout(This,value) \
    ( (This)->lpVtbl->get_MaxOutOfRangeTimeout(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_get_ScanningMode(This,value) \
    ( (This)->lpVtbl->get_ScanningMode(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_put_ScanningMode(This,value) \
    ( (This)->lpVtbl->put_ScanningMode(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_get_SignalStrengthFilter(This,value) \
    ( (This)->lpVtbl->get_SignalStrengthFilter(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_put_SignalStrengthFilter(This,value) \
    ( (This)->lpVtbl->put_SignalStrengthFilter(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_get_AdvertisementFilter(This,value) \
    ( (This)->lpVtbl->get_AdvertisementFilter(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_put_AdvertisementFilter(This,value) \
    ( (This)->lpVtbl->put_AdvertisementFilter(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_add_Received(This,handler,token) \
    ( (This)->lpVtbl->add_Received(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_remove_Received(This,token) \
    ( (This)->lpVtbl->remove_Received(This,token) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_add_Stopped(This,handler,token) \
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_remove_Stopped(This,token) \
    ( (This)->lpVtbl->remove_Stopped(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcherFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcherFactory[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcherFactory";
/* [object, uuid("9AAF2D56-39AC-453E-B32A-85C657E017F1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter * advertisementFilter,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcher * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_Create(This,advertisementFilter,value) \
    ( (This)->lpVtbl->Create(This,advertisementFilter,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcherStoppedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcherStoppedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcherStoppedEventArgs[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcherStoppedEventArgs";
/* [object, uuid("DD40F84D-E7B9-43E3-9C04-0685D085FD8C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_get_Error(This,value) \
    ( (This)->lpVtbl->get_Error(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementWatcherStoppedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEManufacturerData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEManufacturerData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEManufacturerData[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEManufacturerData";
/* [object, uuid("912DBA18-6963-4533-B061-4694DAFB34E5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CompanyId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CompanyId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * This,
        /* [in] */UINT16 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_get_CompanyId(This,value) \
    ( (This)->lpVtbl->get_CompanyId(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_put_CompanyId(This,value) \
    ( (This)->lpVtbl->put_CompanyId(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_get_Data(This,value) \
    ( (This)->lpVtbl->get_Data(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_put_Data(This,value) \
    ( (This)->lpVtbl->put_Data(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Advertisement.IBluetoothLEManufacturerDataFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Advertisement.BluetoothLEManufacturerData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEManufacturerDataFactory[] = L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEManufacturerDataFactory";
/* [object, uuid("C09B39F8-319A-441E-8DE5-66A81E877A6C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory * This,
        /* [in] */UINT16 companyId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerData * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_Create(This,companyId,data,value) \
    ( (This)->lpVtbl->Create(This,companyId,data,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEManufacturerDataFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisement ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisement_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisement_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisement[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisement";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementBytePattern
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementBytePatternFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementBytePattern ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementBytePattern_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementBytePattern_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementBytePattern[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementBytePattern";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataSection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataSectionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataSection ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementDataSection_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementDataSection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementDataSection[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataSection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataTypes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataTypesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementDataTypes_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementDataTypes_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementDataTypes[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataTypes";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementFilter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementFilter_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementFilter[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisherFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisher ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementPublisher_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementPublisher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementPublisher[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisherStatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisherStatusChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementPublisherStatusChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementPublisherStatusChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementPublisherStatusChangedEventArgs[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisherStatusChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementReceivedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementReceivedEventArgs[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcherFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcher ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementWatcher_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementWatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementWatcher[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcherStoppedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcherStoppedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementWatcherStoppedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementWatcherStoppedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEAdvertisementWatcherStoppedEventArgs[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcherStoppedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Advertisement.BluetoothLEManufacturerData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Devices.Bluetooth.Advertisement.IBluetoothLEManufacturerDataFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Advertisement.IBluetoothLEManufacturerData ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEManufacturerData_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Advertisement_BluetoothLEManufacturerData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Advertisement_BluetoothLEManufacturerData[] = L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEManufacturerData";
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
#endif // __windows2Edevices2Ebluetooth2Eadvertisement_p_h__

#endif // __windows2Edevices2Ebluetooth2Eadvertisement_h__
