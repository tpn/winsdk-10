/* Header file automatically generated from windows.devices.usb.idl */
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
#ifndef __windows2Edevices2Eusb_h__
#define __windows2Edevices2Eusb_h__
#ifndef __windows2Edevices2Eusb_p_h__
#define __windows2Edevices2Eusb_p_h__


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
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbBulkInEndpointDescriptor;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor ABI::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbBulkInPipe;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe ABI::Windows::Devices::Usb::IUsbBulkInPipe

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbBulkOutEndpointDescriptor;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor ABI::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbBulkOutPipe;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe ABI::Windows::Devices::Usb::IUsbBulkOutPipe

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbConfiguration;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration ABI::Windows::Devices::Usb::IUsbConfiguration

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbConfigurationDescriptor;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor ABI::Windows::Devices::Usb::IUsbConfigurationDescriptor

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbConfigurationDescriptorStatics;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics ABI::Windows::Devices::Usb::IUsbConfigurationDescriptorStatics

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbControlRequestType;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType ABI::Windows::Devices::Usb::IUsbControlRequestType

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbDescriptor;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor ABI::Windows::Devices::Usb::IUsbDescriptor

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbDevice;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice ABI::Windows::Devices::Usb::IUsbDevice

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbDeviceClass;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass ABI::Windows::Devices::Usb::IUsbDeviceClass

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbDeviceClasses;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses ABI::Windows::Devices::Usb::IUsbDeviceClasses

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbDeviceClassesStatics;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics ABI::Windows::Devices::Usb::IUsbDeviceClassesStatics

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbDeviceDescriptor;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor ABI::Windows::Devices::Usb::IUsbDeviceDescriptor

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbDeviceStatics;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics ABI::Windows::Devices::Usb::IUsbDeviceStatics

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbEndpointDescriptor;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor ABI::Windows::Devices::Usb::IUsbEndpointDescriptor

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbEndpointDescriptorStatics;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics ABI::Windows::Devices::Usb::IUsbEndpointDescriptorStatics

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbInterface;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface ABI::Windows::Devices::Usb::IUsbInterface

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbInterfaceDescriptor;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor ABI::Windows::Devices::Usb::IUsbInterfaceDescriptor

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbInterfaceDescriptorStatics;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics ABI::Windows::Devices::Usb::IUsbInterfaceDescriptorStatics

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbInterfaceSetting;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting ABI::Windows::Devices::Usb::IUsbInterfaceSetting

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbInterruptInEndpointDescriptor;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor ABI::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbInterruptInEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs ABI::Windows::Devices::Usb::IUsbInterruptInEventArgs

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbInterruptInPipe;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe ABI::Windows::Devices::Usb::IUsbInterruptInPipe

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbInterruptOutEndpointDescriptor;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor ABI::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbInterruptOutPipe;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe ABI::Windows::Devices::Usb::IUsbInterruptOutPipe

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbSetupPacket;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket ABI::Windows::Devices::Usb::IUsbSetupPacket

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                interface IUsbSetupPacketFactory;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory ABI::Windows::Devices::Usb::IUsbSetupPacketFactory

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbBulkInEndpointDescriptor;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_USE
#define DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ea511030-89c4-503d-8caf-667f4230d2a9"))
IIterator<ABI::Windows::Devices::Usb::UsbBulkInEndpointDescriptor*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbBulkInEndpointDescriptor*, ABI::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Usb.UsbBulkInEndpointDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Usb::UsbBulkInEndpointDescriptor*> __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_t;
#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor*>
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_USE
#define DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("101b1fd9-f1c9-5dda-9ad4-71176fa839b2"))
IIterable<ABI::Windows::Devices::Usb::UsbBulkInEndpointDescriptor*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbBulkInEndpointDescriptor*, ABI::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Usb.UsbBulkInEndpointDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Usb::UsbBulkInEndpointDescriptor*> __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_t;
#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor*>
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbBulkInPipe;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_USE
#define DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d7af2c5b-528d-5cbb-a997-d830ade704c7"))
IIterator<ABI::Windows::Devices::Usb::UsbBulkInPipe*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbBulkInPipe*, ABI::Windows::Devices::Usb::IUsbBulkInPipe*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Usb.UsbBulkInPipe>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Usb::UsbBulkInPipe*> __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_t;
#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbBulkInPipe*>
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbBulkInPipe*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe_USE
#define DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2201a671-42d2-508d-a848-64b5447083c8"))
IIterable<ABI::Windows::Devices::Usb::UsbBulkInPipe*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbBulkInPipe*, ABI::Windows::Devices::Usb::IUsbBulkInPipe*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Usb.UsbBulkInPipe>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Usb::UsbBulkInPipe*> __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe_t;
#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbBulkInPipe*>
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbBulkInPipe*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbBulkOutEndpointDescriptor;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_USE
#define DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a8b89ab3-883d-5361-9903-f489cc62bea5"))
IIterator<ABI::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor*, ABI::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Usb.UsbBulkOutEndpointDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor*> __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_t;
#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor*>
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_USE
#define DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b80beb39-62b3-5f59-b3e7-882cc9c5b0c0"))
IIterable<ABI::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor*, ABI::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Usb.UsbBulkOutEndpointDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor*> __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_t;
#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor*>
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbBulkOutPipe;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_USE
#define DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("46dd2f6a-573b-5c45-b168-9223038491dd"))
IIterator<ABI::Windows::Devices::Usb::UsbBulkOutPipe*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbBulkOutPipe*, ABI::Windows::Devices::Usb::IUsbBulkOutPipe*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Usb.UsbBulkOutPipe>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Usb::UsbBulkOutPipe*> __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_t;
#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbBulkOutPipe*>
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbBulkOutPipe*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_USE
#define DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9824caba-5ca6-5c2d-80cf-1949026d7857"))
IIterable<ABI::Windows::Devices::Usb::UsbBulkOutPipe*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbBulkOutPipe*, ABI::Windows::Devices::Usb::IUsbBulkOutPipe*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Usb.UsbBulkOutPipe>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Usb::UsbBulkOutPipe*> __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_t;
#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbBulkOutPipe*>
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbBulkOutPipe*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbDescriptor;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_USE
#define DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("521598ed-0167-528e-990d-52abb712f072"))
IIterator<ABI::Windows::Devices::Usb::UsbDescriptor*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbDescriptor*, ABI::Windows::Devices::Usb::IUsbDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Usb.UsbDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Usb::UsbDescriptor*> __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_t;
#define __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbDescriptor*>
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor_USE
#define DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("989909a5-5a03-51fb-bd94-84da7bda8819"))
IIterable<ABI::Windows::Devices::Usb::UsbDescriptor*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbDescriptor*, ABI::Windows::Devices::Usb::IUsbDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Usb.UsbDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Usb::UsbDescriptor*> __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor_t;
#define __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbDescriptor*>
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbInterface;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_USE
#define DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("216b5a5f-63e3-5a9b-9c99-b09cbc0ff3b1"))
IIterator<ABI::Windows::Devices::Usb::UsbInterface*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterface*, ABI::Windows::Devices::Usb::IUsbInterface*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Usb.UsbInterface>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Usb::UsbInterface*> __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_t;
#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbInterface*>
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbInterface*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbInterface_USE
#define DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbInterface_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f54037ed-92e9-590d-b904-3ad7bfa9a621"))
IIterable<ABI::Windows::Devices::Usb::UsbInterface*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterface*, ABI::Windows::Devices::Usb::IUsbInterface*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Usb.UsbInterface>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Usb::UsbInterface*> __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface_t;
#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CUsb__CUsbInterface_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbInterface*>
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbInterface*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbInterface_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbInterfaceSetting;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_USE
#define DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("71267ec7-5697-5dea-b2f8-14cf698ec0ad"))
IIterator<ABI::Windows::Devices::Usb::UsbInterfaceSetting*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterfaceSetting*, ABI::Windows::Devices::Usb::IUsbInterfaceSetting*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Usb.UsbInterfaceSetting>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Usb::UsbInterfaceSetting*> __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_t;
#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbInterfaceSetting*>
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbInterfaceSetting*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_USE
#define DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1aaf5739-9c2c-533e-a0e9-d53fdb45d15d"))
IIterable<ABI::Windows::Devices::Usb::UsbInterfaceSetting*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterfaceSetting*, ABI::Windows::Devices::Usb::IUsbInterfaceSetting*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Usb.UsbInterfaceSetting>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Usb::UsbInterfaceSetting*> __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_t;
#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbInterfaceSetting*>
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbInterfaceSetting*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbInterruptInEndpointDescriptor;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_USE
#define DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6717500f-ec1c-5b12-bf33-0e3e3d244587"))
IIterator<ABI::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor*, ABI::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Usb.UsbInterruptInEndpointDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor*> __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_t;
#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor*>
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_USE
#define DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8a7bac69-1f10-59c7-9837-72cfed7154a4"))
IIterable<ABI::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor*, ABI::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Usb.UsbInterruptInEndpointDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor*> __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_t;
#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor*>
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbInterruptInPipe;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_USE
#define DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e3a7b1c0-74f6-5292-a22a-672aa2b49985"))
IIterator<ABI::Windows::Devices::Usb::UsbInterruptInPipe*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterruptInPipe*, ABI::Windows::Devices::Usb::IUsbInterruptInPipe*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Usb.UsbInterruptInPipe>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Usb::UsbInterruptInPipe*> __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_t;
#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbInterruptInPipe*>
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbInterruptInPipe*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_USE
#define DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("39aef336-18aa-5be4-86d9-e332fe2632f3"))
IIterable<ABI::Windows::Devices::Usb::UsbInterruptInPipe*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterruptInPipe*, ABI::Windows::Devices::Usb::IUsbInterruptInPipe*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Usb.UsbInterruptInPipe>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Usb::UsbInterruptInPipe*> __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_t;
#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbInterruptInPipe*>
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbInterruptInPipe*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbInterruptOutEndpointDescriptor;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_USE
#define DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4b6426db-db32-5b51-adad-04532ea94acd"))
IIterator<ABI::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor*, ABI::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Usb.UsbInterruptOutEndpointDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor*> __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_t;
#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor*>
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_USE
#define DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("09393d62-2316-536b-8a10-7038884ab2a7"))
IIterable<ABI::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor*, ABI::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Usb.UsbInterruptOutEndpointDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor*> __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_t;
#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor*>
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbInterruptOutPipe;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_USE
#define DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cbd8d8a8-2286-5cbd-a6e4-962742ffd91a"))
IIterator<ABI::Windows::Devices::Usb::UsbInterruptOutPipe*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterruptOutPipe*, ABI::Windows::Devices::Usb::IUsbInterruptOutPipe*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Usb.UsbInterruptOutPipe>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Usb::UsbInterruptOutPipe*> __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_t;
#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbInterruptOutPipe*>
//#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Usb::IUsbInterruptOutPipe*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_USE
#define DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e61a011e-4abe-53f2-83b3-ed4a949d2e3f"))
IIterable<ABI::Windows::Devices::Usb::UsbInterruptOutPipe*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterruptOutPipe*, ABI::Windows::Devices::Usb::IUsbInterruptOutPipe*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Usb.UsbInterruptOutPipe>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Usb::UsbInterruptOutPipe*> __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_t;
#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbInterruptOutPipe*>
//#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Usb::IUsbInterruptOutPipe*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_USE
#define DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9c69ac78-309e-5763-af26-9706ffa47ec0"))
IVectorView<ABI::Windows::Devices::Usb::UsbBulkInEndpointDescriptor*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbBulkInEndpointDescriptor*, ABI::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Usb.UsbBulkInEndpointDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Usb::UsbBulkInEndpointDescriptor*> __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_t;
#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor*>
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_USE
#define DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a93c84bc-6484-5959-b61a-703cc7115f6f"))
IVectorView<ABI::Windows::Devices::Usb::UsbBulkInPipe*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbBulkInPipe*, ABI::Windows::Devices::Usb::IUsbBulkInPipe*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Usb.UsbBulkInPipe>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Usb::UsbBulkInPipe*> __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_t;
#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbBulkInPipe*>
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbBulkInPipe*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_USE
#define DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("22a53676-a3ea-5dcd-bb39-b28a5327c4a3"))
IVectorView<ABI::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor*, ABI::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Usb.UsbBulkOutEndpointDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor*> __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_t;
#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor*>
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_USE
#define DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0a873512-15f1-5e8e-a72a-045cfd7a5e83"))
IVectorView<ABI::Windows::Devices::Usb::UsbBulkOutPipe*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbBulkOutPipe*, ABI::Windows::Devices::Usb::IUsbBulkOutPipe*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Usb.UsbBulkOutPipe>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Usb::UsbBulkOutPipe*> __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_t;
#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbBulkOutPipe*>
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbBulkOutPipe*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_USE
#define DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5408baa2-291e-537a-b61f-137062f7ff7d"))
IVectorView<ABI::Windows::Devices::Usb::UsbDescriptor*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbDescriptor*, ABI::Windows::Devices::Usb::IUsbDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Usb.UsbDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Usb::UsbDescriptor*> __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_t;
#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbDescriptor*>
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_USE
#define DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9c69ec7f-2e42-58cd-a74a-f4974811134d"))
IVectorView<ABI::Windows::Devices::Usb::UsbInterface*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterface*, ABI::Windows::Devices::Usb::IUsbInterface*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Usb.UsbInterface>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Usb::UsbInterface*> __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_t;
#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbInterface*>
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbInterface*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_USE
#define DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("71194af7-77c2-54d5-a116-287f0b7fd53f"))
IVectorView<ABI::Windows::Devices::Usb::UsbInterfaceSetting*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterfaceSetting*, ABI::Windows::Devices::Usb::IUsbInterfaceSetting*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Usb.UsbInterfaceSetting>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Usb::UsbInterfaceSetting*> __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_t;
#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbInterfaceSetting*>
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbInterfaceSetting*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_USE
#define DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3fc7f890-218e-5057-904d-6387c591cc93"))
IVectorView<ABI::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor*, ABI::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Usb.UsbInterruptInEndpointDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor*> __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_t;
#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor*>
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_USE
#define DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("37469574-b4c5-5ba0-9616-894dd822ff5b"))
IVectorView<ABI::Windows::Devices::Usb::UsbInterruptInPipe*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterruptInPipe*, ABI::Windows::Devices::Usb::IUsbInterruptInPipe*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Usb.UsbInterruptInPipe>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Usb::UsbInterruptInPipe*> __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_t;
#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbInterruptInPipe*>
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbInterruptInPipe*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_USE
#define DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("984e7e15-c5ac-5140-a3c0-b583190085d7"))
IVectorView<ABI::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor*, ABI::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Usb.UsbInterruptOutEndpointDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor*> __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_t;
#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor*>
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_USE
#define DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("748196c8-83bf-5ec3-8d28-a3112b3ee3cc"))
IVectorView<ABI::Windows::Devices::Usb::UsbInterruptOutPipe*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterruptOutPipe*, ABI::Windows::Devices::Usb::IUsbInterruptOutPipe*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Usb.UsbInterruptOutPipe>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Usb::UsbInterruptOutPipe*> __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_t;
#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbInterruptOutPipe*>
//#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Usb::IUsbInterruptOutPipe*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbDevice;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7331254f-6caf-587d-9c2a-018c66d312db"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Usb::UsbDevice*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbDevice*, ABI::Windows::Devices::Usb::IUsbDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Usb.UsbDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Usb::UsbDevice*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Usb::IUsbDevice*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Usb::IUsbDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2138c5ed-b71a-5166-9948-d55792748f5c"))
IAsyncOperation<ABI::Windows::Devices::Usb::UsbDevice*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbDevice*, ABI::Windows::Devices::Usb::IUsbDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Usb.UsbDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Usb::UsbDevice*> __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice_t;
#define __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Usb::IUsbDevice*>
//#define __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Usb::IUsbDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbInterruptInEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e6db9449-f36a-50f2-926c-2afd85c49f01"))
ITypedEventHandler<ABI::Windows::Devices::Usb::UsbInterruptInPipe*,ABI::Windows::Devices::Usb::UsbInterruptInEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterruptInPipe*, ABI::Windows::Devices::Usb::IUsbInterruptInPipe*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Usb::UsbInterruptInEventArgs*, ABI::Windows::Devices::Usb::IUsbInterruptInEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Usb.UsbInterruptInPipe, Windows.Devices.Usb.UsbInterruptInEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Usb::UsbInterruptInPipe*,ABI::Windows::Devices::Usb::UsbInterruptInEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Usb::IUsbInterruptInPipe*,ABI::Windows::Devices::Usb::IUsbInterruptInEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Usb::IUsbInterruptInPipe*,ABI::Windows::Devices::Usb::IUsbInterruptInEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIAsyncOperationCompletedHandler_1_UINT32_USE
#define DEF___FIAsyncOperationCompletedHandler_1_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9343b6e7-e3d2-5e4a-ab2d-2bce4919a6a4"))
IAsyncOperationCompletedHandler<UINT32> : IAsyncOperationCompletedHandler_impl<UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<UINT32> __FIAsyncOperationCompletedHandler_1_UINT32_t;
#define __FIAsyncOperationCompletedHandler_1_UINT32 ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_UINT32 ABI::Windows::Foundation::IAsyncOperationCompletedHandler<UINT32>
//#define __FIAsyncOperationCompletedHandler_1_UINT32_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_UINT32_USE */




#ifndef DEF___FIAsyncOperation_1_UINT32_USE
#define DEF___FIAsyncOperation_1_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ef60385f-be78-584b-aaef-7829ada2b0de"))
IAsyncOperation<UINT32> : IAsyncOperation_impl<UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<UINT32> __FIAsyncOperation_1_UINT32_t;
#define __FIAsyncOperation_1_UINT32 ABI::Windows::Foundation::__FIAsyncOperation_1_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_UINT32 ABI::Windows::Foundation::IAsyncOperation<UINT32>
//#define __FIAsyncOperation_1_UINT32_t ABI::Windows::Foundation::IAsyncOperation<UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_UINT32_USE */



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

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("51c3d2fd-b8a1-5620-b746-7ee6d533aca3"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3bee8834-b9a7-5a80-a746-5ef097227878"))
IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                
                typedef enum UsbControlRecipient : int UsbControlRecipient;
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                
                typedef enum UsbControlTransferType : int UsbControlTransferType;
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                
                typedef enum UsbEndpointType : int UsbEndpointType;
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                
                typedef enum UsbReadOptions : unsigned int UsbReadOptions;
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                
                typedef enum UsbTransferDirection : int UsbTransferDirection;
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                
                typedef enum UsbWriteOptions : unsigned int UsbWriteOptions;
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

































namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbConfiguration;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbConfigurationDescriptor;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbControlRequestType;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbDeviceClass;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbDeviceClasses;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbDeviceDescriptor;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbEndpointDescriptor;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbInterfaceDescriptor;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */








namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                class UsbSetupPacket;
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */










/*
 *
 * Struct Windows.Devices.Usb.UsbControlRecipient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [v1_enum, contract] */
                enum UsbControlRecipient : int
                {
                    UsbControlRecipient_Device = 0,
                    UsbControlRecipient_SpecifiedInterface = 1,
                    UsbControlRecipient_Endpoint = 2,
                    UsbControlRecipient_Other = 3,
                    UsbControlRecipient_DefaultInterface = 4,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Usb.UsbControlTransferType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [v1_enum, contract] */
                enum UsbControlTransferType : int
                {
                    UsbControlTransferType_Standard = 0,
                    UsbControlTransferType_Class = 1,
                    UsbControlTransferType_Vendor = 2,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Usb.UsbEndpointType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [v1_enum, contract] */
                enum UsbEndpointType : int
                {
                    UsbEndpointType_Control = 0,
                    UsbEndpointType_Isochronous = 1,
                    UsbEndpointType_Bulk = 2,
                    UsbEndpointType_Interrupt = 3,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Usb.UsbReadOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [v1_enum, flags, contract] */
                enum UsbReadOptions : unsigned int
                {
                    UsbReadOptions_None = 0,
                    UsbReadOptions_AutoClearStall = 0x1,
                    UsbReadOptions_OverrideAutomaticBufferManagement = 0x2,
                    UsbReadOptions_IgnoreShortPacket = 0x4,
                    UsbReadOptions_AllowPartialReads = 0x8,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(UsbReadOptions)
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Usb.UsbTransferDirection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [v1_enum, contract] */
                enum UsbTransferDirection : int
                {
                    UsbTransferDirection_Out = 0,
                    UsbTransferDirection_In = 1,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Usb.UsbWriteOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [v1_enum, flags, contract] */
                enum UsbWriteOptions : unsigned int
                {
                    UsbWriteOptions_None = 0,
                    UsbWriteOptions_AutoClearStall = 0x1,
                    UsbWriteOptions_ShortPacketTerminate = 0x2,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(UsbWriteOptions)
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbBulkInEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbBulkInEndpointDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbBulkInEndpointDescriptor[] = L"Windows.Devices.Usb.IUsbBulkInEndpointDescriptor";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("3C6E4846-06CF-42A9-9DC2-971C1B14B6E3"), exclusiveto, contract] */
                MIDL_INTERFACE("3C6E4846-06CF-42A9-9DC2-971C1B14B6E3")
                IUsbBulkInEndpointDescriptor : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxPacketSize(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EndpointNumber(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pipe(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbBulkInPipe * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbBulkInEndpointDescriptor=_uuidof(IUsbBulkInEndpointDescriptor);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbBulkInPipe
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbBulkInPipe
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbBulkInPipe[] = L"Windows.Devices.Usb.IUsbBulkInPipe";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("F01D2D3B-4548-4D50-B326-D82CDABE1220"), exclusiveto, contract] */
                MIDL_INTERFACE("F01D2D3B-4548-4D50-B326-D82CDABE1220")
                IUsbBulkInPipe : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxTransferSizeBytes(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EndpointDescriptor(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ClearStallAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReadOptions(
                        /* [in] */ABI::Windows::Devices::Usb::UsbReadOptions value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReadOptions(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Usb::UsbReadOptions * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FlushBuffer(void) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IInputStream * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbBulkInPipe=_uuidof(IUsbBulkInPipe);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbBulkOutEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbBulkOutEndpointDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbBulkOutEndpointDescriptor[] = L"Windows.Devices.Usb.IUsbBulkOutEndpointDescriptor";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("2820847A-FFEE-4F60-9BE1-956CAC3ECB65"), exclusiveto, contract] */
                MIDL_INTERFACE("2820847A-FFEE-4F60-9BE1-956CAC3ECB65")
                IUsbBulkOutEndpointDescriptor : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxPacketSize(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EndpointNumber(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pipe(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbBulkOutPipe * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbBulkOutEndpointDescriptor=_uuidof(IUsbBulkOutEndpointDescriptor);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbBulkOutPipe
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbBulkOutPipe
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbBulkOutPipe[] = L"Windows.Devices.Usb.IUsbBulkOutPipe";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("A8E9EE6E-0115-45AA-8B21-37B225BCCEE7"), exclusiveto, contract] */
                MIDL_INTERFACE("A8E9EE6E-0115-45AA-8B21-37B225BCCEE7")
                IUsbBulkOutPipe : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EndpointDescriptor(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ClearStallAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_WriteOptions(
                        /* [in] */ABI::Windows::Devices::Usb::UsbWriteOptions value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WriteOptions(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Usb::UsbWriteOptions * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutputStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IOutputStream * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbBulkOutPipe=_uuidof(IUsbBulkOutPipe);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbConfiguration[] = L"Windows.Devices.Usb.IUsbConfiguration";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("68177429-36A9-46D7-B873-FC689251EC30"), exclusiveto, contract] */
                MIDL_INTERFACE("68177429-36A9-46D7-B873-FC689251EC30")
                IUsbConfiguration : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsbInterfaces(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConfigurationDescriptor(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbConfigurationDescriptor * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Descriptors(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbConfiguration=_uuidof(IUsbConfiguration);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbConfigurationDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbConfigurationDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbConfigurationDescriptor[] = L"Windows.Devices.Usb.IUsbConfigurationDescriptor";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("F2176D92-B442-407A-8207-7D646C0385F3"), exclusiveto, contract] */
                MIDL_INTERFACE("F2176D92-B442-407A-8207-7D646C0385F3")
                IUsbConfigurationDescriptor : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConfigurationValue(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxPowerMilliamps(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelfPowered(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteWakeup(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbConfigurationDescriptor=_uuidof(IUsbConfigurationDescriptor);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbConfigurationDescriptorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbConfigurationDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbConfigurationDescriptorStatics[] = L"Windows.Devices.Usb.IUsbConfigurationDescriptorStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("424CED93-E740-40A1-92BD-DA120EA04914"), exclusiveto, contract] */
                MIDL_INTERFACE("424CED93-E740-40A1-92BD-DA120EA04914")
                IUsbConfigurationDescriptorStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE TryParse(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Usb::IUsbDescriptor * descriptor,
                        /* [out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbConfigurationDescriptor * * parsed,
                        /* [retval, out] */__RPC__out boolean * success
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Parse(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Usb::IUsbDescriptor * descriptor,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbConfigurationDescriptor * * parsed
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbConfigurationDescriptorStatics=_uuidof(IUsbConfigurationDescriptorStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbControlRequestType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbControlRequestType
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbControlRequestType[] = L"Windows.Devices.Usb.IUsbControlRequestType";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("8E9465A6-D73D-46DE-94BE-AAE7F07C0F5C"), exclusiveto, contract] */
                MIDL_INTERFACE("8E9465A6-D73D-46DE-94BE-AAE7F07C0F5C")
                IUsbControlRequestType : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Direction(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Usb::UsbTransferDirection * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Direction(
                        /* [in] */ABI::Windows::Devices::Usb::UsbTransferDirection value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ControlTransferType(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Usb::UsbControlTransferType * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ControlTransferType(
                        /* [in] */ABI::Windows::Devices::Usb::UsbControlTransferType value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Recipient(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Usb::UsbControlRecipient * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Recipient(
                        /* [in] */ABI::Windows::Devices::Usb::UsbControlRecipient value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AsByte(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AsByte(
                        /* [in] */BYTE value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbControlRequestType=_uuidof(IUsbControlRequestType);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDescriptor[] = L"Windows.Devices.Usb.IUsbDescriptor";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("0A89F216-5F9D-4874-8904-DA9AD3F5528F"), exclusiveto, contract] */
                MIDL_INTERFACE("0A89F216-5F9D-4874-8904-DA9AD3F5528F")
                IUsbDescriptor : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Length(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DescriptorType(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadDescriptorBuffer(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * buffer
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbDescriptor=_uuidof(IUsbDescriptor);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDevice[] = L"Windows.Devices.Usb.IUsbDevice";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("5249B992-C456-44D5-AD5E-24F5A089F63B"), exclusiveto, contract] */
                MIDL_INTERFACE("5249B992-C456-44D5-AD5E-24F5A089F63B")
                IUsbDevice : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SendControlOutTransferAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Usb::IUsbSetupPacket * setupPacket,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * buffer,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SendControlOutTransferAsyncNoBuffer(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Usb::IUsbSetupPacket * setupPacket,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SendControlInTransferAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Usb::IUsbSetupPacket * setupPacket,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * buffer,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SendControlInTransferAsyncNoBuffer(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Usb::IUsbSetupPacket * setupPacket,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * operation
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultInterface(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbInterface * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceDescriptor(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbDeviceDescriptor * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Configuration(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbConfiguration * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbDevice=_uuidof(IUsbDevice);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbDeviceClass
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbDeviceClass
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDeviceClass[] = L"Windows.Devices.Usb.IUsbDeviceClass";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("051942F9-845E-47EB-B12A-38F2F617AFE7"), exclusiveto, contract] */
                MIDL_INTERFACE("051942F9-845E-47EB-B12A-38F2F617AFE7")
                IUsbDeviceClass : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClassCode(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ClassCode(
                        /* [in] */BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SubclassCode(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_byte * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SubclassCode(
                        /* [in] */__RPC__in_opt __FIReference_1_byte * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProtocolCode(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_byte * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProtocolCode(
                        /* [in] */__RPC__in_opt __FIReference_1_byte * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbDeviceClass=_uuidof(IUsbDeviceClass);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbDeviceClasses
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbDeviceClasses
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDeviceClasses[] = L"Windows.Devices.Usb.IUsbDeviceClasses";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("686F955D-9B92-4B30-9781-C22C55AC35CB"), exclusiveto, contract] */
                MIDL_INTERFACE("686F955D-9B92-4B30-9781-C22C55AC35CB")
                IUsbDeviceClasses : IInspectable
                {
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbDeviceClasses=_uuidof(IUsbDeviceClasses);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbDeviceClassesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbDeviceClasses
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDeviceClassesStatics[] = L"Windows.Devices.Usb.IUsbDeviceClassesStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("B20B0527-C580-4599-A165-981B4FD03230"), exclusiveto, contract] */
                MIDL_INTERFACE("B20B0527-C580-4599-A165-981B4FD03230")
                IUsbDeviceClassesStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CdcControl(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbDeviceClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Physical(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbDeviceClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PersonalHealthcare(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbDeviceClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActiveSync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbDeviceClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PalmSync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbDeviceClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceFirmwareUpdate(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbDeviceClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Irda(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbDeviceClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Measurement(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbDeviceClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VendorSpecific(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbDeviceClass * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbDeviceClassesStatics=_uuidof(IUsbDeviceClassesStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbDeviceDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbDeviceDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDeviceDescriptor[] = L"Windows.Devices.Usb.IUsbDeviceDescriptor";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("1F48D1F6-BA97-4322-B92C-B5B189216588"), exclusiveto, contract] */
                MIDL_INTERFACE("1F48D1F6-BA97-4322-B92C-B5B189216588")
                IUsbDeviceDescriptor : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BcdUsb(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxPacketSize0(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VendorId(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProductId(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BcdDeviceRevision(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NumberOfConfigurations(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbDeviceDescriptor=_uuidof(IUsbDeviceDescriptor);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDeviceStatics[] = L"Windows.Devices.Usb.IUsbDeviceStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("066B85A2-09B7-4446-8502-6FE6DCAA7309"), exclusiveto, contract] */
                MIDL_INTERFACE("066B85A2-09B7-4446-8502-6FE6DCAA7309")
                IUsbDeviceStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [in] */UINT32 vendorId,
                        /* [in] */UINT32 productId,
                        /* [in] */GUID winUsbInterfaceClass,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorGuidOnly(
                        /* [in] */GUID winUsbInterfaceClass,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorVidPidOnly(
                        /* [in] */UINT32 vendorId,
                        /* [in] */UINT32 productId,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceClassSelector(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Usb::IUsbDeviceClass * usbClass,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbDeviceStatics=_uuidof(IUsbDeviceStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbEndpointDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbEndpointDescriptor[] = L"Windows.Devices.Usb.IUsbEndpointDescriptor";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("6B4862D9-8DF7-4B40-AC83-578F139F0575"), exclusiveto, contract] */
                MIDL_INTERFACE("6B4862D9-8DF7-4B40-AC83-578F139F0575")
                IUsbEndpointDescriptor : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EndpointNumber(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Direction(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Usb::UsbTransferDirection * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EndpointType(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Usb::UsbEndpointType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AsBulkInEndpointDescriptor(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AsInterruptInEndpointDescriptor(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AsBulkOutEndpointDescriptor(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AsInterruptOutEndpointDescriptor(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbEndpointDescriptor=_uuidof(IUsbEndpointDescriptor);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbEndpointDescriptorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbEndpointDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbEndpointDescriptorStatics[] = L"Windows.Devices.Usb.IUsbEndpointDescriptorStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("C890B201-9A6A-495E-A82C-295B9E708106"), exclusiveto, contract] */
                MIDL_INTERFACE("C890B201-9A6A-495E-A82C-295B9E708106")
                IUsbEndpointDescriptorStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE TryParse(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Usb::IUsbDescriptor * descriptor,
                        /* [out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbEndpointDescriptor * * parsed,
                        /* [retval, out] */__RPC__out boolean * success
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Parse(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Usb::IUsbDescriptor * descriptor,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbEndpointDescriptor * * parsed
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbEndpointDescriptorStatics=_uuidof(IUsbEndpointDescriptorStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbInterface
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbInterface
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterface[] = L"Windows.Devices.Usb.IUsbInterface";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("A0322B95-7F47-48AB-A727-678C25BE2112"), exclusiveto, contract] */
                MIDL_INTERFACE("A0322B95-7F47-48AB-A727-678C25BE2112")
                IUsbInterface : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BulkInPipes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InterruptInPipes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BulkOutPipes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InterruptOutPipes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InterfaceSettings(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InterfaceNumber(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Descriptors(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbInterface=_uuidof(IUsbInterface);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterface;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbInterfaceDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbInterfaceDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterfaceDescriptor[] = L"Windows.Devices.Usb.IUsbInterfaceDescriptor";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("199670C7-B7EE-4F90-8CD5-94A2E257598A"), exclusiveto, contract] */
                MIDL_INTERFACE("199670C7-B7EE-4F90-8CD5-94A2E257598A")
                IUsbInterfaceDescriptor : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClassCode(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SubclassCode(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProtocolCode(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlternateSettingNumber(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InterfaceNumber(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbInterfaceDescriptor=_uuidof(IUsbInterfaceDescriptor);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbInterfaceDescriptorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbInterfaceDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterfaceDescriptorStatics[] = L"Windows.Devices.Usb.IUsbInterfaceDescriptorStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("E34A9FF5-77D6-48B6-B0BE-16C6422316FE"), exclusiveto, contract] */
                MIDL_INTERFACE("E34A9FF5-77D6-48B6-B0BE-16C6422316FE")
                IUsbInterfaceDescriptorStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE TryParse(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Usb::IUsbDescriptor * descriptor,
                        /* [out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbInterfaceDescriptor * * parsed,
                        /* [retval, out] */__RPC__out boolean * success
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Parse(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Usb::IUsbDescriptor * descriptor,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbInterfaceDescriptor * * parsed
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbInterfaceDescriptorStatics=_uuidof(IUsbInterfaceDescriptorStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbInterfaceSetting
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbInterfaceSetting
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterfaceSetting[] = L"Windows.Devices.Usb.IUsbInterfaceSetting";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("1827BBA7-8DA7-4AF7-8F4C-7F3032E781F5"), exclusiveto, contract] */
                MIDL_INTERFACE("1827BBA7-8DA7-4AF7-8F4C-7F3032E781F5")
                IUsbInterfaceSetting : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BulkInEndpoints(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InterruptInEndpoints(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BulkOutEndpoints(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InterruptOutEndpoints(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Selected(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SelectSettingAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InterfaceDescriptor(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbInterfaceDescriptor * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Descriptors(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbInterfaceSetting=_uuidof(IUsbInterfaceSetting);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbInterruptInEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbInterruptInEndpointDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterruptInEndpointDescriptor[] = L"Windows.Devices.Usb.IUsbInterruptInEndpointDescriptor";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("C0528967-C911-4C3A-86B2-419C2DA89039"), exclusiveto, contract] */
                MIDL_INTERFACE("C0528967-C911-4C3A-86B2-419C2DA89039")
                IUsbInterruptInEndpointDescriptor : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxPacketSize(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EndpointNumber(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Interval(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pipe(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbInterruptInPipe * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbInterruptInEndpointDescriptor=_uuidof(IUsbInterruptInEndpointDescriptor);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbInterruptInEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbInterruptInEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterruptInEventArgs[] = L"Windows.Devices.Usb.IUsbInterruptInEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("B7B04092-1418-4936-8209-299CF5605583"), exclusiveto, contract] */
                MIDL_INTERFACE("B7B04092-1418-4936-8209-299CF5605583")
                IUsbInterruptInEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InterruptData(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbInterruptInEventArgs=_uuidof(IUsbInterruptInEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbInterruptInPipe
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbInterruptInPipe
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterruptInPipe[] = L"Windows.Devices.Usb.IUsbInterruptInPipe";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("FA007116-84D7-48C7-8A3F-4C0B235F2EA6"), exclusiveto, contract] */
                MIDL_INTERFACE("FA007116-84D7-48C7-8A3F-4C0B235F2EA6")
                IUsbInterruptInPipe : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EndpointDescriptor(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ClearStallAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DataReceived(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DataReceived(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbInterruptInPipe=_uuidof(IUsbInterruptInPipe);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbInterruptOutEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbInterruptOutEndpointDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterruptOutEndpointDescriptor[] = L"Windows.Devices.Usb.IUsbInterruptOutEndpointDescriptor";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("CC9FED81-10CA-4533-952D-9E278341E80F"), exclusiveto, contract] */
                MIDL_INTERFACE("CC9FED81-10CA-4533-952D-9E278341E80F")
                IUsbInterruptOutEndpointDescriptor : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxPacketSize(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EndpointNumber(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Interval(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pipe(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbInterruptOutPipe * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbInterruptOutEndpointDescriptor=_uuidof(IUsbInterruptOutEndpointDescriptor);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbInterruptOutPipe
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbInterruptOutPipe
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterruptOutPipe[] = L"Windows.Devices.Usb.IUsbInterruptOutPipe";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("E984C8A9-AAF9-49D0-B96C-F661AB4A7F95"), exclusiveto, contract] */
                MIDL_INTERFACE("E984C8A9-AAF9-49D0-B96C-F661AB4A7F95")
                IUsbInterruptOutPipe : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EndpointDescriptor(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ClearStallAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_WriteOptions(
                        /* [in] */ABI::Windows::Devices::Usb::UsbWriteOptions value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WriteOptions(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Usb::UsbWriteOptions * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutputStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IOutputStream * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbInterruptOutPipe=_uuidof(IUsbInterruptOutPipe);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbSetupPacket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbSetupPacket
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbSetupPacket[] = L"Windows.Devices.Usb.IUsbSetupPacket";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("104BA132-C78F-4C51-B654-E49D02F2CB03"), exclusiveto, contract] */
                MIDL_INTERFACE("104BA132-C78F-4C51-B654-E49D02F2CB03")
                IUsbSetupPacket : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestType(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbControlRequestType * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RequestType(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Usb::IUsbControlRequestType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Request(
                        /* [in] */BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Index(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Index(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Length(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Length(
                        /* [in] */UINT32 value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbSetupPacket=_uuidof(IUsbSetupPacket);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbSetupPacketFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbSetupPacket
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbSetupPacketFactory[] = L"Windows.Devices.Usb.IUsbSetupPacketFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Usb {
                /* [object, uuid("C9257D50-1B2E-4A41-A2A7-338F0CEF3C14"), exclusiveto, contract] */
                MIDL_INTERFACE("C9257D50-1B2E-4A41-A2A7-338F0CEF3C14")
                IUsbSetupPacketFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWithEightByteBuffer(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * eightByteBuffer,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Usb::IUsbSetupPacket * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUsbSetupPacketFactory=_uuidof(IUsbSetupPacketFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Usb */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbBulkInEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbBulkInEndpointDescriptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbBulkInEndpointDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbBulkInEndpointDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbBulkInEndpointDescriptor[] = L"Windows.Devices.Usb.UsbBulkInEndpointDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbBulkInPipe
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbBulkInPipe ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbBulkInPipe_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbBulkInPipe_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbBulkInPipe[] = L"Windows.Devices.Usb.UsbBulkInPipe";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbBulkOutEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbBulkOutEndpointDescriptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbBulkOutEndpointDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbBulkOutEndpointDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbBulkOutEndpointDescriptor[] = L"Windows.Devices.Usb.UsbBulkOutEndpointDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbBulkOutPipe
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbBulkOutPipe ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbBulkOutPipe_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbBulkOutPipe_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbBulkOutPipe[] = L"Windows.Devices.Usb.UsbBulkOutPipe";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbConfiguration ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbConfiguration_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbConfiguration[] = L"Windows.Devices.Usb.UsbConfiguration";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbConfigurationDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Usb.IUsbConfigurationDescriptorStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbConfigurationDescriptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbConfigurationDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbConfigurationDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbConfigurationDescriptor[] = L"Windows.Devices.Usb.UsbConfigurationDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbControlRequestType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbControlRequestType ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbControlRequestType_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbControlRequestType_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbControlRequestType[] = L"Windows.Devices.Usb.UsbControlRequestType";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbDescriptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbDescriptor[] = L"Windows.Devices.Usb.UsbDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Usb.IUsbDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbDevice ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbDevice[] = L"Windows.Devices.Usb.UsbDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbDeviceClass
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbDeviceClass ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbDeviceClass_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbDeviceClass_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbDeviceClass[] = L"Windows.Devices.Usb.UsbDeviceClass";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbDeviceClasses
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Usb.IUsbDeviceClassesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbDeviceClasses ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbDeviceClasses_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbDeviceClasses_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbDeviceClasses[] = L"Windows.Devices.Usb.UsbDeviceClasses";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbDeviceDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbDeviceDescriptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbDeviceDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbDeviceDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbDeviceDescriptor[] = L"Windows.Devices.Usb.UsbDeviceDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Usb.IUsbEndpointDescriptorStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbEndpointDescriptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbEndpointDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbEndpointDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbEndpointDescriptor[] = L"Windows.Devices.Usb.UsbEndpointDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbInterface
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbInterface ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbInterface_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbInterface_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterface[] = L"Windows.Devices.Usb.UsbInterface";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbInterfaceDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Usb.IUsbInterfaceDescriptorStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbInterfaceDescriptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbInterfaceDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbInterfaceDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterfaceDescriptor[] = L"Windows.Devices.Usb.UsbInterfaceDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbInterfaceSetting
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbInterfaceSetting ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbInterfaceSetting_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbInterfaceSetting_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterfaceSetting[] = L"Windows.Devices.Usb.UsbInterfaceSetting";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbInterruptInEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbInterruptInEndpointDescriptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptInEndpointDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptInEndpointDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterruptInEndpointDescriptor[] = L"Windows.Devices.Usb.UsbInterruptInEndpointDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbInterruptInEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbInterruptInEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptInEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptInEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterruptInEventArgs[] = L"Windows.Devices.Usb.UsbInterruptInEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbInterruptInPipe
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbInterruptInPipe ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptInPipe_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptInPipe_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterruptInPipe[] = L"Windows.Devices.Usb.UsbInterruptInPipe";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbInterruptOutEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbInterruptOutEndpointDescriptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptOutEndpointDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptOutEndpointDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterruptOutEndpointDescriptor[] = L"Windows.Devices.Usb.UsbInterruptOutEndpointDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbInterruptOutPipe
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbInterruptOutPipe ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptOutPipe_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptOutPipe_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterruptOutPipe[] = L"Windows.Devices.Usb.UsbInterruptOutPipe";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbSetupPacket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Devices.Usb.IUsbSetupPacketFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbSetupPacket ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbSetupPacket_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbSetupPacket_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbSetupPacket[] = L"Windows.Devices.Usb.UsbSetupPacket";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory;

#endif // ____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor;

typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptorVtbl;

interface __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor;

typedef  struct __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptorVtbl;

interface __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe;

typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipeVtbl;

interface __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe;

typedef  struct __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipeVtbl;

interface __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor;

typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptorVtbl;

interface __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor;

typedef  struct __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptorVtbl;

interface __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe;

typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipeVtbl;

interface __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe;

typedef  struct __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipeVtbl;

interface __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor;

typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptorVtbl;

interface __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor;

typedef  struct __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptorVtbl;

interface __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbInterface;

typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceVtbl;

interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CUsb__CUsbInterface_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CUsb__CUsbInterface_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CUsb__CUsbInterface_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbInterface;

typedef  struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceVtbl;

interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CUsb__CUsbInterface_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting;

typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSettingVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSettingVtbl;

interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSettingVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting;

typedef  struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSettingVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSettingVtbl;

interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSettingVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor;

typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptorVtbl;

interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor;

typedef  struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptorVtbl;

interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe;

typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipeVtbl;

interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe;

typedef  struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipeVtbl;

interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor;

typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptorVtbl;

interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor;

typedef  struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptorVtbl;

interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe;

typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipeVtbl;

interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe;

typedef  struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipeVtbl;

interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor;

typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptorVtbl;

interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe;

typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipeVtbl;

interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor;

typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptorVtbl;

interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe;

typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipeVtbl;

interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor;

typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptorVtbl;

interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface;

typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceVtbl;

interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting;

typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSettingVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSettingVtbl;

interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSettingVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor;

typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptorVtbl;

interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe;

typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipeVtbl;

interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor;

typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptorVtbl;

interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe;

typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipeVtbl;

interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDeviceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDeviceVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIAsyncOperationCompletedHandler_1_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_UINT32 __FIAsyncOperationCompletedHandler_1_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_UINT32;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;

typedef struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_UINT32 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_UINT32Vtbl;

interface __FIAsyncOperationCompletedHandler_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_UINT32_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_UINT32_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_UINT32;

typedef struct __FIAsyncOperation_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_UINT32 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_UINT32 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_UINT32 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_UINT32 * This, /* [retval][out] */ __RPC__out int *results);
    END_INTERFACE
} __FIAsyncOperation_1_UINT32Vtbl;

interface __FIAsyncOperation_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperation_1_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_UINT32_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_UINT32_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_UINT32_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_UINT32_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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



#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CDevices_CUsb_CUsbControlRecipient __x_ABI_CWindows_CDevices_CUsb_CUsbControlRecipient;


typedef enum __x_ABI_CWindows_CDevices_CUsb_CUsbControlTransferType __x_ABI_CWindows_CDevices_CUsb_CUsbControlTransferType;


typedef enum __x_ABI_CWindows_CDevices_CUsb_CUsbEndpointType __x_ABI_CWindows_CDevices_CUsb_CUsbEndpointType;


typedef enum __x_ABI_CWindows_CDevices_CUsb_CUsbReadOptions __x_ABI_CWindows_CDevices_CUsb_CUsbReadOptions;


typedef enum __x_ABI_CWindows_CDevices_CUsb_CUsbTransferDirection __x_ABI_CWindows_CDevices_CUsb_CUsbTransferDirection;


typedef enum __x_ABI_CWindows_CDevices_CUsb_CUsbWriteOptions __x_ABI_CWindows_CDevices_CUsb_CUsbWriteOptions;



























































/*
 *
 * Struct Windows.Devices.Usb.UsbControlRecipient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CUsb_CUsbControlRecipient
{
    UsbControlRecipient_Device = 0,
    UsbControlRecipient_SpecifiedInterface = 1,
    UsbControlRecipient_Endpoint = 2,
    UsbControlRecipient_Other = 3,
    UsbControlRecipient_DefaultInterface = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Usb.UsbControlTransferType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CUsb_CUsbControlTransferType
{
    UsbControlTransferType_Standard = 0,
    UsbControlTransferType_Class = 1,
    UsbControlTransferType_Vendor = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Usb.UsbEndpointType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CUsb_CUsbEndpointType
{
    UsbEndpointType_Control = 0,
    UsbEndpointType_Isochronous = 1,
    UsbEndpointType_Bulk = 2,
    UsbEndpointType_Interrupt = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Usb.UsbReadOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CDevices_CUsb_CUsbReadOptions
{
    UsbReadOptions_None = 0,
    UsbReadOptions_AutoClearStall = 0x1,
    UsbReadOptions_OverrideAutomaticBufferManagement = 0x2,
    UsbReadOptions_IgnoreShortPacket = 0x4,
    UsbReadOptions_AllowPartialReads = 0x8,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Usb.UsbTransferDirection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CUsb_CUsbTransferDirection
{
    UsbTransferDirection_Out = 0,
    UsbTransferDirection_In = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Usb.UsbWriteOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CDevices_CUsb_CUsbWriteOptions
{
    UsbWriteOptions_None = 0,
    UsbWriteOptions_AutoClearStall = 0x1,
    UsbWriteOptions_ShortPacketTerminate = 0x2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbBulkInEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbBulkInEndpointDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbBulkInEndpointDescriptor[] = L"Windows.Devices.Usb.IUsbBulkInEndpointDescriptor";
/* [object, uuid("3C6E4846-06CF-42A9-9DC2-971C1B14B6E3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxPacketSize )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EndpointNumber )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pipe )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptorVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_get_MaxPacketSize(This,value) \
    ( (This)->lpVtbl->get_MaxPacketSize(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_get_EndpointNumber(This,value) \
    ( (This)->lpVtbl->get_EndpointNumber(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_get_Pipe(This,value) \
    ( (This)->lpVtbl->get_Pipe(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbBulkInPipe
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbBulkInPipe
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbBulkInPipe[] = L"Windows.Devices.Usb.IUsbBulkInPipe";
/* [object, uuid("F01D2D3B-4548-4D50-B326-D82CDABE1220"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxTransferSizeBytes )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EndpointDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ClearStallAsync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReadOptions )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
        /* [in] */__x_ABI_CWindows_CDevices_CUsb_CUsbReadOptions value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReadOptions )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CUsb_CUsbReadOptions * value
        );
    HRESULT ( STDMETHODCALLTYPE *FlushBuffer )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputStream )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipeVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_get_MaxTransferSizeBytes(This,value) \
    ( (This)->lpVtbl->get_MaxTransferSizeBytes(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_get_EndpointDescriptor(This,value) \
    ( (This)->lpVtbl->get_EndpointDescriptor(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_ClearStallAsync(This,operation) \
    ( (This)->lpVtbl->ClearStallAsync(This,operation) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_put_ReadOptions(This,value) \
    ( (This)->lpVtbl->put_ReadOptions(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_get_ReadOptions(This,value) \
    ( (This)->lpVtbl->get_ReadOptions(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_FlushBuffer(This) \
    ( (This)->lpVtbl->FlushBuffer(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_get_InputStream(This,value) \
    ( (This)->lpVtbl->get_InputStream(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbBulkOutEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbBulkOutEndpointDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbBulkOutEndpointDescriptor[] = L"Windows.Devices.Usb.IUsbBulkOutEndpointDescriptor";
/* [object, uuid("2820847A-FFEE-4F60-9BE1-956CAC3ECB65"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxPacketSize )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EndpointNumber )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pipe )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptorVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_get_MaxPacketSize(This,value) \
    ( (This)->lpVtbl->get_MaxPacketSize(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_get_EndpointNumber(This,value) \
    ( (This)->lpVtbl->get_EndpointNumber(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_get_Pipe(This,value) \
    ( (This)->lpVtbl->get_Pipe(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbBulkOutPipe
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbBulkOutPipe
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbBulkOutPipe[] = L"Windows.Devices.Usb.IUsbBulkOutPipe";
/* [object, uuid("A8E9EE6E-0115-45AA-8B21-37B225BCCEE7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EndpointDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ClearStallAsync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_WriteOptions )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This,
        /* [in] */__x_ABI_CWindows_CDevices_CUsb_CUsbWriteOptions value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WriteOptions )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CUsb_CUsbWriteOptions * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutputStream )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipeVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_get_EndpointDescriptor(This,value) \
    ( (This)->lpVtbl->get_EndpointDescriptor(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_ClearStallAsync(This,operation) \
    ( (This)->lpVtbl->ClearStallAsync(This,operation) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_put_WriteOptions(This,value) \
    ( (This)->lpVtbl->put_WriteOptions(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_get_WriteOptions(This,value) \
    ( (This)->lpVtbl->get_WriteOptions(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_get_OutputStream(This,value) \
    ( (This)->lpVtbl->get_OutputStream(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbConfiguration[] = L"Windows.Devices.Usb.IUsbConfiguration";
/* [object, uuid("68177429-36A9-46D7-B873-FC689251EC30"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsbInterfaces )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConfigurationDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Descriptors )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_get_UsbInterfaces(This,value) \
    ( (This)->lpVtbl->get_UsbInterfaces(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_get_ConfigurationDescriptor(This,value) \
    ( (This)->lpVtbl->get_ConfigurationDescriptor(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_get_Descriptors(This,value) \
    ( (This)->lpVtbl->get_Descriptors(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbConfigurationDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbConfigurationDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbConfigurationDescriptor[] = L"Windows.Devices.Usb.IUsbConfigurationDescriptor";
/* [object, uuid("F2176D92-B442-407A-8207-7D646C0385F3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConfigurationValue )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxPowerMilliamps )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelfPowered )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteWakeup )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_get_ConfigurationValue(This,value) \
    ( (This)->lpVtbl->get_ConfigurationValue(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_get_MaxPowerMilliamps(This,value) \
    ( (This)->lpVtbl->get_MaxPowerMilliamps(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_get_SelfPowered(This,value) \
    ( (This)->lpVtbl->get_SelfPowered(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_get_RemoteWakeup(This,value) \
    ( (This)->lpVtbl->get_RemoteWakeup(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbConfigurationDescriptorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbConfigurationDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbConfigurationDescriptorStatics[] = L"Windows.Devices.Usb.IUsbConfigurationDescriptorStatics";
/* [object, uuid("424CED93-E740-40A1-92BD-DA120EA04914"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * descriptor,
        /* [out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * * parsed,
        /* [retval, out] */__RPC__out boolean * success
        );
    HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * descriptor,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * * parsed
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_TryParse(This,descriptor,parsed,success) \
    ( (This)->lpVtbl->TryParse(This,descriptor,parsed,success) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_Parse(This,descriptor,parsed) \
    ( (This)->lpVtbl->Parse(This,descriptor,parsed) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbControlRequestType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbControlRequestType
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbControlRequestType[] = L"Windows.Devices.Usb.IUsbControlRequestType";
/* [object, uuid("8E9465A6-D73D-46DE-94BE-AAE7F07C0F5C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Direction )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CUsb_CUsbTransferDirection * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Direction )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
        /* [in] */__x_ABI_CWindows_CDevices_CUsb_CUsbTransferDirection value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ControlTransferType )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CUsb_CUsbControlTransferType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ControlTransferType )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
        /* [in] */__x_ABI_CWindows_CDevices_CUsb_CUsbControlTransferType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Recipient )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CUsb_CUsbControlRecipient * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Recipient )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
        /* [in] */__x_ABI_CWindows_CDevices_CUsb_CUsbControlRecipient value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AsByte )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AsByte )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
        /* [in] */BYTE value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestTypeVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestTypeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_get_Direction(This,value) \
    ( (This)->lpVtbl->get_Direction(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_put_Direction(This,value) \
    ( (This)->lpVtbl->put_Direction(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_get_ControlTransferType(This,value) \
    ( (This)->lpVtbl->get_ControlTransferType(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_put_ControlTransferType(This,value) \
    ( (This)->lpVtbl->put_ControlTransferType(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_get_Recipient(This,value) \
    ( (This)->lpVtbl->get_Recipient(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_put_Recipient(This,value) \
    ( (This)->lpVtbl->put_Recipient(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_get_AsByte(This,value) \
    ( (This)->lpVtbl->get_AsByte(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_put_AsByte(This,value) \
    ( (This)->lpVtbl->put_AsByte(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDescriptor[] = L"Windows.Devices.Usb.IUsbDescriptor";
/* [object, uuid("0A89F216-5F9D-4874-8904-DA9AD3F5528F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DescriptorType )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadDescriptorBuffer )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptorVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_get_Length(This,value) \
    ( (This)->lpVtbl->get_Length(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_get_DescriptorType(This,value) \
    ( (This)->lpVtbl->get_DescriptorType(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_ReadDescriptorBuffer(This,buffer) \
    ( (This)->lpVtbl->ReadDescriptorBuffer(This,buffer) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDevice[] = L"Windows.Devices.Usb.IUsbDevice";
/* [object, uuid("5249B992-C456-44D5-AD5E-24F5A089F63B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *SendControlOutTransferAsync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * setupPacket,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SendControlOutTransferAsyncNoBuffer )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * setupPacket,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SendControlInTransferAsync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * setupPacket,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SendControlInTransferAsyncNoBuffer )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * setupPacket,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * operation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultInterface )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Configuration )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_SendControlOutTransferAsync(This,setupPacket,buffer,operation) \
    ( (This)->lpVtbl->SendControlOutTransferAsync(This,setupPacket,buffer,operation) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_SendControlOutTransferAsyncNoBuffer(This,setupPacket,operation) \
    ( (This)->lpVtbl->SendControlOutTransferAsyncNoBuffer(This,setupPacket,operation) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_SendControlInTransferAsync(This,setupPacket,buffer,operation) \
    ( (This)->lpVtbl->SendControlInTransferAsync(This,setupPacket,buffer,operation) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_SendControlInTransferAsyncNoBuffer(This,setupPacket,operation) \
    ( (This)->lpVtbl->SendControlInTransferAsyncNoBuffer(This,setupPacket,operation) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_get_DefaultInterface(This,value) \
    ( (This)->lpVtbl->get_DefaultInterface(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_get_DeviceDescriptor(This,value) \
    ( (This)->lpVtbl->get_DeviceDescriptor(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_get_Configuration(This,value) \
    ( (This)->lpVtbl->get_Configuration(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbDeviceClass
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbDeviceClass
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDeviceClass[] = L"Windows.Devices.Usb.IUsbDeviceClass";
/* [object, uuid("051942F9-845E-47EB-B12A-38F2F617AFE7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClassCode )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ClassCode )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SubclassCode )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_byte * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SubclassCode )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
        /* [in] */__RPC__in_opt __FIReference_1_byte * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProtocolCode )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_byte * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProtocolCode )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
        /* [in] */__RPC__in_opt __FIReference_1_byte * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_get_ClassCode(This,value) \
    ( (This)->lpVtbl->get_ClassCode(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_put_ClassCode(This,value) \
    ( (This)->lpVtbl->put_ClassCode(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_get_SubclassCode(This,value) \
    ( (This)->lpVtbl->get_SubclassCode(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_put_SubclassCode(This,value) \
    ( (This)->lpVtbl->put_SubclassCode(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_get_ProtocolCode(This,value) \
    ( (This)->lpVtbl->get_ProtocolCode(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_put_ProtocolCode(This,value) \
    ( (This)->lpVtbl->put_ProtocolCode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbDeviceClasses
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbDeviceClasses
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDeviceClasses[] = L"Windows.Devices.Usb.IUsbDeviceClasses";
/* [object, uuid("686F955D-9B92-4B30-9781-C22C55AC35CB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbDeviceClassesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbDeviceClasses
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDeviceClassesStatics[] = L"Windows.Devices.Usb.IUsbDeviceClassesStatics";
/* [object, uuid("B20B0527-C580-4599-A165-981B4FD03230"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CdcControl )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Physical )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PersonalHealthcare )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActiveSync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PalmSync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceFirmwareUpdate )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Irda )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Measurement )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VendorSpecific )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_get_CdcControl(This,value) \
    ( (This)->lpVtbl->get_CdcControl(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_get_Physical(This,value) \
    ( (This)->lpVtbl->get_Physical(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_get_PersonalHealthcare(This,value) \
    ( (This)->lpVtbl->get_PersonalHealthcare(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_get_ActiveSync(This,value) \
    ( (This)->lpVtbl->get_ActiveSync(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_get_PalmSync(This,value) \
    ( (This)->lpVtbl->get_PalmSync(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_get_DeviceFirmwareUpdate(This,value) \
    ( (This)->lpVtbl->get_DeviceFirmwareUpdate(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_get_Irda(This,value) \
    ( (This)->lpVtbl->get_Irda(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_get_Measurement(This,value) \
    ( (This)->lpVtbl->get_Measurement(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_get_VendorSpecific(This,value) \
    ( (This)->lpVtbl->get_VendorSpecific(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbDeviceDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbDeviceDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDeviceDescriptor[] = L"Windows.Devices.Usb.IUsbDeviceDescriptor";
/* [object, uuid("1F48D1F6-BA97-4322-B92C-B5B189216588"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BcdUsb )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxPacketSize0 )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VendorId )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BcdDeviceRevision )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NumberOfConfigurations )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptorVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_get_BcdUsb(This,value) \
    ( (This)->lpVtbl->get_BcdUsb(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_get_MaxPacketSize0(This,value) \
    ( (This)->lpVtbl->get_MaxPacketSize0(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_get_VendorId(This,value) \
    ( (This)->lpVtbl->get_VendorId(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_get_ProductId(This,value) \
    ( (This)->lpVtbl->get_ProductId(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_get_BcdDeviceRevision(This,value) \
    ( (This)->lpVtbl->get_BcdDeviceRevision(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_get_NumberOfConfigurations(This,value) \
    ( (This)->lpVtbl->get_NumberOfConfigurations(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDeviceStatics[] = L"Windows.Devices.Usb.IUsbDeviceStatics";
/* [object, uuid("066B85A2-09B7-4446-8502-6FE6DCAA7309"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This,
        /* [in] */UINT32 vendorId,
        /* [in] */UINT32 productId,
        /* [in] */GUID winUsbInterfaceClass,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorGuidOnly )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This,
        /* [in] */GUID winUsbInterfaceClass,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorVidPidOnly )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This,
        /* [in] */UINT32 vendorId,
        /* [in] */UINT32 productId,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceClassSelector )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * usbClass,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_GetDeviceSelector(This,vendorId,productId,winUsbInterfaceClass,value) \
    ( (This)->lpVtbl->GetDeviceSelector(This,vendorId,productId,winUsbInterfaceClass,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_GetDeviceSelectorGuidOnly(This,winUsbInterfaceClass,value) \
    ( (This)->lpVtbl->GetDeviceSelectorGuidOnly(This,winUsbInterfaceClass,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_GetDeviceSelectorVidPidOnly(This,vendorId,productId,value) \
    ( (This)->lpVtbl->GetDeviceSelectorVidPidOnly(This,vendorId,productId,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_GetDeviceClassSelector(This,usbClass,value) \
    ( (This)->lpVtbl->GetDeviceClassSelector(This,usbClass,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_FromIdAsync(This,deviceId,operation) \
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbEndpointDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbEndpointDescriptor[] = L"Windows.Devices.Usb.IUsbEndpointDescriptor";
/* [object, uuid("6B4862D9-8DF7-4B40-AC83-578F139F0575"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EndpointNumber )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Direction )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CUsb_CUsbTransferDirection * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EndpointType )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CUsb_CUsbEndpointType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AsBulkInEndpointDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AsInterruptInEndpointDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AsBulkOutEndpointDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AsInterruptOutEndpointDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_get_EndpointNumber(This,value) \
    ( (This)->lpVtbl->get_EndpointNumber(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_get_Direction(This,value) \
    ( (This)->lpVtbl->get_Direction(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_get_EndpointType(This,value) \
    ( (This)->lpVtbl->get_EndpointType(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_get_AsBulkInEndpointDescriptor(This,value) \
    ( (This)->lpVtbl->get_AsBulkInEndpointDescriptor(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_get_AsInterruptInEndpointDescriptor(This,value) \
    ( (This)->lpVtbl->get_AsInterruptInEndpointDescriptor(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_get_AsBulkOutEndpointDescriptor(This,value) \
    ( (This)->lpVtbl->get_AsBulkOutEndpointDescriptor(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_get_AsInterruptOutEndpointDescriptor(This,value) \
    ( (This)->lpVtbl->get_AsInterruptOutEndpointDescriptor(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbEndpointDescriptorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbEndpointDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbEndpointDescriptorStatics[] = L"Windows.Devices.Usb.IUsbEndpointDescriptorStatics";
/* [object, uuid("C890B201-9A6A-495E-A82C-295B9E708106"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * descriptor,
        /* [out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * * parsed,
        /* [retval, out] */__RPC__out boolean * success
        );
    HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * descriptor,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * * parsed
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_TryParse(This,descriptor,parsed,success) \
    ( (This)->lpVtbl->TryParse(This,descriptor,parsed,success) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_Parse(This,descriptor,parsed) \
    ( (This)->lpVtbl->Parse(This,descriptor,parsed) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbInterface
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbInterface
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterface[] = L"Windows.Devices.Usb.IUsbInterface";
/* [object, uuid("A0322B95-7F47-48AB-A727-678C25BE2112"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BulkInPipes )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InterruptInPipes )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BulkOutPipes )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InterruptOutPipes )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InterfaceSettings )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InterfaceNumber )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Descriptors )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_get_BulkInPipes(This,value) \
    ( (This)->lpVtbl->get_BulkInPipes(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_get_InterruptInPipes(This,value) \
    ( (This)->lpVtbl->get_InterruptInPipes(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_get_BulkOutPipes(This,value) \
    ( (This)->lpVtbl->get_BulkOutPipes(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_get_InterruptOutPipes(This,value) \
    ( (This)->lpVtbl->get_InterruptOutPipes(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_get_InterfaceSettings(This,value) \
    ( (This)->lpVtbl->get_InterfaceSettings(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_get_InterfaceNumber(This,value) \
    ( (This)->lpVtbl->get_InterfaceNumber(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_get_Descriptors(This,value) \
    ( (This)->lpVtbl->get_Descriptors(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterface;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterface_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbInterfaceDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbInterfaceDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterfaceDescriptor[] = L"Windows.Devices.Usb.IUsbInterfaceDescriptor";
/* [object, uuid("199670C7-B7EE-4F90-8CD5-94A2E257598A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClassCode )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SubclassCode )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProtocolCode )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlternateSettingNumber )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InterfaceNumber )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_get_ClassCode(This,value) \
    ( (This)->lpVtbl->get_ClassCode(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_get_SubclassCode(This,value) \
    ( (This)->lpVtbl->get_SubclassCode(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_get_ProtocolCode(This,value) \
    ( (This)->lpVtbl->get_ProtocolCode(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_get_AlternateSettingNumber(This,value) \
    ( (This)->lpVtbl->get_AlternateSettingNumber(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_get_InterfaceNumber(This,value) \
    ( (This)->lpVtbl->get_InterfaceNumber(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbInterfaceDescriptorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbInterfaceDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterfaceDescriptorStatics[] = L"Windows.Devices.Usb.IUsbInterfaceDescriptorStatics";
/* [object, uuid("E34A9FF5-77D6-48B6-B0BE-16C6422316FE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * descriptor,
        /* [out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * * parsed,
        /* [retval, out] */__RPC__out boolean * success
        );
    HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * descriptor,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * * parsed
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_TryParse(This,descriptor,parsed,success) \
    ( (This)->lpVtbl->TryParse(This,descriptor,parsed,success) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_Parse(This,descriptor,parsed) \
    ( (This)->lpVtbl->Parse(This,descriptor,parsed) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbInterfaceSetting
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbInterfaceSetting
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterfaceSetting[] = L"Windows.Devices.Usb.IUsbInterfaceSetting";
/* [object, uuid("1827BBA7-8DA7-4AF7-8F4C-7F3032E781F5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSettingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BulkInEndpoints )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InterruptInEndpoints )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BulkOutEndpoints )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InterruptOutEndpoints )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Selected )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SelectSettingAsync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InterfaceDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Descriptors )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSettingVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSettingVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_get_BulkInEndpoints(This,value) \
    ( (This)->lpVtbl->get_BulkInEndpoints(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_get_InterruptInEndpoints(This,value) \
    ( (This)->lpVtbl->get_InterruptInEndpoints(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_get_BulkOutEndpoints(This,value) \
    ( (This)->lpVtbl->get_BulkOutEndpoints(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_get_InterruptOutEndpoints(This,value) \
    ( (This)->lpVtbl->get_InterruptOutEndpoints(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_get_Selected(This,value) \
    ( (This)->lpVtbl->get_Selected(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_SelectSettingAsync(This,operation) \
    ( (This)->lpVtbl->SelectSettingAsync(This,operation) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_get_InterfaceDescriptor(This,value) \
    ( (This)->lpVtbl->get_InterfaceDescriptor(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_get_Descriptors(This,value) \
    ( (This)->lpVtbl->get_Descriptors(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbInterruptInEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbInterruptInEndpointDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterruptInEndpointDescriptor[] = L"Windows.Devices.Usb.IUsbInterruptInEndpointDescriptor";
/* [object, uuid("C0528967-C911-4C3A-86B2-419C2DA89039"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxPacketSize )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EndpointNumber )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Interval )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pipe )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptorVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_get_MaxPacketSize(This,value) \
    ( (This)->lpVtbl->get_MaxPacketSize(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_get_EndpointNumber(This,value) \
    ( (This)->lpVtbl->get_EndpointNumber(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_get_Interval(This,value) \
    ( (This)->lpVtbl->get_Interval(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_get_Pipe(This,value) \
    ( (This)->lpVtbl->get_Pipe(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbInterruptInEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbInterruptInEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterruptInEventArgs[] = L"Windows.Devices.Usb.IUsbInterruptInEventArgs";
/* [object, uuid("B7B04092-1418-4936-8209-299CF5605583"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InterruptData )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_get_InterruptData(This,value) \
    ( (This)->lpVtbl->get_InterruptData(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbInterruptInPipe
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbInterruptInPipe
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterruptInPipe[] = L"Windows.Devices.Usb.IUsbInterruptInPipe";
/* [object, uuid("FA007116-84D7-48C7-8A3F-4C0B235F2EA6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EndpointDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ClearStallAsync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DataReceived )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DataReceived )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipeVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_get_EndpointDescriptor(This,value) \
    ( (This)->lpVtbl->get_EndpointDescriptor(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_ClearStallAsync(This,operation) \
    ( (This)->lpVtbl->ClearStallAsync(This,operation) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_add_DataReceived(This,handler,token) \
    ( (This)->lpVtbl->add_DataReceived(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_remove_DataReceived(This,token) \
    ( (This)->lpVtbl->remove_DataReceived(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbInterruptOutEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbInterruptOutEndpointDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterruptOutEndpointDescriptor[] = L"Windows.Devices.Usb.IUsbInterruptOutEndpointDescriptor";
/* [object, uuid("CC9FED81-10CA-4533-952D-9E278341E80F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxPacketSize )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EndpointNumber )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Interval )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pipe )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptorVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_get_MaxPacketSize(This,value) \
    ( (This)->lpVtbl->get_MaxPacketSize(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_get_EndpointNumber(This,value) \
    ( (This)->lpVtbl->get_EndpointNumber(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_get_Interval(This,value) \
    ( (This)->lpVtbl->get_Interval(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_get_Pipe(This,value) \
    ( (This)->lpVtbl->get_Pipe(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbInterruptOutPipe
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbInterruptOutPipe
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterruptOutPipe[] = L"Windows.Devices.Usb.IUsbInterruptOutPipe";
/* [object, uuid("E984C8A9-AAF9-49D0-B96C-F661AB4A7F95"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EndpointDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ClearStallAsync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_WriteOptions )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This,
        /* [in] */__x_ABI_CWindows_CDevices_CUsb_CUsbWriteOptions value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WriteOptions )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CUsb_CUsbWriteOptions * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutputStream )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipeVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_get_EndpointDescriptor(This,value) \
    ( (This)->lpVtbl->get_EndpointDescriptor(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_ClearStallAsync(This,operation) \
    ( (This)->lpVtbl->ClearStallAsync(This,operation) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_put_WriteOptions(This,value) \
    ( (This)->lpVtbl->put_WriteOptions(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_get_WriteOptions(This,value) \
    ( (This)->lpVtbl->get_WriteOptions(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_get_OutputStream(This,value) \
    ( (This)->lpVtbl->get_OutputStream(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbSetupPacket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbSetupPacket
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbSetupPacket[] = L"Windows.Devices.Usb.IUsbSetupPacket";
/* [object, uuid("104BA132-C78F-4C51-B654-E49D02F2CB03"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestType )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RequestType )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Request )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Index )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Index )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Length )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
        /* [in] */UINT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_get_RequestType(This,value) \
    ( (This)->lpVtbl->get_RequestType(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_put_RequestType(This,value) \
    ( (This)->lpVtbl->put_RequestType(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_put_Request(This,value) \
    ( (This)->lpVtbl->put_Request(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_get_Index(This,value) \
    ( (This)->lpVtbl->get_Index(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_put_Index(This,value) \
    ( (This)->lpVtbl->put_Index(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_get_Length(This,value) \
    ( (This)->lpVtbl->get_Length(This,value) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_put_Length(This,value) \
    ( (This)->lpVtbl->put_Length(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Usb.IUsbSetupPacketFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Usb.UsbSetupPacket
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbSetupPacketFactory[] = L"Windows.Devices.Usb.IUsbSetupPacketFactory";
/* [object, uuid("C9257D50-1B2E-4A41-A2A7-338F0CEF3C14"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithEightByteBuffer )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * eightByteBuffer,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_CreateWithEightByteBuffer(This,eightByteBuffer,value) \
    ( (This)->lpVtbl->CreateWithEightByteBuffer(This,eightByteBuffer,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbBulkInEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbBulkInEndpointDescriptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbBulkInEndpointDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbBulkInEndpointDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbBulkInEndpointDescriptor[] = L"Windows.Devices.Usb.UsbBulkInEndpointDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbBulkInPipe
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbBulkInPipe ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbBulkInPipe_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbBulkInPipe_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbBulkInPipe[] = L"Windows.Devices.Usb.UsbBulkInPipe";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbBulkOutEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbBulkOutEndpointDescriptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbBulkOutEndpointDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbBulkOutEndpointDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbBulkOutEndpointDescriptor[] = L"Windows.Devices.Usb.UsbBulkOutEndpointDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbBulkOutPipe
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbBulkOutPipe ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbBulkOutPipe_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbBulkOutPipe_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbBulkOutPipe[] = L"Windows.Devices.Usb.UsbBulkOutPipe";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbConfiguration ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbConfiguration_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbConfiguration[] = L"Windows.Devices.Usb.UsbConfiguration";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbConfigurationDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Usb.IUsbConfigurationDescriptorStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbConfigurationDescriptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbConfigurationDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbConfigurationDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbConfigurationDescriptor[] = L"Windows.Devices.Usb.UsbConfigurationDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbControlRequestType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbControlRequestType ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbControlRequestType_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbControlRequestType_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbControlRequestType[] = L"Windows.Devices.Usb.UsbControlRequestType";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbDescriptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbDescriptor[] = L"Windows.Devices.Usb.UsbDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Usb.IUsbDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbDevice ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbDevice[] = L"Windows.Devices.Usb.UsbDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbDeviceClass
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbDeviceClass ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbDeviceClass_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbDeviceClass_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbDeviceClass[] = L"Windows.Devices.Usb.UsbDeviceClass";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbDeviceClasses
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Usb.IUsbDeviceClassesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbDeviceClasses ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbDeviceClasses_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbDeviceClasses_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbDeviceClasses[] = L"Windows.Devices.Usb.UsbDeviceClasses";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbDeviceDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbDeviceDescriptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbDeviceDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbDeviceDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbDeviceDescriptor[] = L"Windows.Devices.Usb.UsbDeviceDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Usb.IUsbEndpointDescriptorStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbEndpointDescriptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbEndpointDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbEndpointDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbEndpointDescriptor[] = L"Windows.Devices.Usb.UsbEndpointDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbInterface
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbInterface ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbInterface_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbInterface_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterface[] = L"Windows.Devices.Usb.UsbInterface";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbInterfaceDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Usb.IUsbInterfaceDescriptorStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbInterfaceDescriptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbInterfaceDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbInterfaceDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterfaceDescriptor[] = L"Windows.Devices.Usb.UsbInterfaceDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbInterfaceSetting
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbInterfaceSetting ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbInterfaceSetting_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbInterfaceSetting_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterfaceSetting[] = L"Windows.Devices.Usb.UsbInterfaceSetting";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbInterruptInEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbInterruptInEndpointDescriptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptInEndpointDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptInEndpointDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterruptInEndpointDescriptor[] = L"Windows.Devices.Usb.UsbInterruptInEndpointDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbInterruptInEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbInterruptInEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptInEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptInEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterruptInEventArgs[] = L"Windows.Devices.Usb.UsbInterruptInEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbInterruptInPipe
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbInterruptInPipe ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptInPipe_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptInPipe_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterruptInPipe[] = L"Windows.Devices.Usb.UsbInterruptInPipe";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbInterruptOutEndpointDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbInterruptOutEndpointDescriptor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptOutEndpointDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptOutEndpointDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterruptOutEndpointDescriptor[] = L"Windows.Devices.Usb.UsbInterruptOutEndpointDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbInterruptOutPipe
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbInterruptOutPipe ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptOutPipe_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbInterruptOutPipe_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterruptOutPipe[] = L"Windows.Devices.Usb.UsbInterruptOutPipe";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Usb.UsbSetupPacket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Devices.Usb.IUsbSetupPacketFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Usb.IUsbSetupPacket ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Usb_UsbSetupPacket_DEFINED
#define RUNTIMECLASS_Windows_Devices_Usb_UsbSetupPacket_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbSetupPacket[] = L"Windows.Devices.Usb.UsbSetupPacket";
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
#endif // __windows2Edevices2Eusb_p_h__

#endif // __windows2Edevices2Eusb_h__
