/* Header file automatically generated from windows.devices.serialcommunication.idl */
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
#ifndef __windows2Edevices2Eserialcommunication_h__
#define __windows2Edevices2Eserialcommunication_h__
#ifndef __windows2Edevices2Eserialcommunication_p_h__
#define __windows2Edevices2Eserialcommunication_p_h__


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
#ifndef ____x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                interface IErrorReceivedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */
#define __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs ABI::Windows::Devices::SerialCommunication::IErrorReceivedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                interface IPinChangedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */
#define __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs ABI::Windows::Devices::SerialCommunication::IPinChangedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                interface ISerialDevice;
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */
#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice ABI::Windows::Devices::SerialCommunication::ISerialDevice

#endif // ____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                interface ISerialDeviceStatics;
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */
#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics ABI::Windows::Devices::SerialCommunication::ISerialDeviceStatics

#endif // ____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                class SerialDevice;
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("84a34b33-06fc-5e63-8ee2-eab4ff69acb7"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::SerialCommunication::SerialDevice*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::SerialCommunication::SerialDevice*, ABI::Windows::Devices::SerialCommunication::ISerialDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.SerialCommunication.SerialDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::SerialCommunication::SerialDevice*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::SerialCommunication::ISerialDevice*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::SerialCommunication::ISerialDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("44ef26ed-c1ff-546a-a46b-6a37de9187fb"))
IAsyncOperation<ABI::Windows::Devices::SerialCommunication::SerialDevice*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::SerialCommunication::SerialDevice*, ABI::Windows::Devices::SerialCommunication::ISerialDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.SerialCommunication.SerialDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::SerialCommunication::SerialDevice*> __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice_t;
#define __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::SerialCommunication::ISerialDevice*>
//#define __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::SerialCommunication::ISerialDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                class ErrorReceivedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d92ea323-b7bf-5e02-b9fb-c61f97d080e9"))
ITypedEventHandler<ABI::Windows::Devices::SerialCommunication::SerialDevice*,ABI::Windows::Devices::SerialCommunication::ErrorReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::SerialCommunication::SerialDevice*, ABI::Windows::Devices::SerialCommunication::ISerialDevice*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::SerialCommunication::ErrorReceivedEventArgs*, ABI::Windows::Devices::SerialCommunication::IErrorReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.SerialCommunication.SerialDevice, Windows.Devices.SerialCommunication.ErrorReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::SerialCommunication::SerialDevice*,ABI::Windows::Devices::SerialCommunication::ErrorReceivedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::SerialCommunication::ISerialDevice*,ABI::Windows::Devices::SerialCommunication::IErrorReceivedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::SerialCommunication::ISerialDevice*,ABI::Windows::Devices::SerialCommunication::IErrorReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                class PinChangedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e496c3ef-5802-5ac4-ac2e-96bc23fa9447"))
ITypedEventHandler<ABI::Windows::Devices::SerialCommunication::SerialDevice*,ABI::Windows::Devices::SerialCommunication::PinChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::SerialCommunication::SerialDevice*, ABI::Windows::Devices::SerialCommunication::ISerialDevice*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::SerialCommunication::PinChangedEventArgs*, ABI::Windows::Devices::SerialCommunication::IPinChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.SerialCommunication.SerialDevice, Windows.Devices.SerialCommunication.PinChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::SerialCommunication::SerialDevice*,ABI::Windows::Devices::SerialCommunication::PinChangedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::SerialCommunication::ISerialDevice*,ABI::Windows::Devices::SerialCommunication::IPinChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::SerialCommunication::ISerialDevice*,ABI::Windows::Devices::SerialCommunication::IPinChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



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
            namespace SerialCommunication {
                
                typedef enum SerialError : int SerialError;
                
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                
                typedef enum SerialHandshake : int SerialHandshake;
                
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                
                typedef enum SerialParity : int SerialParity;
                
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                
                typedef enum SerialPinChange : int SerialPinChange;
                
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                
                typedef enum SerialStopBitCount : int SerialStopBitCount;
                
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */
















/*
 *
 * Struct Windows.Devices.SerialCommunication.SerialError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                /* [v1_enum, contract] */
                enum SerialError : int
                {
                    SerialError_Frame = 0,
                    SerialError_BufferOverrun = 1,
                    SerialError_ReceiveFull = 2,
                    SerialError_ReceiveParity = 3,
                    SerialError_TransmitFull = 4,
                };
                
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.SerialCommunication.SerialHandshake
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                /* [v1_enum, contract] */
                enum SerialHandshake : int
                {
                    SerialHandshake_None = 0,
                    SerialHandshake_RequestToSend = 1,
                    SerialHandshake_XOnXOff = 2,
                    SerialHandshake_RequestToSendXOnXOff = 3,
                };
                
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.SerialCommunication.SerialParity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                /* [v1_enum, contract] */
                enum SerialParity : int
                {
                    SerialParity_None = 0,
                    SerialParity_Odd = 1,
                    SerialParity_Even = 2,
                    SerialParity_Mark = 3,
                    SerialParity_Space = 4,
                };
                
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.SerialCommunication.SerialPinChange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                /* [v1_enum, contract] */
                enum SerialPinChange : int
                {
                    SerialPinChange_BreakSignal = 0,
                    SerialPinChange_CarrierDetect = 1,
                    SerialPinChange_ClearToSend = 2,
                    SerialPinChange_DataSetReady = 3,
                    SerialPinChange_RingIndicator = 4,
                };
                
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.SerialCommunication.SerialStopBitCount
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                /* [v1_enum, contract] */
                enum SerialStopBitCount : int
                {
                    SerialStopBitCount_One = 0,
                    SerialStopBitCount_OnePointFive = 1,
                    SerialStopBitCount_Two = 2,
                };
                
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.SerialCommunication.IErrorReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.SerialCommunication.ErrorReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SerialCommunication_IErrorReceivedEventArgs[] = L"Windows.Devices.SerialCommunication.IErrorReceivedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                /* [object, uuid("FCC6BF59-1283-4D8A-BFDF-566B33DDB28F"), exclusiveto, contract] */
                MIDL_INTERFACE("FCC6BF59-1283-4D8A-BFDF-566B33DDB28F")
                IErrorReceivedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Error(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::SerialCommunication::SerialError * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IErrorReceivedEventArgs=_uuidof(IErrorReceivedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.SerialCommunication.IPinChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.SerialCommunication.PinChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SerialCommunication_IPinChangedEventArgs[] = L"Windows.Devices.SerialCommunication.IPinChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                /* [object, uuid("A2BF1DB0-FC9C-4607-93D0-FA5E8343EE22"), exclusiveto, contract] */
                MIDL_INTERFACE("A2BF1DB0-FC9C-4607-93D0-FA5E8343EE22")
                IPinChangedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PinChange(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::SerialCommunication::SerialPinChange * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPinChangedEventArgs=_uuidof(IPinChangedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.SerialCommunication.ISerialDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.SerialCommunication.SerialDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SerialCommunication_ISerialDevice[] = L"Windows.Devices.SerialCommunication.ISerialDevice";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                /* [object, uuid("E187CCC6-2210-414F-B65A-F5553A03372A"), exclusiveto, contract] */
                MIDL_INTERFACE("E187CCC6-2210-414F-B65A-F5553A03372A")
                ISerialDevice : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BaudRate(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BaudRate(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BreakSignalState(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BreakSignalState(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BytesReceived(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CarrierDetectState(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClearToSendState(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataBits(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DataBits(
                        /* [in] */UINT16 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataSetReadyState(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handshake(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::SerialCommunication::SerialHandshake * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handshake(
                        /* [in] */ABI::Windows::Devices::SerialCommunication::SerialHandshake value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDataTerminalReadyEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsDataTerminalReadyEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRequestToSendEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsRequestToSendEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Parity(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::SerialCommunication::SerialParity * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Parity(
                        /* [in] */ABI::Windows::Devices::SerialCommunication::SerialParity value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PortName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReadTimeout(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReadTimeout(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StopBits(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::SerialCommunication::SerialStopBitCount * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_StopBits(
                        /* [in] */ABI::Windows::Devices::SerialCommunication::SerialStopBitCount value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsbVendorId(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsbProductId(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WriteTimeout(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_WriteTimeout(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IInputStream * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutputStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IOutputStream * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ErrorReceived(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs * reportHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ErrorReceived(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PinChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs * reportHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PinChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISerialDevice=_uuidof(ISerialDevice);
                
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.SerialCommunication.ISerialDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.SerialCommunication.SerialDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SerialCommunication_ISerialDeviceStatics[] = L"Windows.Devices.SerialCommunication.ISerialDeviceStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace SerialCommunication {
                /* [object, uuid("058C4A70-0836-4993-AE1A-B61AE3BE056B"), exclusiveto, contract] */
                MIDL_INTERFACE("058C4A70-0836-4993-AE1A-B61AE3BE056B")
                ISerialDeviceStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorFromPortName(
                        /* [in] */__RPC__in HSTRING portName,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorFromUsbVidPid(
                        /* [in] */UINT16 vendorId,
                        /* [in] */UINT16 productId,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISerialDeviceStatics=_uuidof(ISerialDeviceStatics);
                
            } /* Windows */
        } /* Devices */
    } /* SerialCommunication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.SerialCommunication.ErrorReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.SerialCommunication.IErrorReceivedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_SerialCommunication_ErrorReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_SerialCommunication_ErrorReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SerialCommunication_ErrorReceivedEventArgs[] = L"Windows.Devices.SerialCommunication.ErrorReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.SerialCommunication.PinChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.SerialCommunication.IPinChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_SerialCommunication_PinChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_SerialCommunication_PinChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SerialCommunication_PinChangedEventArgs[] = L"Windows.Devices.SerialCommunication.PinChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.SerialCommunication.SerialDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.SerialCommunication.ISerialDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.SerialCommunication.ISerialDevice ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_SerialCommunication_SerialDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_SerialCommunication_SerialDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SerialCommunication_SerialDevice[] = L"Windows.Devices.SerialCommunication.SerialDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice;

#endif // ____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics;

#endif // ____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDeviceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDeviceVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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






typedef enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialError __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialError;


typedef enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialHandshake __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialHandshake;


typedef enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialParity __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialParity;


typedef enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialPinChange __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialPinChange;


typedef enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialStopBitCount __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialStopBitCount;
















/*
 *
 * Struct Windows.Devices.SerialCommunication.SerialError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialError
{
    SerialError_Frame = 0,
    SerialError_BufferOverrun = 1,
    SerialError_ReceiveFull = 2,
    SerialError_ReceiveParity = 3,
    SerialError_TransmitFull = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.SerialCommunication.SerialHandshake
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialHandshake
{
    SerialHandshake_None = 0,
    SerialHandshake_RequestToSend = 1,
    SerialHandshake_XOnXOff = 2,
    SerialHandshake_RequestToSendXOnXOff = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.SerialCommunication.SerialParity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialParity
{
    SerialParity_None = 0,
    SerialParity_Odd = 1,
    SerialParity_Even = 2,
    SerialParity_Mark = 3,
    SerialParity_Space = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.SerialCommunication.SerialPinChange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialPinChange
{
    SerialPinChange_BreakSignal = 0,
    SerialPinChange_CarrierDetect = 1,
    SerialPinChange_ClearToSend = 2,
    SerialPinChange_DataSetReady = 3,
    SerialPinChange_RingIndicator = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.SerialCommunication.SerialStopBitCount
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialStopBitCount
{
    SerialStopBitCount_One = 0,
    SerialStopBitCount_OnePointFive = 1,
    SerialStopBitCount_Two = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.SerialCommunication.IErrorReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.SerialCommunication.ErrorReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SerialCommunication_IErrorReceivedEventArgs[] = L"Windows.Devices.SerialCommunication.IErrorReceivedEventArgs";
/* [object, uuid("FCC6BF59-1283-4D8A-BFDF-566B33DDB28F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialError * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_get_Error(This,value) \
    ( (This)->lpVtbl->get_Error(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.SerialCommunication.IPinChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.SerialCommunication.PinChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SerialCommunication_IPinChangedEventArgs[] = L"Windows.Devices.SerialCommunication.IPinChangedEventArgs";
/* [object, uuid("A2BF1DB0-FC9C-4607-93D0-FA5E8343EE22"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PinChange )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialPinChange * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_get_PinChange(This,value) \
    ( (This)->lpVtbl->get_PinChange(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.SerialCommunication.ISerialDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.SerialCommunication.SerialDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SerialCommunication_ISerialDevice[] = L"Windows.Devices.SerialCommunication.ISerialDevice";
/* [object, uuid("E187CCC6-2210-414F-B65A-F5553A03372A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BaudRate )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BaudRate )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BreakSignalState )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BreakSignalState )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BytesReceived )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CarrierDetectState )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClearToSendState )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataBits )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DataBits )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [in] */UINT16 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataSetReadyState )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handshake )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialHandshake * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handshake )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [in] */__x_ABI_CWindows_CDevices_CSerialCommunication_CSerialHandshake value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDataTerminalReadyEnabled )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsDataTerminalReadyEnabled )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRequestToSendEnabled )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsRequestToSendEnabled )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Parity )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialParity * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Parity )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [in] */__x_ABI_CWindows_CDevices_CSerialCommunication_CSerialParity value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PortName )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReadTimeout )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReadTimeout )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StopBits )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialStopBitCount * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_StopBits )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [in] */__x_ABI_CWindows_CDevices_CSerialCommunication_CSerialStopBitCount value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsbVendorId )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsbProductId )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WriteTimeout )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_WriteTimeout )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputStream )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutputStream )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ErrorReceived )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs * reportHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ErrorReceived )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PinChanged )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs * reportHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PinChanged )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceVtbl;

interface __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_BaudRate(This,value) \
    ( (This)->lpVtbl->get_BaudRate(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_put_BaudRate(This,value) \
    ( (This)->lpVtbl->put_BaudRate(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_BreakSignalState(This,value) \
    ( (This)->lpVtbl->get_BreakSignalState(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_put_BreakSignalState(This,value) \
    ( (This)->lpVtbl->put_BreakSignalState(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_BytesReceived(This,value) \
    ( (This)->lpVtbl->get_BytesReceived(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_CarrierDetectState(This,value) \
    ( (This)->lpVtbl->get_CarrierDetectState(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_ClearToSendState(This,value) \
    ( (This)->lpVtbl->get_ClearToSendState(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_DataBits(This,value) \
    ( (This)->lpVtbl->get_DataBits(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_put_DataBits(This,value) \
    ( (This)->lpVtbl->put_DataBits(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_DataSetReadyState(This,value) \
    ( (This)->lpVtbl->get_DataSetReadyState(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_Handshake(This,value) \
    ( (This)->lpVtbl->get_Handshake(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_put_Handshake(This,value) \
    ( (This)->lpVtbl->put_Handshake(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_IsDataTerminalReadyEnabled(This,value) \
    ( (This)->lpVtbl->get_IsDataTerminalReadyEnabled(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_put_IsDataTerminalReadyEnabled(This,value) \
    ( (This)->lpVtbl->put_IsDataTerminalReadyEnabled(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_IsRequestToSendEnabled(This,value) \
    ( (This)->lpVtbl->get_IsRequestToSendEnabled(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_put_IsRequestToSendEnabled(This,value) \
    ( (This)->lpVtbl->put_IsRequestToSendEnabled(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_Parity(This,value) \
    ( (This)->lpVtbl->get_Parity(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_put_Parity(This,value) \
    ( (This)->lpVtbl->put_Parity(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_PortName(This,value) \
    ( (This)->lpVtbl->get_PortName(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_ReadTimeout(This,value) \
    ( (This)->lpVtbl->get_ReadTimeout(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_put_ReadTimeout(This,value) \
    ( (This)->lpVtbl->put_ReadTimeout(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_StopBits(This,value) \
    ( (This)->lpVtbl->get_StopBits(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_put_StopBits(This,value) \
    ( (This)->lpVtbl->put_StopBits(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_UsbVendorId(This,value) \
    ( (This)->lpVtbl->get_UsbVendorId(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_UsbProductId(This,value) \
    ( (This)->lpVtbl->get_UsbProductId(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_WriteTimeout(This,value) \
    ( (This)->lpVtbl->get_WriteTimeout(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_put_WriteTimeout(This,value) \
    ( (This)->lpVtbl->put_WriteTimeout(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_InputStream(This,value) \
    ( (This)->lpVtbl->get_InputStream(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_get_OutputStream(This,value) \
    ( (This)->lpVtbl->get_OutputStream(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_add_ErrorReceived(This,reportHandler,token) \
    ( (This)->lpVtbl->add_ErrorReceived(This,reportHandler,token) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_remove_ErrorReceived(This,token) \
    ( (This)->lpVtbl->remove_ErrorReceived(This,token) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_add_PinChanged(This,reportHandler,token) \
    ( (This)->lpVtbl->add_PinChanged(This,reportHandler,token) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_remove_PinChanged(This,token) \
    ( (This)->lpVtbl->remove_PinChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.SerialCommunication.ISerialDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.SerialCommunication.SerialDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SerialCommunication_ISerialDeviceStatics[] = L"Windows.Devices.SerialCommunication.ISerialDeviceStatics";
/* [object, uuid("058C4A70-0836-4993-AE1A-B61AE3BE056B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromPortName )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This,
        /* [in] */__RPC__in HSTRING portName,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromUsbVidPid )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This,
        /* [in] */UINT16 vendorId,
        /* [in] */UINT16 productId,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_GetDeviceSelector(This,value) \
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_GetDeviceSelectorFromPortName(This,portName,result) \
    ( (This)->lpVtbl->GetDeviceSelectorFromPortName(This,portName,result) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_GetDeviceSelectorFromUsbVidPid(This,vendorId,productId,result) \
    ( (This)->lpVtbl->GetDeviceSelectorFromUsbVidPid(This,vendorId,productId,result) )

#define __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_FromIdAsync(This,deviceId,result) \
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.SerialCommunication.ErrorReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.SerialCommunication.IErrorReceivedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_SerialCommunication_ErrorReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_SerialCommunication_ErrorReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SerialCommunication_ErrorReceivedEventArgs[] = L"Windows.Devices.SerialCommunication.ErrorReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.SerialCommunication.PinChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.SerialCommunication.IPinChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_SerialCommunication_PinChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_SerialCommunication_PinChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SerialCommunication_PinChangedEventArgs[] = L"Windows.Devices.SerialCommunication.PinChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.SerialCommunication.SerialDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.SerialCommunication.ISerialDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.SerialCommunication.ISerialDevice ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_SerialCommunication_SerialDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_SerialCommunication_SerialDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SerialCommunication_SerialDevice[] = L"Windows.Devices.SerialCommunication.SerialDevice";
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
#endif // __windows2Edevices2Eserialcommunication_p_h__

#endif // __windows2Edevices2Eserialcommunication_h__
