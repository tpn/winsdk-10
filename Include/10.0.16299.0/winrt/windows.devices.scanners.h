/* Header file automatically generated from windows.devices.scanners.idl */
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
#ifndef __windows2Edevices2Escanners_h__
#define __windows2Edevices2Escanners_h__
#ifndef __windows2Edevices2Escanners_p_h__
#define __windows2Edevices2Escanners_p_h__


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

#if !defined(WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION)
#define WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION)

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
#include "Windows.Graphics.Printing.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CScanners_CIImageScanner_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScanner_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                interface IImageScanner;
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */
#define __x_ABI_CWindows_CDevices_CScanners_CIImageScanner ABI::Windows::Devices::Scanners::IImageScanner

#endif // ____x_ABI_CWindows_CDevices_CScanners_CIImageScanner_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                interface IImageScannerFeederConfiguration;
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */
#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration ABI::Windows::Devices::Scanners::IImageScannerFeederConfiguration

#endif // ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                interface IImageScannerFormatConfiguration;
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */
#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration ABI::Windows::Devices::Scanners::IImageScannerFormatConfiguration

#endif // ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                interface IImageScannerPreviewResult;
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */
#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult ABI::Windows::Devices::Scanners::IImageScannerPreviewResult

#endif // ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                interface IImageScannerScanResult;
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */
#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult ABI::Windows::Devices::Scanners::IImageScannerScanResult

#endif // ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                interface IImageScannerSourceConfiguration;
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */
#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration ABI::Windows::Devices::Scanners::IImageScannerSourceConfiguration

#endif // ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                interface IImageScannerStatics;
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */
#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics ABI::Windows::Devices::Scanners::IImageScannerStatics

#endif // ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                class ImageScannerScanResult;
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */


#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d1662baa-4f20-5d18-97f1-a01a6d0dd980"))
IAsyncOperationProgressHandler<ABI::Windows::Devices::Scanners::ImageScannerScanResult*,UINT32> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Scanners::ImageScannerScanResult*, ABI::Windows::Devices::Scanners::IImageScannerScanResult*>,UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Devices.Scanners.ImageScannerScanResult, UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Devices::Scanners::ImageScannerScanResult*,UINT32> __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Devices::Scanners::IImageScannerScanResult*,UINT32>
//#define __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Devices::Scanners::IImageScannerScanResult*,UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_USE */


#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bd8bdbd8-459a-52dc-b101-75b398a61aef"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Devices::Scanners::ImageScannerScanResult*,UINT32> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Scanners::ImageScannerScanResult*, ABI::Windows::Devices::Scanners::IImageScannerScanResult*>,UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Devices.Scanners.ImageScannerScanResult, UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Devices::Scanners::ImageScannerScanResult*,UINT32> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Devices::Scanners::IImageScannerScanResult*,UINT32>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Devices::Scanners::IImageScannerScanResult*,UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_USE */


#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6e6e228a-f618-5d33-8523-02d16672665b"))
IAsyncOperationWithProgress<ABI::Windows::Devices::Scanners::ImageScannerScanResult*,UINT32> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Scanners::ImageScannerScanResult*, ABI::Windows::Devices::Scanners::IImageScannerScanResult*>,UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Devices.Scanners.ImageScannerScanResult, UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Devices::Scanners::ImageScannerScanResult*,UINT32> __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_t;
#define __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Devices::Scanners::IImageScannerScanResult*,UINT32>
//#define __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Devices::Scanners::IImageScannerScanResult*,UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_USE */


#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                class ImageScanner;
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */


#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b35ad6b4-0da0-5241-87ff-eef3a1883243"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Scanners::ImageScanner*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Scanners::ImageScanner*, ABI::Windows::Devices::Scanners::IImageScanner*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Scanners.ImageScanner>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Scanners::ImageScanner*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Scanners::IImageScanner*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Scanners::IImageScanner*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner_USE */


#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("75d78736-6c52-551e-ab5f-50674f323431"))
IAsyncOperation<ABI::Windows::Devices::Scanners::ImageScanner*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Scanners::ImageScanner*, ABI::Windows::Devices::Scanners::IImageScanner*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Scanners.ImageScanner>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Scanners::ImageScanner*> __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner_t;
#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Scanners::IImageScanner*>
//#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Scanners::IImageScanner*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner_USE */


#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                class ImageScannerPreviewResult;
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */


#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c054a410-ac3c-5353-b1ee-e85e78faf3f1"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Scanners::ImageScannerPreviewResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Scanners::ImageScannerPreviewResult*, ABI::Windows::Devices::Scanners::IImageScannerPreviewResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Scanners.ImageScannerPreviewResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Scanners::ImageScannerPreviewResult*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Scanners::IImageScannerPreviewResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Scanners::IImageScannerPreviewResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_USE */


#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2f74576f-0498-5348-bc3b-a70d1a771718"))
IAsyncOperation<ABI::Windows::Devices::Scanners::ImageScannerPreviewResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Scanners::ImageScannerPreviewResult*, ABI::Windows::Devices::Scanners::IImageScannerPreviewResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Scanners.ImageScannerPreviewResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Scanners::ImageScannerPreviewResult*> __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_t;
#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Scanners::IImageScannerPreviewResult*>
//#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Scanners::IImageScannerPreviewResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_USE */


#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Storage {
            class StorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CStorage_CIStorageFile ABI::Windows::Storage::IStorageFile

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIIterator_1_Windows__CStorage__CStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("43e29f53-0298-55aa-a6c8-4edd323d9598"))
IIterator<ABI::Windows::Storage::StorageFile*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.StorageFile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Storage::StorageFile*> __FIIterator_1_Windows__CStorage__CStorageFile_t;
#define __FIIterator_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::IStorageFile*>
//#define __FIIterator_1_Windows__CStorage__CStorageFile_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::IStorageFile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CStorage__CStorageFile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIIterable_1_Windows__CStorage__CStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9ac00304-83ea-5688-87b6-ae38aab65d0b"))
IIterable<ABI::Windows::Storage::StorageFile*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.StorageFile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Storage::StorageFile*> __FIIterable_1_Windows__CStorage__CStorageFile_t;
#define __FIIterable_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::IStorageFile*>
//#define __FIIterable_1_Windows__CStorage__CStorageFile_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::IStorageFile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CStorage__CStorageFile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIVectorView_1_Windows__CStorage__CStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("80646519-5e2a-595d-a8cd-2a24b4067f1b"))
IVectorView<ABI::Windows::Storage::StorageFile*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Storage.StorageFile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Storage::StorageFile*> __FIVectorView_1_Windows__CStorage__CStorageFile_t;
#define __FIVectorView_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CStorage__CStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageFile*>
//#define __FIVectorView_1_Windows__CStorage__CStorageFile_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageFile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CStorage__CStorageFile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Size Size;
            
        } /* Windows */
    } /* Foundation */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                
                typedef enum PrintMediaSize : int PrintMediaSize;
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                
                typedef enum PrintOrientation : int PrintOrientation;
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Storage {
            class StorageFolder;
        } /* Windows */
    } /* Storage */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageFolder;
        } /* Windows */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CStorage_CIStorageFolder ABI::Windows::Storage::IStorageFolder

#endif // ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__




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
        namespace Devices {
            namespace Scanners {
                
                typedef enum ImageScannerAutoCroppingMode : int ImageScannerAutoCroppingMode;
                
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                
                typedef enum ImageScannerColorMode : int ImageScannerColorMode;
                
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                
                typedef enum ImageScannerFormat : int ImageScannerFormat;
                
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                
                typedef enum ImageScannerScanSource : int ImageScannerScanSource;
                
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                
                typedef struct ImageScannerResolution ImageScannerResolution;
                
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */









namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                class ImageScannerAutoConfiguration;
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                class ImageScannerFeederConfiguration;
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                class ImageScannerFlatbedConfiguration;
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */













/*
 *
 * Struct Windows.Devices.Scanners.ImageScannerAutoCroppingMode
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                /* [v1_enum, contract] */
                enum ImageScannerAutoCroppingMode : int
                {
                    ImageScannerAutoCroppingMode_Disabled = 0,
                    ImageScannerAutoCroppingMode_SingleRegion = 1,
                    ImageScannerAutoCroppingMode_MultipleRegion = 2,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Scanners.ImageScannerColorMode
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                /* [v1_enum, contract] */
                enum ImageScannerColorMode : int
                {
                    ImageScannerColorMode_Color = 0,
                    ImageScannerColorMode_Grayscale = 1,
                    ImageScannerColorMode_Monochrome = 2,
                    ImageScannerColorMode_AutoColor = 3,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Scanners.ImageScannerFormat
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                /* [v1_enum, contract] */
                enum ImageScannerFormat : int
                {
                    ImageScannerFormat_Jpeg = 0,
                    ImageScannerFormat_Png = 1,
                    ImageScannerFormat_DeviceIndependentBitmap = 2,
                    ImageScannerFormat_Tiff = 3,
                    ImageScannerFormat_Xps = 4,
                    ImageScannerFormat_OpenXps = 5,
                    ImageScannerFormat_Pdf = 6,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Scanners.ImageScannerScanSource
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                /* [v1_enum, contract] */
                enum ImageScannerScanSource : int
                {
                    ImageScannerScanSource_Default = 0,
                    ImageScannerScanSource_Flatbed = 1,
                    ImageScannerScanSource_Feeder = 2,
                    ImageScannerScanSource_AutoConfigured = 3,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Scanners.ImageScannerResolution
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                /* [contract] */
                struct ImageScannerResolution
                {
                    FLOAT DpiX;
                    FLOAT DpiY;
                };
                
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Scanners.IImageScanner
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Scanners.ImageScanner
 *
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScanner_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScanner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScanner[] = L"Windows.Devices.Scanners.IImageScanner";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                /* [object, uuid("53A88F78-5298-48A0-8DA3-8087519665E0"), exclusiveto, contract] */
                MIDL_INTERFACE("53A88F78-5298-48A0-8DA3-8087519665E0")
                IImageScanner : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultScanSource(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Scanners::ImageScannerScanSource * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsScanSourceSupported(
                        /* [in] */ABI::Windows::Devices::Scanners::ImageScannerScanSource value,
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FlatbedConfiguration(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Scanners::IImageScannerFormatConfiguration * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FeederConfiguration(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Scanners::IImageScannerFormatConfiguration * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoConfiguration(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Scanners::IImageScannerFormatConfiguration * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsPreviewSupported(
                        /* [in] */ABI::Windows::Devices::Scanners::ImageScannerScanSource scanSource,
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ScanPreviewToStreamAsync(
                        /* [in] */ABI::Windows::Devices::Scanners::ImageScannerScanSource scanSource,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * targetStream,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ScanFilesToFolderAsync(
                        /* [in] */ABI::Windows::Devices::Scanners::ImageScannerScanSource scanSource,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFolder * storageFolder,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IImageScanner=_uuidof(IImageScanner);
                
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScanner;
#endif /* !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScanner_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Scanners.IImageScannerFeederConfiguration
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Scanners.ImageScannerFeederConfiguration
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Scanners.IImageScannerFormatConfiguration
 *     Windows.Devices.Scanners.IImageScannerSourceConfiguration
 *
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScannerFeederConfiguration[] = L"Windows.Devices.Scanners.IImageScannerFeederConfiguration";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                /* [object, uuid("74BDACEE-FA97-4C17-8280-40E39C6DCC67"), exclusiveto, contract] */
                MIDL_INTERFACE("74BDACEE-FA97-4C17-8280-40E39C6DCC67")
                IImageScannerFeederConfiguration : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanAutoDetectPageSize(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoDetectPageSize(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AutoDetectPageSize(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageSize(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintMediaSize * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PageSize(
                        /* [in] */ABI::Windows::Graphics::Printing::PrintMediaSize value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageOrientation(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintOrientation * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PageOrientation(
                        /* [in] */ABI::Windows::Graphics::Printing::PrintOrientation value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageSizeDimensions(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsPageSizeSupported(
                        /* [in] */ABI::Windows::Graphics::Printing::PrintMediaSize pageSize,
                        /* [in] */ABI::Windows::Graphics::Printing::PrintOrientation pageOrientation,
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxNumberOfPages(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MaxNumberOfPages(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanScanDuplex(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Duplex(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Duplex(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanScanAhead(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScanAhead(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ScanAhead(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IImageScannerFeederConfiguration=_uuidof(IImageScannerFeederConfiguration);
                
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration;
#endif /* !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Scanners.IImageScannerFormatConfiguration
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScannerFormatConfiguration[] = L"Windows.Devices.Scanners.IImageScannerFormatConfiguration";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                /* [object, uuid("AE275D11-DADF-4010-BF10-CCA5C83DCBB0"), contract] */
                MIDL_INTERFACE("AE275D11-DADF-4010-BF10-CCA5C83DCBB0")
                IImageScannerFormatConfiguration : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultFormat(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Scanners::ImageScannerFormat * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Format(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Scanners::ImageScannerFormat * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Format(
                        /* [in] */ABI::Windows::Devices::Scanners::ImageScannerFormat value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsFormatSupported(
                        /* [in] */ABI::Windows::Devices::Scanners::ImageScannerFormat value,
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IImageScannerFormatConfiguration=_uuidof(IImageScannerFormatConfiguration);
                
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration;
#endif /* !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Scanners.IImageScannerPreviewResult
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Scanners.ImageScannerPreviewResult
 *
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScannerPreviewResult[] = L"Windows.Devices.Scanners.IImageScannerPreviewResult";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                /* [object, uuid("08B7FE8E-8891-441D-BE9C-176FA109C8BB"), exclusiveto, contract] */
                MIDL_INTERFACE("08B7FE8E-8891-441D-BE9C-176FA109C8BB")
                IImageScannerPreviewResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Succeeded(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Format(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Scanners::ImageScannerFormat * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IImageScannerPreviewResult=_uuidof(IImageScannerPreviewResult);
                
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult;
#endif /* !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Scanners.IImageScannerScanResult
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Scanners.ImageScannerScanResult
 *
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScannerScanResult[] = L"Windows.Devices.Scanners.IImageScannerScanResult";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                /* [object, uuid("C91624CD-9037-4E48-84C1-AC0975076BC5"), exclusiveto, contract] */
                MIDL_INTERFACE("C91624CD-9037-4E48-84C1-AC0975076BC5")
                IImageScannerScanResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScannedFiles(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CStorageFile * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IImageScannerScanResult=_uuidof(IImageScannerScanResult);
                
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult;
#endif /* !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Scanners.IImageScannerSourceConfiguration
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Scanners.IImageScannerFormatConfiguration
 *
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScannerSourceConfiguration[] = L"Windows.Devices.Scanners.IImageScannerSourceConfiguration";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                /* [object, uuid("BFB50055-0B44-4C82-9E89-205F9C234E59"), contract] */
                MIDL_INTERFACE("BFB50055-0B44-4C82-9E89-205F9C234E59")
                IImageScannerSourceConfiguration : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinScanArea(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxScanArea(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedScanRegion(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SelectedScanRegion(
                        /* [in] */ABI::Windows::Foundation::Rect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoCroppingMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Scanners::ImageScannerAutoCroppingMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AutoCroppingMode(
                        /* [in] */ABI::Windows::Devices::Scanners::ImageScannerAutoCroppingMode value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsAutoCroppingModeSupported(
                        /* [in] */ABI::Windows::Devices::Scanners::ImageScannerAutoCroppingMode value,
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinResolution(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Scanners::ImageScannerResolution * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxResolution(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Scanners::ImageScannerResolution * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OpticalResolution(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Scanners::ImageScannerResolution * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredResolution(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Scanners::ImageScannerResolution * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredResolution(
                        /* [in] */ABI::Windows::Devices::Scanners::ImageScannerResolution value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActualResolution(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Scanners::ImageScannerResolution * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultColorMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Scanners::ImageScannerColorMode * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColorMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Scanners::ImageScannerColorMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ColorMode(
                        /* [in] */ABI::Windows::Devices::Scanners::ImageScannerColorMode value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsColorModeSupported(
                        /* [in] */ABI::Windows::Devices::Scanners::ImageScannerColorMode value,
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinBrightness(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxBrightness(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrightnessStep(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultBrightness(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Brightness(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Brightness(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinContrast(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxContrast(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContrastStep(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultContrast(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contrast(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Contrast(
                        /* [in] */INT32 value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IImageScannerSourceConfiguration=_uuidof(IImageScannerSourceConfiguration);
                
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration;
#endif /* !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Scanners.IImageScannerStatics
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Scanners.ImageScanner
 *
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScannerStatics[] = L"Windows.Devices.Scanners.IImageScannerStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Scanners {
                /* [object, uuid("BC57E70E-D804-4477-9FB5-B911B5473897"), exclusiveto, contract] */
                MIDL_INTERFACE("BC57E70E-D804-4477-9FB5-B911B5473897")
                IImageScannerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * * asyncInfo
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IImageScannerStatics=_uuidof(IImageScannerStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Scanners */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Scanners.ImageScanner
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Scanners.IImageScannerStatics interface starting with version 1.0 of the Windows.Devices.Scanners.ScannerDeviceContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Scanners.IImageScanner ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Scanners_ImageScanner_DEFINED
#define RUNTIMECLASS_Windows_Devices_Scanners_ImageScanner_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Scanners_ImageScanner[] = L"Windows.Devices.Scanners.ImageScanner";
#endif
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Scanners.ImageScannerAutoConfiguration
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Scanners.IImageScannerFormatConfiguration ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerAutoConfiguration_DEFINED
#define RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerAutoConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Scanners_ImageScannerAutoConfiguration[] = L"Windows.Devices.Scanners.ImageScannerAutoConfiguration";
#endif
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Scanners.ImageScannerFeederConfiguration
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Scanners.IImageScannerFormatConfiguration ** Default Interface **
 *    Windows.Devices.Scanners.IImageScannerSourceConfiguration
 *    Windows.Devices.Scanners.IImageScannerFeederConfiguration
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerFeederConfiguration_DEFINED
#define RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerFeederConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Scanners_ImageScannerFeederConfiguration[] = L"Windows.Devices.Scanners.ImageScannerFeederConfiguration";
#endif
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Scanners.ImageScannerFlatbedConfiguration
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Scanners.IImageScannerFormatConfiguration ** Default Interface **
 *    Windows.Devices.Scanners.IImageScannerSourceConfiguration
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerFlatbedConfiguration_DEFINED
#define RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerFlatbedConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Scanners_ImageScannerFlatbedConfiguration[] = L"Windows.Devices.Scanners.ImageScannerFlatbedConfiguration";
#endif
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Scanners.ImageScannerPreviewResult
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Scanners.IImageScannerPreviewResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerPreviewResult_DEFINED
#define RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerPreviewResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Scanners_ImageScannerPreviewResult[] = L"Windows.Devices.Scanners.ImageScannerPreviewResult";
#endif
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Scanners.ImageScannerScanResult
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Scanners.IImageScannerScanResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerScanResult_DEFINED
#define RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerScanResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Scanners_ImageScannerScanResult[] = L"Windows.Devices.Scanners.ImageScannerScanResult";
#endif
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CScanners_CIImageScanner_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScanner_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CScanners_CIImageScanner __x_ABI_CWindows_CDevices_CScanners_CIImageScanner;

#endif // ____x_ABI_CWindows_CDevices_CScanners_CIImageScanner_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration;

#endif // ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration;

#endif // ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult;

#endif // ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult;

#endif // ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration;

#endif // ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics;

#endif // ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32Vtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32Vtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32Vtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32Vtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResultVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CStorage__CStorageFile __FIIterator_1_Windows__CStorage__CStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStorageFile;

typedef struct __FIIterator_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFile * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStorageFileVtbl;

interface __FIIterator_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CStorage__CStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CStorage__CStorageFile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CStorage__CStorageFile_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CStorage__CStorageFile __FIIterable_1_Windows__CStorage__CStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStorageFile;

typedef  struct __FIIterable_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStorageFile **first);

    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStorageFileVtbl;

interface __FIIterable_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CStorage__CStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CStorage__CStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CStorage__CStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CStorage__CStorageFile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CStorage__CStorageFile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CStorage__CStorageFile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CStorage__CStorageFile_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CStorage__CStorageFile __FIVectorView_1_Windows__CStorage__CStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CStorageFile;

typedef struct __FIVectorView_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CIStorageFile * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFile * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CStorageFileVtbl;

interface __FIVectorView_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CStorage__CStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CStorage__CStorageFile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CStorage__CStorageFile_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;




typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize;


typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation;





#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CDevices_CScanners_CImageScannerAutoCroppingMode __x_ABI_CWindows_CDevices_CScanners_CImageScannerAutoCroppingMode;


typedef enum __x_ABI_CWindows_CDevices_CScanners_CImageScannerColorMode __x_ABI_CWindows_CDevices_CScanners_CImageScannerColorMode;


typedef enum __x_ABI_CWindows_CDevices_CScanners_CImageScannerFormat __x_ABI_CWindows_CDevices_CScanners_CImageScannerFormat;


typedef enum __x_ABI_CWindows_CDevices_CScanners_CImageScannerScanSource __x_ABI_CWindows_CDevices_CScanners_CImageScannerScanSource;


typedef struct __x_ABI_CWindows_CDevices_CScanners_CImageScannerResolution __x_ABI_CWindows_CDevices_CScanners_CImageScannerResolution;























/*
 *
 * Struct Windows.Devices.Scanners.ImageScannerAutoCroppingMode
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CScanners_CImageScannerAutoCroppingMode
{
    ImageScannerAutoCroppingMode_Disabled = 0,
    ImageScannerAutoCroppingMode_SingleRegion = 1,
    ImageScannerAutoCroppingMode_MultipleRegion = 2,
};
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Scanners.ImageScannerColorMode
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CScanners_CImageScannerColorMode
{
    ImageScannerColorMode_Color = 0,
    ImageScannerColorMode_Grayscale = 1,
    ImageScannerColorMode_Monochrome = 2,
    ImageScannerColorMode_AutoColor = 3,
};
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Scanners.ImageScannerFormat
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CScanners_CImageScannerFormat
{
    ImageScannerFormat_Jpeg = 0,
    ImageScannerFormat_Png = 1,
    ImageScannerFormat_DeviceIndependentBitmap = 2,
    ImageScannerFormat_Tiff = 3,
    ImageScannerFormat_Xps = 4,
    ImageScannerFormat_OpenXps = 5,
    ImageScannerFormat_Pdf = 6,
};
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Scanners.ImageScannerScanSource
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CScanners_CImageScannerScanSource
{
    ImageScannerScanSource_Default = 0,
    ImageScannerScanSource_Flatbed = 1,
    ImageScannerScanSource_Feeder = 2,
    ImageScannerScanSource_AutoConfigured = 3,
};
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Scanners.ImageScannerResolution
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CDevices_CScanners_CImageScannerResolution
{
    FLOAT DpiX;
    FLOAT DpiY;
};
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Scanners.IImageScanner
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Scanners.ImageScanner
 *
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScanner_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScanner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScanner[] = L"Windows.Devices.Scanners.IImageScanner";
/* [object, uuid("53A88F78-5298-48A0-8DA3-8087519665E0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultScanSource )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerScanSource * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsScanSourceSupported )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
        /* [in] */__x_ABI_CWindows_CDevices_CScanners_CImageScannerScanSource value,
        /* [retval, out] */__RPC__out boolean * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FlatbedConfiguration )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FeederConfiguration )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoConfiguration )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsPreviewSupported )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
        /* [in] */__x_ABI_CWindows_CDevices_CScanners_CImageScannerScanSource scanSource,
        /* [retval, out] */__RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *ScanPreviewToStreamAsync )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
        /* [in] */__x_ABI_CWindows_CDevices_CScanners_CImageScannerScanSource scanSource,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * targetStream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ScanFilesToFolderAsync )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
        /* [in] */__x_ABI_CWindows_CDevices_CScanners_CImageScannerScanSource scanSource,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * storageFolder,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CScanners_CIImageScannerVtbl;

interface __x_ABI_CWindows_CDevices_CScanners_CIImageScanner
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CScanners_CIImageScanner_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScanner_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScanner_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScanner_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScanner_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScanner_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScanner_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScanner_get_DefaultScanSource(This,value) \
    ( (This)->lpVtbl->get_DefaultScanSource(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScanner_IsScanSourceSupported(This,value,result) \
    ( (This)->lpVtbl->IsScanSourceSupported(This,value,result) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScanner_get_FlatbedConfiguration(This,value) \
    ( (This)->lpVtbl->get_FlatbedConfiguration(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScanner_get_FeederConfiguration(This,value) \
    ( (This)->lpVtbl->get_FeederConfiguration(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScanner_get_AutoConfiguration(This,value) \
    ( (This)->lpVtbl->get_AutoConfiguration(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScanner_IsPreviewSupported(This,scanSource,result) \
    ( (This)->lpVtbl->IsPreviewSupported(This,scanSource,result) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScanner_ScanPreviewToStreamAsync(This,scanSource,targetStream,operation) \
    ( (This)->lpVtbl->ScanPreviewToStreamAsync(This,scanSource,targetStream,operation) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScanner_ScanFilesToFolderAsync(This,scanSource,storageFolder,operation) \
    ( (This)->lpVtbl->ScanFilesToFolderAsync(This,scanSource,storageFolder,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScanner;
#endif /* !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScanner_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Scanners.IImageScannerFeederConfiguration
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Scanners.ImageScannerFeederConfiguration
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Scanners.IImageScannerFormatConfiguration
 *     Windows.Devices.Scanners.IImageScannerSourceConfiguration
 *
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScannerFeederConfiguration[] = L"Windows.Devices.Scanners.IImageScannerFeederConfiguration";
/* [object, uuid("74BDACEE-FA97-4C17-8280-40E39C6DCC67"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanAutoDetectPageSize )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoDetectPageSize )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AutoDetectPageSize )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageSize )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PageSize )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageOrientation )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PageOrientation )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageSizeDimensions )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsPageSizeSupported )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize pageSize,
        /* [in] */__x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation pageOrientation,
        /* [retval, out] */__RPC__out boolean * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxNumberOfPages )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MaxNumberOfPages )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanScanDuplex )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Duplex )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Duplex )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanScanAhead )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScanAhead )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ScanAhead )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfigurationVtbl;

interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfigurationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_get_CanAutoDetectPageSize(This,value) \
    ( (This)->lpVtbl->get_CanAutoDetectPageSize(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_get_AutoDetectPageSize(This,value) \
    ( (This)->lpVtbl->get_AutoDetectPageSize(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_put_AutoDetectPageSize(This,value) \
    ( (This)->lpVtbl->put_AutoDetectPageSize(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_get_PageSize(This,value) \
    ( (This)->lpVtbl->get_PageSize(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_put_PageSize(This,value) \
    ( (This)->lpVtbl->put_PageSize(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_get_PageOrientation(This,value) \
    ( (This)->lpVtbl->get_PageOrientation(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_put_PageOrientation(This,value) \
    ( (This)->lpVtbl->put_PageOrientation(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_get_PageSizeDimensions(This,value) \
    ( (This)->lpVtbl->get_PageSizeDimensions(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_IsPageSizeSupported(This,pageSize,pageOrientation,result) \
    ( (This)->lpVtbl->IsPageSizeSupported(This,pageSize,pageOrientation,result) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_get_MaxNumberOfPages(This,value) \
    ( (This)->lpVtbl->get_MaxNumberOfPages(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_put_MaxNumberOfPages(This,value) \
    ( (This)->lpVtbl->put_MaxNumberOfPages(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_get_CanScanDuplex(This,value) \
    ( (This)->lpVtbl->get_CanScanDuplex(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_get_Duplex(This,value) \
    ( (This)->lpVtbl->get_Duplex(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_put_Duplex(This,value) \
    ( (This)->lpVtbl->put_Duplex(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_get_CanScanAhead(This,value) \
    ( (This)->lpVtbl->get_CanScanAhead(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_get_ScanAhead(This,value) \
    ( (This)->lpVtbl->get_ScanAhead(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_put_ScanAhead(This,value) \
    ( (This)->lpVtbl->put_ScanAhead(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration;
#endif /* !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Scanners.IImageScannerFormatConfiguration
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScannerFormatConfiguration[] = L"Windows.Devices.Scanners.IImageScannerFormatConfiguration";
/* [object, uuid("AE275D11-DADF-4010-BF10-CCA5C83DCBB0"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultFormat )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerFormat * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Format )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerFormat * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Format )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This,
        /* [in] */__x_ABI_CWindows_CDevices_CScanners_CImageScannerFormat value
        );
    HRESULT ( STDMETHODCALLTYPE *IsFormatSupported )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This,
        /* [in] */__x_ABI_CWindows_CDevices_CScanners_CImageScannerFormat value,
        /* [retval, out] */__RPC__out boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfigurationVtbl;

interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfigurationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_get_DefaultFormat(This,value) \
    ( (This)->lpVtbl->get_DefaultFormat(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_get_Format(This,value) \
    ( (This)->lpVtbl->get_Format(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_put_Format(This,value) \
    ( (This)->lpVtbl->put_Format(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_IsFormatSupported(This,value,result) \
    ( (This)->lpVtbl->IsFormatSupported(This,value,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration;
#endif /* !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Scanners.IImageScannerPreviewResult
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Scanners.ImageScannerPreviewResult
 *
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScannerPreviewResult[] = L"Windows.Devices.Scanners.IImageScannerPreviewResult";
/* [object, uuid("08B7FE8E-8891-441D-BE9C-176FA109C8BB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Succeeded )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Format )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerFormat * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResultVtbl;

interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_get_Succeeded(This,value) \
    ( (This)->lpVtbl->get_Succeeded(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_get_Format(This,value) \
    ( (This)->lpVtbl->get_Format(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult;
#endif /* !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Scanners.IImageScannerScanResult
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Scanners.ImageScannerScanResult
 *
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScannerScanResult[] = L"Windows.Devices.Scanners.IImageScannerScanResult";
/* [object, uuid("C91624CD-9037-4E48-84C1-AC0975076BC5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScannedFiles )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CStorageFile * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResultVtbl;

interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_get_ScannedFiles(This,value) \
    ( (This)->lpVtbl->get_ScannedFiles(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult;
#endif /* !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Scanners.IImageScannerSourceConfiguration
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Scanners.IImageScannerFormatConfiguration
 *
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScannerSourceConfiguration[] = L"Windows.Devices.Scanners.IImageScannerSourceConfiguration";
/* [object, uuid("BFB50055-0B44-4C82-9E89-205F9C234E59"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinScanArea )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxScanArea )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedScanRegion )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SelectedScanRegion )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoCroppingMode )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerAutoCroppingMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AutoCroppingMode )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [in] */__x_ABI_CWindows_CDevices_CScanners_CImageScannerAutoCroppingMode value
        );
    HRESULT ( STDMETHODCALLTYPE *IsAutoCroppingModeSupported )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [in] */__x_ABI_CWindows_CDevices_CScanners_CImageScannerAutoCroppingMode value,
        /* [retval, out] */__RPC__out boolean * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinResolution )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerResolution * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxResolution )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerResolution * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OpticalResolution )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerResolution * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredResolution )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerResolution * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredResolution )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [in] */__x_ABI_CWindows_CDevices_CScanners_CImageScannerResolution value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActualResolution )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerResolution * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultColorMode )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerColorMode * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColorMode )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerColorMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ColorMode )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [in] */__x_ABI_CWindows_CDevices_CScanners_CImageScannerColorMode value
        );
    HRESULT ( STDMETHODCALLTYPE *IsColorModeSupported )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [in] */__x_ABI_CWindows_CDevices_CScanners_CImageScannerColorMode value,
        /* [retval, out] */__RPC__out boolean * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinBrightness )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxBrightness )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrightnessStep )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultBrightness )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Brightness )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Brightness )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinContrast )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxContrast )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContrastStep )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultContrast )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contrast )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Contrast )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
        /* [in] */INT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfigurationVtbl;

interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfigurationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_MinScanArea(This,value) \
    ( (This)->lpVtbl->get_MinScanArea(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_MaxScanArea(This,value) \
    ( (This)->lpVtbl->get_MaxScanArea(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_SelectedScanRegion(This,value) \
    ( (This)->lpVtbl->get_SelectedScanRegion(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_put_SelectedScanRegion(This,value) \
    ( (This)->lpVtbl->put_SelectedScanRegion(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_AutoCroppingMode(This,value) \
    ( (This)->lpVtbl->get_AutoCroppingMode(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_put_AutoCroppingMode(This,value) \
    ( (This)->lpVtbl->put_AutoCroppingMode(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_IsAutoCroppingModeSupported(This,value,result) \
    ( (This)->lpVtbl->IsAutoCroppingModeSupported(This,value,result) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_MinResolution(This,value) \
    ( (This)->lpVtbl->get_MinResolution(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_MaxResolution(This,value) \
    ( (This)->lpVtbl->get_MaxResolution(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_OpticalResolution(This,value) \
    ( (This)->lpVtbl->get_OpticalResolution(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_DesiredResolution(This,value) \
    ( (This)->lpVtbl->get_DesiredResolution(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_put_DesiredResolution(This,value) \
    ( (This)->lpVtbl->put_DesiredResolution(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_ActualResolution(This,value) \
    ( (This)->lpVtbl->get_ActualResolution(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_DefaultColorMode(This,value) \
    ( (This)->lpVtbl->get_DefaultColorMode(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_ColorMode(This,value) \
    ( (This)->lpVtbl->get_ColorMode(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_put_ColorMode(This,value) \
    ( (This)->lpVtbl->put_ColorMode(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_IsColorModeSupported(This,value,result) \
    ( (This)->lpVtbl->IsColorModeSupported(This,value,result) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_MinBrightness(This,value) \
    ( (This)->lpVtbl->get_MinBrightness(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_MaxBrightness(This,value) \
    ( (This)->lpVtbl->get_MaxBrightness(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_BrightnessStep(This,value) \
    ( (This)->lpVtbl->get_BrightnessStep(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_DefaultBrightness(This,value) \
    ( (This)->lpVtbl->get_DefaultBrightness(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_Brightness(This,value) \
    ( (This)->lpVtbl->get_Brightness(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_put_Brightness(This,value) \
    ( (This)->lpVtbl->put_Brightness(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_MinContrast(This,value) \
    ( (This)->lpVtbl->get_MinContrast(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_MaxContrast(This,value) \
    ( (This)->lpVtbl->get_MaxContrast(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_ContrastStep(This,value) \
    ( (This)->lpVtbl->get_ContrastStep(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_DefaultContrast(This,value) \
    ( (This)->lpVtbl->get_DefaultContrast(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_get_Contrast(This,value) \
    ( (This)->lpVtbl->get_Contrast(This,value) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_put_Contrast(This,value) \
    ( (This)->lpVtbl->put_Contrast(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration;
#endif /* !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Scanners.IImageScannerStatics
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Scanners.ImageScanner
 *
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScannerStatics[] = L"Windows.Devices.Scanners.IImageScannerStatics";
/* [object, uuid("BC57E70E-D804-4477-9FB5-B911B5473897"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_FromIdAsync(This,deviceId,asyncInfo) \
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,asyncInfo) )

#define __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_GetDeviceSelector(This,selector) \
    ( (This)->lpVtbl->GetDeviceSelector(This,selector) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Scanners.ImageScanner
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Scanners.IImageScannerStatics interface starting with version 1.0 of the Windows.Devices.Scanners.ScannerDeviceContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Scanners.IImageScanner ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Scanners_ImageScanner_DEFINED
#define RUNTIMECLASS_Windows_Devices_Scanners_ImageScanner_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Scanners_ImageScanner[] = L"Windows.Devices.Scanners.ImageScanner";
#endif
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Scanners.ImageScannerAutoConfiguration
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Scanners.IImageScannerFormatConfiguration ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerAutoConfiguration_DEFINED
#define RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerAutoConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Scanners_ImageScannerAutoConfiguration[] = L"Windows.Devices.Scanners.ImageScannerAutoConfiguration";
#endif
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Scanners.ImageScannerFeederConfiguration
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Scanners.IImageScannerFormatConfiguration ** Default Interface **
 *    Windows.Devices.Scanners.IImageScannerSourceConfiguration
 *    Windows.Devices.Scanners.IImageScannerFeederConfiguration
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerFeederConfiguration_DEFINED
#define RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerFeederConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Scanners_ImageScannerFeederConfiguration[] = L"Windows.Devices.Scanners.ImageScannerFeederConfiguration";
#endif
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Scanners.ImageScannerFlatbedConfiguration
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Scanners.IImageScannerFormatConfiguration ** Default Interface **
 *    Windows.Devices.Scanners.IImageScannerSourceConfiguration
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerFlatbedConfiguration_DEFINED
#define RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerFlatbedConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Scanners_ImageScannerFlatbedConfiguration[] = L"Windows.Devices.Scanners.ImageScannerFlatbedConfiguration";
#endif
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Scanners.ImageScannerPreviewResult
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Scanners.IImageScannerPreviewResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerPreviewResult_DEFINED
#define RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerPreviewResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Scanners_ImageScannerPreviewResult[] = L"Windows.Devices.Scanners.ImageScannerPreviewResult";
#endif
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Scanners.ImageScannerScanResult
 *
 * Introduced to Windows.Devices.Scanners.ScannerDeviceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Scanners.IImageScannerScanResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerScanResult_DEFINED
#define RUNTIMECLASS_Windows_Devices_Scanners_ImageScannerScanResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Scanners_ImageScannerScanResult[] = L"Windows.Devices.Scanners.ImageScannerScanResult";
#endif
#endif // WINDOWS_DEVICES_SCANNERS_SCANNERDEVICECONTRACT_VERSION >= 0x10000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Edevices2Escanners_p_h__

#endif // __windows2Edevices2Escanners_h__
