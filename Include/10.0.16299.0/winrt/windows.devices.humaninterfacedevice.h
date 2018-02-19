/* Header file automatically generated from windows.devices.humaninterfacedevice.idl */
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
#ifndef __windows2Edevices2Ehumaninterfacedevice_h__
#define __windows2Edevices2Ehumaninterfacedevice_h__
#ifndef __windows2Edevices2Ehumaninterfacedevice_p_h__
#define __windows2Edevices2Ehumaninterfacedevice_p_h__


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
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                interface IHidBooleanControl;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                interface IHidBooleanControlDescription;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                interface IHidBooleanControlDescription2;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2 ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                interface IHidCollection;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection ABI::Windows::Devices::HumanInterfaceDevice::IHidCollection

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                interface IHidDevice;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice ABI::Windows::Devices::HumanInterfaceDevice::IHidDevice

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                interface IHidDeviceStatics;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics ABI::Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                interface IHidFeatureReport;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport ABI::Windows::Devices::HumanInterfaceDevice::IHidFeatureReport

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                interface IHidInputReport;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport ABI::Windows::Devices::HumanInterfaceDevice::IHidInputReport

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                interface IHidInputReportReceivedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs ABI::Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                interface IHidNumericControl;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControl

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                interface IHidNumericControlDescription;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                interface IHidOutputReport;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport ABI::Windows::Devices::HumanInterfaceDevice::IHidOutputReport

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                class HidBooleanControl;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_USE
#define DEF___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5cde3c23-d054-53d6-abf1-41e73379b472"))
IIterator<ABI::Windows::Devices::HumanInterfaceDevice::HidBooleanControl*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidBooleanControl*, ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.HumanInterfaceDevice.HidBooleanControl>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::HumanInterfaceDevice::HidBooleanControl*> __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_t;
#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl*>
//#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_USE
#define DEF___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1111e585-5ab0-5d2b-8aed-b6d6186d1c3f"))
IIterable<ABI::Windows::Devices::HumanInterfaceDevice::HidBooleanControl*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidBooleanControl*, ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.HumanInterfaceDevice.HidBooleanControl>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::HumanInterfaceDevice::HidBooleanControl*> __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_t;
#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl*>
//#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                class HidBooleanControlDescription;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_USE
#define DEF___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("203203b0-b7f4-542d-b0d0-9caa1fb55d7f"))
IIterator<ABI::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription*, ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.HumanInterfaceDevice.HidBooleanControlDescription>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription*> __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_t;
#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription*>
//#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_USE
#define DEF___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d0ff0fed-a156-58bf-9411-5777df9d57bf"))
IIterable<ABI::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription*, ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.HumanInterfaceDevice.HidBooleanControlDescription>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription*> __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_t;
#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription*>
//#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                class HidCollection;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_USE
#define DEF___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cefcee70-c7ff-57c1-a675-a0df8976a988"))
IIterator<ABI::Windows::Devices::HumanInterfaceDevice::HidCollection*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidCollection*, ABI::Windows::Devices::HumanInterfaceDevice::IHidCollection*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.HumanInterfaceDevice.HidCollection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::HumanInterfaceDevice::HidCollection*> __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_t;
#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::HumanInterfaceDevice::IHidCollection*>
//#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::HumanInterfaceDevice::IHidCollection*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_USE
#define DEF___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bbeada0f-708f-5b5e-a017-5c64ffb96b69"))
IIterable<ABI::Windows::Devices::HumanInterfaceDevice::HidCollection*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidCollection*, ABI::Windows::Devices::HumanInterfaceDevice::IHidCollection*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.HumanInterfaceDevice.HidCollection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::HumanInterfaceDevice::HidCollection*> __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_t;
#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::HumanInterfaceDevice::IHidCollection*>
//#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::HumanInterfaceDevice::IHidCollection*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                class HidNumericControlDescription;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_USE
#define DEF___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("52b9c36e-7d95-5d1c-acab-23c19ea76f01"))
IIterator<ABI::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription*, ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.HumanInterfaceDevice.HidNumericControlDescription>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription*> __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_t;
#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription*>
//#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_USE
#define DEF___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("868f060d-e0d4-571b-b2f7-431d6984a513"))
IIterable<ABI::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription*, ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.HumanInterfaceDevice.HidNumericControlDescription>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription*> __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_t;
#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription*>
//#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_USE
#define DEF___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0e417dac-591a-5de0-afd6-0b2c04c304e7"))
IVectorView<ABI::Windows::Devices::HumanInterfaceDevice::HidBooleanControl*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidBooleanControl*, ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.HumanInterfaceDevice.HidBooleanControl>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::HumanInterfaceDevice::HidBooleanControl*> __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_t;
#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl*>
//#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_USE
#define DEF___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("aab72786-ec34-536f-a7c5-27394753df2c"))
IVectorView<ABI::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription*, ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.HumanInterfaceDevice.HidBooleanControlDescription>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription*> __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_t;
#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription*>
//#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_USE
#define DEF___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("96f1faac-348f-5b8f-a71d-2d650e0b11f2"))
IVectorView<ABI::Windows::Devices::HumanInterfaceDevice::HidCollection*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidCollection*, ABI::Windows::Devices::HumanInterfaceDevice::IHidCollection*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.HumanInterfaceDevice.HidCollection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::HumanInterfaceDevice::HidCollection*> __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_t;
#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::HumanInterfaceDevice::IHidCollection*>
//#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::HumanInterfaceDevice::IHidCollection*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_USE
#define DEF___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e02ca66c-610a-51b4-aef9-3707b697b985"))
IVectorView<ABI::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription*, ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.HumanInterfaceDevice.HidNumericControlDescription>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription*> __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_t;
#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription*>
//#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                class HidDevice;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b0e8e149-0cb6-55a7-bcc1-d996324d65c4"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::HumanInterfaceDevice::HidDevice*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidDevice*, ABI::Windows::Devices::HumanInterfaceDevice::IHidDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.HumanInterfaceDevice.HidDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::HumanInterfaceDevice::HidDevice*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::HumanInterfaceDevice::IHidDevice*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::HumanInterfaceDevice::IHidDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a76a4fbf-5177-5256-84a8-b31a8dcf1048"))
IAsyncOperation<ABI::Windows::Devices::HumanInterfaceDevice::HidDevice*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidDevice*, ABI::Windows::Devices::HumanInterfaceDevice::IHidDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.HumanInterfaceDevice.HidDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::HumanInterfaceDevice::HidDevice*> __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_t;
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::HumanInterfaceDevice::IHidDevice*>
//#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::HumanInterfaceDevice::IHidDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                class HidFeatureReport;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("db643555-3d16-57fe-b7ef-2bdbd719fdbf"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::HumanInterfaceDevice::HidFeatureReport*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidFeatureReport*, ABI::Windows::Devices::HumanInterfaceDevice::IHidFeatureReport*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.HumanInterfaceDevice.HidFeatureReport>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::HumanInterfaceDevice::HidFeatureReport*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::HumanInterfaceDevice::IHidFeatureReport*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::HumanInterfaceDevice::IHidFeatureReport*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d72fb6f9-42f6-5f45-bfe3-29af247c2e85"))
IAsyncOperation<ABI::Windows::Devices::HumanInterfaceDevice::HidFeatureReport*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidFeatureReport*, ABI::Windows::Devices::HumanInterfaceDevice::IHidFeatureReport*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.HumanInterfaceDevice.HidFeatureReport>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::HumanInterfaceDevice::HidFeatureReport*> __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_t;
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::HumanInterfaceDevice::IHidFeatureReport*>
//#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::HumanInterfaceDevice::IHidFeatureReport*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                class HidInputReport;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("01c83770-03ab-5576-98b4-8d75ce1a9885"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::HumanInterfaceDevice::HidInputReport*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidInputReport*, ABI::Windows::Devices::HumanInterfaceDevice::IHidInputReport*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.HumanInterfaceDevice.HidInputReport>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::HumanInterfaceDevice::HidInputReport*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::HumanInterfaceDevice::IHidInputReport*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::HumanInterfaceDevice::IHidInputReport*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b3e28917-cd48-57b3-a0b1-321432e85bd6"))
IAsyncOperation<ABI::Windows::Devices::HumanInterfaceDevice::HidInputReport*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidInputReport*, ABI::Windows::Devices::HumanInterfaceDevice::IHidInputReport*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.HumanInterfaceDevice.HidInputReport>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::HumanInterfaceDevice::HidInputReport*> __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_t;
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::HumanInterfaceDevice::IHidInputReport*>
//#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::HumanInterfaceDevice::IHidInputReport*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                class HidInputReportReceivedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("31e757c8-8f6a-540b-938b-aba79b6f03ec"))
ITypedEventHandler<ABI::Windows::Devices::HumanInterfaceDevice::HidDevice*,ABI::Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidDevice*, ABI::Windows::Devices::HumanInterfaceDevice::IHidDevice*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs*, ABI::Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.HumanInterfaceDevice.HidDevice, Windows.Devices.HumanInterfaceDevice.HidInputReportReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::HumanInterfaceDevice::HidDevice*,ABI::Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::HumanInterfaceDevice::IHidDevice*,ABI::Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::HumanInterfaceDevice::IHidDevice*,ABI::Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs_USE */


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
        namespace Storage {
            
            typedef enum FileAccessMode : int FileAccessMode;
            
        } /* Windows */
    } /* Storage */} /* ABI */



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
            namespace HumanInterfaceDevice {
                
                typedef enum HidCollectionType : int HidCollectionType;
                
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                
                typedef enum HidReportType : int HidReportType;
                
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */




















namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                class HidNumericControl;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                class HidOutputReport;
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */










/*
 *
 * Struct Windows.Devices.HumanInterfaceDevice.HidCollectionType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                /* [v1_enum, contract] */
                enum HidCollectionType : int
                {
                    HidCollectionType_Physical = 0,
                    HidCollectionType_Application = 1,
                    HidCollectionType_Logical = 2,
                    HidCollectionType_Report = 3,
                    HidCollectionType_NamedArray = 4,
                    HidCollectionType_UsageSwitch = 5,
                    HidCollectionType_UsageModifier = 6,
                    HidCollectionType_Other = 7,
                };
                
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.HumanInterfaceDevice.HidReportType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                /* [v1_enum, contract] */
                enum HidReportType : int
                {
                    HidReportType_Input = 0,
                    HidReportType_Output = 1,
                    HidReportType_Feature = 2,
                };
                
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidBooleanControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidBooleanControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidBooleanControl[] = L"Windows.Devices.HumanInterfaceDevice.IHidBooleanControl";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                /* [object, uuid("524DF48A-3695-408C-BBA2-E2EB5ABFBC20"), exclusiveto, contract] */
                MIDL_INTERFACE("524DF48A-3695-408C-BBA2-E2EB5ABFBC20")
                IHidBooleanControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsagePage(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsageId(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsActive(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsActive(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ControlDescription(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHidBooleanControl=_uuidof(IHidBooleanControl);
                
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidBooleanControlDescription
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription[] = L"Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                /* [object, uuid("6196E543-29D8-4A2A-8683-849E207BBE31"), exclusiveto, contract] */
                MIDL_INTERFACE("6196E543-29D8-4A2A-8683-849E207BBE31")
                IHidBooleanControlDescription : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReportId(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReportType(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::HumanInterfaceDevice::HidReportType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsagePage(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsageId(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ParentCollections(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHidBooleanControlDescription=_uuidof(IHidBooleanControlDescription);
                
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidBooleanControlDescription
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription2[] = L"Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                /* [object, uuid("C8EED2EA-8A77-4C36-AA00-5FF0449D3E73"), exclusiveto, contract] */
                MIDL_INTERFACE("C8EED2EA-8A77-4C36-AA00-5FF0449D3E73")
                IHidBooleanControlDescription2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAbsolute(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHidBooleanControlDescription2=_uuidof(IHidBooleanControlDescription2);
                
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidCollection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidCollection[] = L"Windows.Devices.HumanInterfaceDevice.IHidCollection";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                /* [object, uuid("7189F5A3-32F1-46E3-BEFD-44D2663B7E6A"), exclusiveto, contract] */
                MIDL_INTERFACE("7189F5A3-32F1-46E3-BEFD-44D2663B7E6A")
                IHidCollection : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::HumanInterfaceDevice::HidCollectionType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsagePage(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsageId(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHidCollection=_uuidof(IHidCollection);
                
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidDevice[] = L"Windows.Devices.HumanInterfaceDevice.IHidDevice";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                /* [object, uuid("5F8A14E7-2200-432E-95DA-D09B87D574A8"), exclusiveto, contract] */
                MIDL_INTERFACE("5F8A14E7-2200-432E-95DA-D09B87D574A8")
                IHidDevice : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VendorId(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProductId(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Version(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsagePage(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsageId(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetInputReportAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetInputReportByIdAsync(
                        /* [in] */UINT16 reportId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetFeatureReportAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetFeatureReportByIdAsync(
                        /* [in] */UINT16 reportId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateOutputReport(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidOutputReport * * outputReport
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateOutputReportById(
                        /* [in] */UINT16 reportId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidOutputReport * * outputReport
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFeatureReport(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidFeatureReport * * featureReport
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFeatureReportById(
                        /* [in] */UINT16 reportId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidFeatureReport * * featureReport
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SendOutputReportAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidOutputReport * outputReport,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SendFeatureReportAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidFeatureReport * featureReport,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetBooleanControlDescriptions(
                        /* [in] */ABI::Windows::Devices::HumanInterfaceDevice::HidReportType reportType,
                        /* [in] */UINT16 usagePage,
                        /* [in] */UINT16 usageId,
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNumericControlDescriptions(
                        /* [in] */ABI::Windows::Devices::HumanInterfaceDevice::HidReportType reportType,
                        /* [in] */UINT16 usagePage,
                        /* [in] */UINT16 usageId,
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_InputReportReceived(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs * reportHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_InputReportReceived(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHidDevice=_uuidof(IHidDevice);
                
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidDeviceStatics[] = L"Windows.Devices.HumanInterfaceDevice.IHidDeviceStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                /* [object, uuid("9E5981E4-9856-418C-9F73-77DE0CD85754"), exclusiveto, contract] */
                MIDL_INTERFACE("9E5981E4-9856-418C-9F73-77DE0CD85754")
                IHidDeviceStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [in] */UINT16 usagePage,
                        /* [in] */UINT16 usageId,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorVidPid(
                        /* [in] */UINT16 usagePage,
                        /* [in] */UINT16 usageId,
                        /* [in] */UINT16 vendorId,
                        /* [in] */UINT16 productId,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [in] */ABI::Windows::Storage::FileAccessMode accessMode,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * * hidDevice
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHidDeviceStatics=_uuidof(IHidDeviceStatics);
                
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidFeatureReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidFeatureReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidFeatureReport[] = L"Windows.Devices.HumanInterfaceDevice.IHidFeatureReport";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                /* [object, uuid("841D9B79-5AE5-46E3-82EF-1FEC5C8942F4"), exclusiveto, contract] */
                MIDL_INTERFACE("841D9B79-5AE5-46E3-82EF-1FEC5C8942F4")
                IHidFeatureReport : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Data(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Data(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetBooleanControl(
                        /* [in] */UINT16 usagePage,
                        /* [in] */UINT16 usageId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetBooleanControlByDescription(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription * controlDescription,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNumericControl(
                        /* [in] */UINT16 usagePage,
                        /* [in] */UINT16 usageId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControl * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNumericControlByDescription(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription * controlDescription,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControl * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHidFeatureReport=_uuidof(IHidFeatureReport);
                
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidInputReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidInputReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidInputReport[] = L"Windows.Devices.HumanInterfaceDevice.IHidInputReport";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                /* [object, uuid("C35D0E50-F7E7-4E8D-B23E-CABBE56B90E9"), exclusiveto, contract] */
                MIDL_INTERFACE("C35D0E50-F7E7-4E8D-B23E-CABBE56B90E9")
                IHidInputReport : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Data(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivatedBooleanControls(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TransitionedBooleanControls(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetBooleanControl(
                        /* [in] */UINT16 usagePage,
                        /* [in] */UINT16 usageId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetBooleanControlByDescription(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription * controlDescription,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNumericControl(
                        /* [in] */UINT16 usagePage,
                        /* [in] */UINT16 usageId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControl * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNumericControlByDescription(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription * controlDescription,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControl * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHidInputReport=_uuidof(IHidInputReport);
                
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidInputReportReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidInputReportReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidInputReportReceivedEventArgs[] = L"Windows.Devices.HumanInterfaceDevice.IHidInputReportReceivedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                /* [object, uuid("7059C5CB-59B2-4DC2-985C-0ADC6136FA2D"), exclusiveto, contract] */
                MIDL_INTERFACE("7059C5CB-59B2-4DC2-985C-0ADC6136FA2D")
                IHidInputReportReceivedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Report(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidInputReport * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHidInputReportReceivedEventArgs=_uuidof(IHidInputReportReceivedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidNumericControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidNumericControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidNumericControl[] = L"Windows.Devices.HumanInterfaceDevice.IHidNumericControl";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                /* [object, uuid("E38A12A5-35A7-4B75-89C8-FB1F28B10823"), exclusiveto, contract] */
                MIDL_INTERFACE("E38A12A5-35A7-4B75-89C8-FB1F28B10823")
                IHidNumericControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsGrouped(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsagePage(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsageId(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__out INT64 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                        /* [in] */INT64 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScaledValue(
                        /* [retval, out] */__RPC__out INT64 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ScaledValue(
                        /* [in] */INT64 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ControlDescription(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHidNumericControl=_uuidof(IHidNumericControl);
                
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidNumericControlDescription
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidNumericControlDescription
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription[] = L"Windows.Devices.HumanInterfaceDevice.IHidNumericControlDescription";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                /* [object, uuid("638D5E86-1D97-4C75-927F-5FF58BA05E32"), exclusiveto, contract] */
                MIDL_INTERFACE("638D5E86-1D97-4C75-927F-5FF58BA05E32")
                IHidNumericControlDescription : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReportId(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReportType(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::HumanInterfaceDevice::HidReportType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReportSize(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReportCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsagePage(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsageId(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LogicalMinimum(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LogicalMaximum(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhysicalMinimum(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhysicalMaximum(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UnitExponent(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Unit(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAbsolute(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasNull(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ParentCollections(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHidNumericControlDescription=_uuidof(IHidNumericControlDescription);
                
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidOutputReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidOutputReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidOutputReport[] = L"Windows.Devices.HumanInterfaceDevice.IHidOutputReport";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace HumanInterfaceDevice {
                /* [object, uuid("62CB2544-C896-4463-93C1-DF9DB053C450"), exclusiveto, contract] */
                MIDL_INTERFACE("62CB2544-C896-4463-93C1-DF9DB053C450")
                IHidOutputReport : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Data(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Data(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetBooleanControl(
                        /* [in] */UINT16 usagePage,
                        /* [in] */UINT16 usageId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetBooleanControlByDescription(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription * controlDescription,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNumericControl(
                        /* [in] */UINT16 usagePage,
                        /* [in] */UINT16 usageId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControl * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNumericControlByDescription(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription * controlDescription,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::HumanInterfaceDevice::IHidNumericControl * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHidOutputReport=_uuidof(IHidOutputReport);
                
            } /* Windows */
        } /* Devices */
    } /* HumanInterfaceDevice */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidBooleanControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidBooleanControl ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidBooleanControl_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidBooleanControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidBooleanControl[] = L"Windows.Devices.HumanInterfaceDevice.HidBooleanControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidBooleanControlDescription
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription ** Default Interface **
 *    Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidBooleanControlDescription_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidBooleanControlDescription_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidBooleanControlDescription[] = L"Windows.Devices.HumanInterfaceDevice.HidBooleanControlDescription";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidCollection ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidCollection_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidCollection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidCollection[] = L"Windows.Devices.HumanInterfaceDevice.HidCollection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.HumanInterfaceDevice.IHidDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidDevice ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidDevice[] = L"Windows.Devices.HumanInterfaceDevice.HidDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidFeatureReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidFeatureReport ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidFeatureReport_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidFeatureReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidFeatureReport[] = L"Windows.Devices.HumanInterfaceDevice.HidFeatureReport";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidInputReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidInputReport ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidInputReport_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidInputReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidInputReport[] = L"Windows.Devices.HumanInterfaceDevice.HidInputReport";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidInputReportReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidInputReportReceivedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidInputReportReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidInputReportReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidInputReportReceivedEventArgs[] = L"Windows.Devices.HumanInterfaceDevice.HidInputReportReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidNumericControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidNumericControl ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidNumericControl_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidNumericControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidNumericControl[] = L"Windows.Devices.HumanInterfaceDevice.HidNumericControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidNumericControlDescription
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidNumericControlDescription ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidNumericControlDescription_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidNumericControlDescription_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidNumericControlDescription[] = L"Windows.Devices.HumanInterfaceDevice.HidNumericControlDescription";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidOutputReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidOutputReport ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidOutputReport_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidOutputReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidOutputReport[] = L"Windows.Devices.HumanInterfaceDevice.HidOutputReport";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl;

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription;

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2 __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2;

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection;

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice;

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics;

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport;

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport;

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl;

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription;

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport;

#endif // ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl;

typedef struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlVtbl;

interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl;

typedef  struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlVtbl;

interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription;

typedef struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl;

interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription;

typedef  struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl;

interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection;

typedef struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollectionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollectionVtbl;

interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollectionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection;

typedef  struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollectionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollectionVtbl;

interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollectionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription;

typedef struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl;

interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription;

typedef  struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl;

interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl;

typedef struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlVtbl;

interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription;

typedef struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl;

interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection;

typedef struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollectionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollectionVtbl;

interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollectionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription;

typedef struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl;

interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDeviceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDeviceVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReportVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReportVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReportVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReportVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReportVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs_INTERFACE_DEFINED__

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



#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CStorage_CFileAccessMode __x_ABI_CWindows_CStorage_CFileAccessMode;



#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidCollectionType __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidCollectionType;


typedef enum __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidReportType __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidReportType;































/*
 *
 * Struct Windows.Devices.HumanInterfaceDevice.HidCollectionType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidCollectionType
{
    HidCollectionType_Physical = 0,
    HidCollectionType_Application = 1,
    HidCollectionType_Logical = 2,
    HidCollectionType_Report = 3,
    HidCollectionType_NamedArray = 4,
    HidCollectionType_UsageSwitch = 5,
    HidCollectionType_UsageModifier = 6,
    HidCollectionType_Other = 7,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.HumanInterfaceDevice.HidReportType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidReportType
{
    HidReportType_Input = 0,
    HidReportType_Output = 1,
    HidReportType_Feature = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidBooleanControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidBooleanControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidBooleanControl[] = L"Windows.Devices.HumanInterfaceDevice.IHidBooleanControl";
/* [object, uuid("524DF48A-3695-408C-BBA2-E2EB5ABFBC20"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsagePage )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsageId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsActive )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsActive )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ControlDescription )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlVtbl;

interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_get_UsagePage(This,value) \
    ( (This)->lpVtbl->get_UsagePage(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_get_UsageId(This,value) \
    ( (This)->lpVtbl->get_UsageId(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_get_IsActive(This,value) \
    ( (This)->lpVtbl->get_IsActive(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_put_IsActive(This,value) \
    ( (This)->lpVtbl->put_IsActive(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_get_ControlDescription(This,value) \
    ( (This)->lpVtbl->get_ControlDescription(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidBooleanControlDescription
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription[] = L"Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription";
/* [object, uuid("6196E543-29D8-4A2A-8683-849E207BBE31"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReportId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReportType )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidReportType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsagePage )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsageId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ParentCollections )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescriptionVtbl;

interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescriptionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_get_ReportId(This,value) \
    ( (This)->lpVtbl->get_ReportId(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_get_ReportType(This,value) \
    ( (This)->lpVtbl->get_ReportType(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_get_UsagePage(This,value) \
    ( (This)->lpVtbl->get_UsagePage(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_get_UsageId(This,value) \
    ( (This)->lpVtbl->get_UsageId(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_get_ParentCollections(This,value) \
    ( (This)->lpVtbl->get_ParentCollections(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidBooleanControlDescription
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription2[] = L"Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription2";
/* [object, uuid("C8EED2EA-8A77-4C36-AA00-5FF0449D3E73"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAbsolute )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2Vtbl;

interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_get_IsAbsolute(This,value) \
    ( (This)->lpVtbl->get_IsAbsolute(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidCollection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidCollection[] = L"Windows.Devices.HumanInterfaceDevice.IHidCollection";
/* [object, uuid("7189F5A3-32F1-46E3-BEFD-44D2663B7E6A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidCollectionType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsagePage )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsageId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollectionVtbl;

interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_get_UsagePage(This,value) \
    ( (This)->lpVtbl->get_UsagePage(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_get_UsageId(This,value) \
    ( (This)->lpVtbl->get_UsageId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidDevice[] = L"Windows.Devices.HumanInterfaceDevice.IHidDevice";
/* [object, uuid("5F8A14E7-2200-432E-95DA-D09B87D574A8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VendorId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsagePage )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsageId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetInputReportAsync )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetInputReportByIdAsync )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [in] */UINT16 reportId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetFeatureReportAsync )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetFeatureReportByIdAsync )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [in] */UINT16 reportId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateOutputReport )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * * outputReport
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateOutputReportById )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [in] */UINT16 reportId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * * outputReport
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFeatureReport )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * * featureReport
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFeatureReportById )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [in] */UINT16 reportId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * * featureReport
        );
    HRESULT ( STDMETHODCALLTYPE *SendOutputReportAsync )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * outputReport,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SendFeatureReportAsync )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * featureReport,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanControlDescriptions )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [in] */__x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidReportType reportType,
        /* [in] */UINT16 usagePage,
        /* [in] */UINT16 usageId,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumericControlDescriptions )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [in] */__x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidReportType reportType,
        /* [in] */UINT16 usagePage,
        /* [in] */UINT16 usageId,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_InputReportReceived )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs * reportHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_InputReportReceived )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceVtbl;

interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_get_VendorId(This,value) \
    ( (This)->lpVtbl->get_VendorId(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_get_ProductId(This,value) \
    ( (This)->lpVtbl->get_ProductId(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_get_Version(This,value) \
    ( (This)->lpVtbl->get_Version(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_get_UsagePage(This,value) \
    ( (This)->lpVtbl->get_UsagePage(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_get_UsageId(This,value) \
    ( (This)->lpVtbl->get_UsageId(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_GetInputReportAsync(This,value) \
    ( (This)->lpVtbl->GetInputReportAsync(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_GetInputReportByIdAsync(This,reportId,value) \
    ( (This)->lpVtbl->GetInputReportByIdAsync(This,reportId,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_GetFeatureReportAsync(This,value) \
    ( (This)->lpVtbl->GetFeatureReportAsync(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_GetFeatureReportByIdAsync(This,reportId,value) \
    ( (This)->lpVtbl->GetFeatureReportByIdAsync(This,reportId,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_CreateOutputReport(This,outputReport) \
    ( (This)->lpVtbl->CreateOutputReport(This,outputReport) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_CreateOutputReportById(This,reportId,outputReport) \
    ( (This)->lpVtbl->CreateOutputReportById(This,reportId,outputReport) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_CreateFeatureReport(This,featureReport) \
    ( (This)->lpVtbl->CreateFeatureReport(This,featureReport) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_CreateFeatureReportById(This,reportId,featureReport) \
    ( (This)->lpVtbl->CreateFeatureReportById(This,reportId,featureReport) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_SendOutputReportAsync(This,outputReport,operation) \
    ( (This)->lpVtbl->SendOutputReportAsync(This,outputReport,operation) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_SendFeatureReportAsync(This,featureReport,operation) \
    ( (This)->lpVtbl->SendFeatureReportAsync(This,featureReport,operation) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_GetBooleanControlDescriptions(This,reportType,usagePage,usageId,value) \
    ( (This)->lpVtbl->GetBooleanControlDescriptions(This,reportType,usagePage,usageId,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_GetNumericControlDescriptions(This,reportType,usagePage,usageId,value) \
    ( (This)->lpVtbl->GetNumericControlDescriptions(This,reportType,usagePage,usageId,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_add_InputReportReceived(This,reportHandler,token) \
    ( (This)->lpVtbl->add_InputReportReceived(This,reportHandler,token) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_remove_InputReportReceived(This,token) \
    ( (This)->lpVtbl->remove_InputReportReceived(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidDeviceStatics[] = L"Windows.Devices.HumanInterfaceDevice.IHidDeviceStatics";
/* [object, uuid("9E5981E4-9856-418C-9F73-77DE0CD85754"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics * This,
        /* [in] */UINT16 usagePage,
        /* [in] */UINT16 usageId,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorVidPid )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics * This,
        /* [in] */UINT16 usagePage,
        /* [in] */UINT16 usageId,
        /* [in] */UINT16 vendorId,
        /* [in] */UINT16 productId,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [in] */__x_ABI_CWindows_CStorage_CFileAccessMode accessMode,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * * hidDevice
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_GetDeviceSelector(This,usagePage,usageId,selector) \
    ( (This)->lpVtbl->GetDeviceSelector(This,usagePage,usageId,selector) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_GetDeviceSelectorVidPid(This,usagePage,usageId,vendorId,productId,selector) \
    ( (This)->lpVtbl->GetDeviceSelectorVidPid(This,usagePage,usageId,vendorId,productId,selector) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_FromIdAsync(This,deviceId,accessMode,hidDevice) \
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,accessMode,hidDevice) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidFeatureReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidFeatureReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidFeatureReport[] = L"Windows.Devices.HumanInterfaceDevice.IHidFeatureReport";
/* [object, uuid("841D9B79-5AE5-46E3-82EF-1FEC5C8942F4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanControl )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
        /* [in] */UINT16 usagePage,
        /* [in] */UINT16 usageId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanControlByDescription )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * controlDescription,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumericControl )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
        /* [in] */UINT16 usagePage,
        /* [in] */UINT16 usageId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumericControlByDescription )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * controlDescription,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReportVtbl;

interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReportVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_get_Data(This,value) \
    ( (This)->lpVtbl->get_Data(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_put_Data(This,value) \
    ( (This)->lpVtbl->put_Data(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_GetBooleanControl(This,usagePage,usageId,value) \
    ( (This)->lpVtbl->GetBooleanControl(This,usagePage,usageId,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_GetBooleanControlByDescription(This,controlDescription,value) \
    ( (This)->lpVtbl->GetBooleanControlByDescription(This,controlDescription,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_GetNumericControl(This,usagePage,usageId,value) \
    ( (This)->lpVtbl->GetNumericControl(This,usagePage,usageId,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_GetNumericControlByDescription(This,controlDescription,value) \
    ( (This)->lpVtbl->GetNumericControlByDescription(This,controlDescription,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidInputReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidInputReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidInputReport[] = L"Windows.Devices.HumanInterfaceDevice.IHidInputReport";
/* [object, uuid("C35D0E50-F7E7-4E8D-B23E-CABBE56B90E9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivatedBooleanControls )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TransitionedBooleanControls )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanControl )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
        /* [in] */UINT16 usagePage,
        /* [in] */UINT16 usageId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanControlByDescription )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * controlDescription,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumericControl )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
        /* [in] */UINT16 usagePage,
        /* [in] */UINT16 usageId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumericControlByDescription )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * controlDescription,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportVtbl;

interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_get_Data(This,value) \
    ( (This)->lpVtbl->get_Data(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_get_ActivatedBooleanControls(This,value) \
    ( (This)->lpVtbl->get_ActivatedBooleanControls(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_get_TransitionedBooleanControls(This,value) \
    ( (This)->lpVtbl->get_TransitionedBooleanControls(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_GetBooleanControl(This,usagePage,usageId,value) \
    ( (This)->lpVtbl->GetBooleanControl(This,usagePage,usageId,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_GetBooleanControlByDescription(This,controlDescription,value) \
    ( (This)->lpVtbl->GetBooleanControlByDescription(This,controlDescription,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_GetNumericControl(This,usagePage,usageId,value) \
    ( (This)->lpVtbl->GetNumericControl(This,usagePage,usageId,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_GetNumericControlByDescription(This,controlDescription,value) \
    ( (This)->lpVtbl->GetNumericControlByDescription(This,controlDescription,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidInputReportReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidInputReportReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidInputReportReceivedEventArgs[] = L"Windows.Devices.HumanInterfaceDevice.IHidInputReportReceivedEventArgs";
/* [object, uuid("7059C5CB-59B2-4DC2-985C-0ADC6136FA2D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Report )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_get_Report(This,value) \
    ( (This)->lpVtbl->get_Report(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidNumericControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidNumericControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidNumericControl[] = L"Windows.Devices.HumanInterfaceDevice.IHidNumericControl";
/* [object, uuid("E38A12A5-35A7-4B75-89C8-FB1F28B10823"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsGrouped )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsagePage )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsageId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
        /* [retval, out] */__RPC__out INT64 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
        /* [in] */INT64 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScaledValue )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
        /* [retval, out] */__RPC__out INT64 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ScaledValue )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
        /* [in] */INT64 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ControlDescription )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlVtbl;

interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_get_IsGrouped(This,value) \
    ( (This)->lpVtbl->get_IsGrouped(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_get_UsagePage(This,value) \
    ( (This)->lpVtbl->get_UsagePage(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_get_UsageId(This,value) \
    ( (This)->lpVtbl->get_UsageId(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_get_ScaledValue(This,value) \
    ( (This)->lpVtbl->get_ScaledValue(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_put_ScaledValue(This,value) \
    ( (This)->lpVtbl->put_ScaledValue(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_get_ControlDescription(This,value) \
    ( (This)->lpVtbl->get_ControlDescription(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidNumericControlDescription
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidNumericControlDescription
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription[] = L"Windows.Devices.HumanInterfaceDevice.IHidNumericControlDescription";
/* [object, uuid("638D5E86-1D97-4C75-927F-5FF58BA05E32"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReportId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReportType )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidReportType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReportSize )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReportCount )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsagePage )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsageId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LogicalMinimum )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LogicalMaximum )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhysicalMinimum )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhysicalMaximum )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UnitExponent )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Unit )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAbsolute )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasNull )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ParentCollections )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescriptionVtbl;

interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescriptionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_get_ReportId(This,value) \
    ( (This)->lpVtbl->get_ReportId(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_get_ReportType(This,value) \
    ( (This)->lpVtbl->get_ReportType(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_get_ReportSize(This,value) \
    ( (This)->lpVtbl->get_ReportSize(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_get_ReportCount(This,value) \
    ( (This)->lpVtbl->get_ReportCount(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_get_UsagePage(This,value) \
    ( (This)->lpVtbl->get_UsagePage(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_get_UsageId(This,value) \
    ( (This)->lpVtbl->get_UsageId(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_get_LogicalMinimum(This,value) \
    ( (This)->lpVtbl->get_LogicalMinimum(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_get_LogicalMaximum(This,value) \
    ( (This)->lpVtbl->get_LogicalMaximum(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_get_PhysicalMinimum(This,value) \
    ( (This)->lpVtbl->get_PhysicalMinimum(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_get_PhysicalMaximum(This,value) \
    ( (This)->lpVtbl->get_PhysicalMaximum(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_get_UnitExponent(This,value) \
    ( (This)->lpVtbl->get_UnitExponent(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_get_Unit(This,value) \
    ( (This)->lpVtbl->get_Unit(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_get_IsAbsolute(This,value) \
    ( (This)->lpVtbl->get_IsAbsolute(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_get_HasNull(This,value) \
    ( (This)->lpVtbl->get_HasNull(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_get_ParentCollections(This,value) \
    ( (This)->lpVtbl->get_ParentCollections(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.HumanInterfaceDevice.IHidOutputReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.HumanInterfaceDevice.HidOutputReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidOutputReport[] = L"Windows.Devices.HumanInterfaceDevice.IHidOutputReport";
/* [object, uuid("62CB2544-C896-4463-93C1-DF9DB053C450"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanControl )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
        /* [in] */UINT16 usagePage,
        /* [in] */UINT16 usageId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanControlByDescription )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * controlDescription,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumericControl )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
        /* [in] */UINT16 usagePage,
        /* [in] */UINT16 usageId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumericControlByDescription )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * controlDescription,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReportVtbl;

interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReportVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_get_Data(This,value) \
    ( (This)->lpVtbl->get_Data(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_put_Data(This,value) \
    ( (This)->lpVtbl->put_Data(This,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_GetBooleanControl(This,usagePage,usageId,value) \
    ( (This)->lpVtbl->GetBooleanControl(This,usagePage,usageId,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_GetBooleanControlByDescription(This,controlDescription,value) \
    ( (This)->lpVtbl->GetBooleanControlByDescription(This,controlDescription,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_GetNumericControl(This,usagePage,usageId,value) \
    ( (This)->lpVtbl->GetNumericControl(This,usagePage,usageId,value) )

#define __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_GetNumericControlByDescription(This,controlDescription,value) \
    ( (This)->lpVtbl->GetNumericControlByDescription(This,controlDescription,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidBooleanControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidBooleanControl ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidBooleanControl_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidBooleanControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidBooleanControl[] = L"Windows.Devices.HumanInterfaceDevice.HidBooleanControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidBooleanControlDescription
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription ** Default Interface **
 *    Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidBooleanControlDescription_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidBooleanControlDescription_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidBooleanControlDescription[] = L"Windows.Devices.HumanInterfaceDevice.HidBooleanControlDescription";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidCollection ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidCollection_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidCollection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidCollection[] = L"Windows.Devices.HumanInterfaceDevice.HidCollection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.HumanInterfaceDevice.IHidDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidDevice ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidDevice[] = L"Windows.Devices.HumanInterfaceDevice.HidDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidFeatureReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidFeatureReport ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidFeatureReport_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidFeatureReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidFeatureReport[] = L"Windows.Devices.HumanInterfaceDevice.HidFeatureReport";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidInputReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidInputReport ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidInputReport_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidInputReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidInputReport[] = L"Windows.Devices.HumanInterfaceDevice.HidInputReport";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidInputReportReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidInputReportReceivedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidInputReportReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidInputReportReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidInputReportReceivedEventArgs[] = L"Windows.Devices.HumanInterfaceDevice.HidInputReportReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidNumericControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidNumericControl ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidNumericControl_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidNumericControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidNumericControl[] = L"Windows.Devices.HumanInterfaceDevice.HidNumericControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidNumericControlDescription
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidNumericControlDescription ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidNumericControlDescription_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidNumericControlDescription_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidNumericControlDescription[] = L"Windows.Devices.HumanInterfaceDevice.HidNumericControlDescription";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.HumanInterfaceDevice.HidOutputReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.HumanInterfaceDevice.IHidOutputReport ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidOutputReport_DEFINED
#define RUNTIMECLASS_Windows_Devices_HumanInterfaceDevice_HidOutputReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidOutputReport[] = L"Windows.Devices.HumanInterfaceDevice.HidOutputReport";
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
#endif // __windows2Edevices2Ehumaninterfacedevice_p_h__

#endif // __windows2Edevices2Ehumaninterfacedevice_h__
