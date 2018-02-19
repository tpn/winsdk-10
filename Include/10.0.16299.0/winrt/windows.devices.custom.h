/* Header file automatically generated from windows.devices.custom.idl */
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
#ifndef __windows2Edevices2Ecustom_h__
#define __windows2Edevices2Ecustom_h__
#ifndef __windows2Edevices2Ecustom_p_h__
#define __windows2Edevices2Ecustom_p_h__


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

#if !defined(WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION)
#define WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION)

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
#ifndef ____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                interface ICustomDevice;
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice ABI::Windows::Devices::Custom::ICustomDevice

#endif // ____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                interface ICustomDeviceStatics;
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics ABI::Windows::Devices::Custom::ICustomDeviceStatics

#endif // ____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                interface IIOControlCode;
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode ABI::Windows::Devices::Custom::IIOControlCode

#endif // ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                interface IIOControlCodeFactory;
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory ABI::Windows::Devices::Custom::IIOControlCodeFactory

#endif // ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                interface IKnownDeviceTypesStatics;
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics ABI::Windows::Devices::Custom::IKnownDeviceTypesStatics

#endif // ____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                class CustomDevice;
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */


#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1fdd39b0-e0e5-5c59-b27d-a549b1075ce9"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Custom::CustomDevice*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Custom::CustomDevice*, ABI::Windows::Devices::Custom::ICustomDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Custom.CustomDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Custom::CustomDevice*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Custom::ICustomDevice*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Custom::ICustomDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_USE */


#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2a6344aa-0568-548e-a1a2-b6bb451d228c"))
IAsyncOperation<ABI::Windows::Devices::Custom::CustomDevice*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Custom::CustomDevice*, ABI::Windows::Devices::Custom::ICustomDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Custom.CustomDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Custom::CustomDevice*> __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_t;
#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Custom::ICustomDevice*>
//#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Custom::ICustomDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_USE */


#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


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
            namespace Custom {
                
                typedef enum DeviceAccessMode : int DeviceAccessMode;
                
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                
                typedef enum DeviceSharingMode : int DeviceSharingMode;
                
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                
                typedef enum IOControlAccessMode : int IOControlAccessMode;
                
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                
                typedef enum IOControlBufferingMethod : int IOControlBufferingMethod;
                
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                class IOControlCode;
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */












/*
 *
 * Struct Windows.Devices.Custom.DeviceAccessMode
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                /* [v1_enum, contract] */
                enum DeviceAccessMode : int
                {
                    DeviceAccessMode_Read = 0,
                    DeviceAccessMode_Write = 1,
                    DeviceAccessMode_ReadWrite = 2,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Custom.DeviceSharingMode
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                /* [v1_enum, contract] */
                enum DeviceSharingMode : int
                {
                    DeviceSharingMode_Shared = 0,
                    DeviceSharingMode_Exclusive = 1,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Custom.IOControlAccessMode
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                /* [v1_enum, contract] */
                enum IOControlAccessMode : int
                {
                    IOControlAccessMode_Any = 0,
                    IOControlAccessMode_Read = 1,
                    IOControlAccessMode_Write = 2,
                    IOControlAccessMode_ReadWrite = 3,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Custom.IOControlBufferingMethod
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                /* [v1_enum, contract] */
                enum IOControlBufferingMethod : int
                {
                    IOControlBufferingMethod_Buffered = 0,
                    IOControlBufferingMethod_DirectInput = 1,
                    IOControlBufferingMethod_DirectOutput = 2,
                    IOControlBufferingMethod_Neither = 3,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Custom.ICustomDevice
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Custom.CustomDevice
 *
 *
 */
#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_ICustomDevice[] = L"Windows.Devices.Custom.ICustomDevice";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                /* [object, uuid("DD30251F-C48B-43BD-BCB1-DEC88F15143E"), exclusiveto, contract] */
                MIDL_INTERFACE("DD30251F-C48B-43BD-BCB1-DEC88F15143E")
                ICustomDevice : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IInputStream * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutputStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IOutputStream * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SendIOControlAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Custom::IIOControlCode * ioControlCode,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * inputBuffer,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * outputBuffer,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TrySendIOControlAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Custom::IIOControlCode * ioControlCode,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * inputBuffer,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * outputBuffer,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICustomDevice=_uuidof(ICustomDevice);
                
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CICustomDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Custom.ICustomDeviceStatics
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Custom.CustomDevice
 *
 *
 */
#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_ICustomDeviceStatics[] = L"Windows.Devices.Custom.ICustomDeviceStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                /* [object, uuid("C8220312-EF4C-46B1-A58E-EEB308DC8917"), exclusiveto, contract] */
                MIDL_INTERFACE("C8220312-EF4C-46B1-A58E-EEB308DC8917")
                ICustomDeviceStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [in] */GUID classGuid,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [in] */ABI::Windows::Devices::Custom::DeviceAccessMode desiredAccess,
                        /* [in] */ABI::Windows::Devices::Custom::DeviceSharingMode sharingMode,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICustomDeviceStatics=_uuidof(ICustomDeviceStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Custom.IIOControlCode
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_IIOControlCode[] = L"Windows.Devices.Custom.IIOControlCode";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                /* [object, uuid("0E9559E7-60C8-4375-A761-7F8808066C60"), contract] */
                MIDL_INTERFACE("0E9559E7-60C8-4375-A761-7F8808066C60")
                IIOControlCode : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccessMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Custom::IOControlAccessMode * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BufferingMethod(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Custom::IOControlBufferingMethod * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Function(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceType(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ControlCode(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IIOControlCode=_uuidof(IIOControlCode);
                
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CIIOControlCode;
#endif /* !defined(____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Custom.IIOControlCodeFactory
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Custom.IOControlCode
 *
 *
 */
#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_IIOControlCodeFactory[] = L"Windows.Devices.Custom.IIOControlCodeFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                /* [object, uuid("856A7CF0-4C11-44AE-AFC6-B8D4A212788F"), exclusiveto, contract] */
                MIDL_INTERFACE("856A7CF0-4C11-44AE-AFC6-B8D4A212788F")
                IIOControlCodeFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateIOControlCode(
                        /* [in] */UINT16 deviceType,
                        /* [in] */UINT16 function,
                        /* [in] */ABI::Windows::Devices::Custom::IOControlAccessMode accessMode,
                        /* [in] */ABI::Windows::Devices::Custom::IOControlBufferingMethod bufferingMethod,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Custom::IIOControlCode * * instance
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IIOControlCodeFactory=_uuidof(IIOControlCodeFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Custom.IKnownDeviceTypesStatics
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Custom.KnownDeviceTypes
 *
 *
 */
#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_IKnownDeviceTypesStatics[] = L"Windows.Devices.Custom.IKnownDeviceTypesStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                /* [object, uuid("EE5479C2-5448-45DA-AD1B-24948C239094"), exclusiveto, contract] */
                MIDL_INTERFACE("EE5479C2-5448-45DA-AD1B-24948C239094")
                IKnownDeviceTypesStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Unknown(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IKnownDeviceTypesStatics=_uuidof(IKnownDeviceTypesStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Custom.CustomDevice
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Custom.ICustomDeviceStatics interface starting with version 1.0 of the Windows.Devices.Custom.CustomDeviceContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Custom.ICustomDevice ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Custom_CustomDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Custom_CustomDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Custom_CustomDevice[] = L"Windows.Devices.Custom.CustomDevice";
#endif
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Custom.IOControlCode
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Custom.IIOControlCodeFactory interface starting with version 1.0 of the Windows.Devices.Custom.CustomDeviceContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Custom.IIOControlCode ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Custom_IOControlCode_DEFINED
#define RUNTIMECLASS_Windows_Devices_Custom_IOControlCode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Custom_IOControlCode[] = L"Windows.Devices.Custom.IOControlCode";
#endif
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Custom.KnownDeviceTypes
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Custom.IKnownDeviceTypesStatics interface starting with version 1.0 of the Windows.Devices.Custom.CustomDeviceContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Devices_Custom_KnownDeviceTypes_DEFINED
#define RUNTIMECLASS_Windows_Devices_Custom_KnownDeviceTypes_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Custom_KnownDeviceTypes[] = L"Windows.Devices.Custom.KnownDeviceTypes";
#endif
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CCustom_CICustomDevice __x_ABI_CWindows_CDevices_CCustom_CICustomDevice;

#endif // ____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics;

#endif // ____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode;

#endif // ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory;

#endif // ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics;

#endif // ____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDeviceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDeviceVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000

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



#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CDevices_CCustom_CDeviceAccessMode __x_ABI_CWindows_CDevices_CCustom_CDeviceAccessMode;


typedef enum __x_ABI_CWindows_CDevices_CCustom_CDeviceSharingMode __x_ABI_CWindows_CDevices_CCustom_CDeviceSharingMode;


typedef enum __x_ABI_CWindows_CDevices_CCustom_CIOControlAccessMode __x_ABI_CWindows_CDevices_CCustom_CIOControlAccessMode;


typedef enum __x_ABI_CWindows_CDevices_CCustom_CIOControlBufferingMethod __x_ABI_CWindows_CDevices_CCustom_CIOControlBufferingMethod;


















/*
 *
 * Struct Windows.Devices.Custom.DeviceAccessMode
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CCustom_CDeviceAccessMode
{
    DeviceAccessMode_Read = 0,
    DeviceAccessMode_Write = 1,
    DeviceAccessMode_ReadWrite = 2,
};
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Custom.DeviceSharingMode
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CCustom_CDeviceSharingMode
{
    DeviceSharingMode_Shared = 0,
    DeviceSharingMode_Exclusive = 1,
};
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Custom.IOControlAccessMode
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CCustom_CIOControlAccessMode
{
    IOControlAccessMode_Any = 0,
    IOControlAccessMode_Read = 1,
    IOControlAccessMode_Write = 2,
    IOControlAccessMode_ReadWrite = 3,
};
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Custom.IOControlBufferingMethod
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CCustom_CIOControlBufferingMethod
{
    IOControlBufferingMethod_Buffered = 0,
    IOControlBufferingMethod_DirectInput = 1,
    IOControlBufferingMethod_DirectOutput = 2,
    IOControlBufferingMethod_Neither = 3,
};
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Custom.ICustomDevice
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Custom.CustomDevice
 *
 *
 */
#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_ICustomDevice[] = L"Windows.Devices.Custom.ICustomDevice";
/* [object, uuid("DD30251F-C48B-43BD-BCB1-DEC88F15143E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputStream )(
        __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutputStream )(
        __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SendIOControlAsync )(
        __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * ioControlCode,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * inputBuffer,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * outputBuffer,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TrySendIOControlAsync )(
        __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * ioControlCode,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * inputBuffer,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * outputBuffer,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceVtbl;

interface __x_ABI_CWindows_CDevices_CCustom_CICustomDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_get_InputStream(This,value) \
    ( (This)->lpVtbl->get_InputStream(This,value) )

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_get_OutputStream(This,value) \
    ( (This)->lpVtbl->get_OutputStream(This,value) )

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_SendIOControlAsync(This,ioControlCode,inputBuffer,outputBuffer,operation) \
    ( (This)->lpVtbl->SendIOControlAsync(This,ioControlCode,inputBuffer,outputBuffer,operation) )

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_TrySendIOControlAsync(This,ioControlCode,inputBuffer,outputBuffer,operation) \
    ( (This)->lpVtbl->TrySendIOControlAsync(This,ioControlCode,inputBuffer,outputBuffer,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CICustomDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Custom.ICustomDeviceStatics
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Custom.CustomDevice
 *
 *
 */
#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_ICustomDeviceStatics[] = L"Windows.Devices.Custom.ICustomDeviceStatics";
/* [object, uuid("C8220312-EF4C-46B1-A58E-EEB308DC8917"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This,
        /* [in] */GUID classGuid,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [in] */__x_ABI_CWindows_CDevices_CCustom_CDeviceAccessMode desiredAccess,
        /* [in] */__x_ABI_CWindows_CDevices_CCustom_CDeviceSharingMode sharingMode,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_GetDeviceSelector(This,classGuid,value) \
    ( (This)->lpVtbl->GetDeviceSelector(This,classGuid,value) )

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_FromIdAsync(This,deviceId,desiredAccess,sharingMode,operation) \
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,desiredAccess,sharingMode,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Custom.IIOControlCode
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_IIOControlCode[] = L"Windows.Devices.Custom.IIOControlCode";
/* [object, uuid("0E9559E7-60C8-4375-A761-7F8808066C60"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccessMode )(
        __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CCustom_CIOControlAccessMode * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BufferingMethod )(
        __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CCustom_CIOControlBufferingMethod * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Function )(
        __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceType )(
        __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ControlCode )(
        __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeVtbl;

interface __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_get_AccessMode(This,value) \
    ( (This)->lpVtbl->get_AccessMode(This,value) )

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_get_BufferingMethod(This,value) \
    ( (This)->lpVtbl->get_BufferingMethod(This,value) )

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_get_Function(This,value) \
    ( (This)->lpVtbl->get_Function(This,value) )

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_get_DeviceType(This,value) \
    ( (This)->lpVtbl->get_DeviceType(This,value) )

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_get_ControlCode(This,value) \
    ( (This)->lpVtbl->get_ControlCode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CIIOControlCode;
#endif /* !defined(____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Custom.IIOControlCodeFactory
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Custom.IOControlCode
 *
 *
 */
#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_IIOControlCodeFactory[] = L"Windows.Devices.Custom.IIOControlCodeFactory";
/* [object, uuid("856A7CF0-4C11-44AE-AFC6-B8D4A212788F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateIOControlCode )(
        __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This,
        /* [in] */UINT16 deviceType,
        /* [in] */UINT16 function,
        /* [in] */__x_ABI_CWindows_CDevices_CCustom_CIOControlAccessMode accessMode,
        /* [in] */__x_ABI_CWindows_CDevices_CCustom_CIOControlBufferingMethod bufferingMethod,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_CreateIOControlCode(This,deviceType,function,accessMode,bufferingMethod,instance) \
    ( (This)->lpVtbl->CreateIOControlCode(This,deviceType,function,accessMode,bufferingMethod,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Custom.IKnownDeviceTypesStatics
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Custom.KnownDeviceTypes
 *
 *
 */
#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_IKnownDeviceTypesStatics[] = L"Windows.Devices.Custom.IKnownDeviceTypesStatics";
/* [object, uuid("EE5479C2-5448-45DA-AD1B-24948C239094"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Unknown )(
        __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_get_Unknown(This,value) \
    ( (This)->lpVtbl->get_Unknown(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Custom.CustomDevice
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Custom.ICustomDeviceStatics interface starting with version 1.0 of the Windows.Devices.Custom.CustomDeviceContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Custom.ICustomDevice ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Custom_CustomDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Custom_CustomDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Custom_CustomDevice[] = L"Windows.Devices.Custom.CustomDevice";
#endif
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Custom.IOControlCode
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Custom.IIOControlCodeFactory interface starting with version 1.0 of the Windows.Devices.Custom.CustomDeviceContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Custom.IIOControlCode ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Custom_IOControlCode_DEFINED
#define RUNTIMECLASS_Windows_Devices_Custom_IOControlCode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Custom_IOControlCode[] = L"Windows.Devices.Custom.IOControlCode";
#endif
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Custom.KnownDeviceTypes
 *
 * Introduced to Windows.Devices.Custom.CustomDeviceContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Custom.IKnownDeviceTypesStatics interface starting with version 1.0 of the Windows.Devices.Custom.CustomDeviceContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Devices_Custom_KnownDeviceTypes_DEFINED
#define RUNTIMECLASS_Windows_Devices_Custom_KnownDeviceTypes_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Custom_KnownDeviceTypes[] = L"Windows.Devices.Custom.KnownDeviceTypes";
#endif
#endif // WINDOWS_DEVICES_CUSTOM_CUSTOMDEVICECONTRACT_VERSION >= 0x10000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Edevices2Ecustom_p_h__

#endif // __windows2Edevices2Ecustom_h__
