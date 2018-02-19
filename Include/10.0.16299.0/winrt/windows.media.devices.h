/* Header file automatically generated from windows.media.devices.idl */
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
#ifndef __windows2Emedia2Edevices_h__
#define __windows2Emedia2Edevices_h__
#ifndef __windows2Emedia2Edevices_p_h__
#define __windows2Emedia2Edevices_p_h__


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
#include "Windows.Media.Capture.h"
#include "Windows.Media.Devices.Core.h"
#include "Windows.Media.MediaProperties.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface ICallControlEventHandler;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler ABI::Windows::Media::Devices::ICallControlEventHandler

#endif // ____x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IDialRequestedEventHandler;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler ABI::Windows::Media::Devices::IDialRequestedEventHandler

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IKeypadPressedEventHandler;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler ABI::Windows::Media::Devices::IKeypadPressedEventHandler

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IRedialRequestedEventHandler;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler ABI::Windows::Media::Devices::IRedialRequestedEventHandler

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IAdvancedPhotoCaptureSettings;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings ABI::Windows::Media::Devices::IAdvancedPhotoCaptureSettings

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IAdvancedPhotoControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl ABI::Windows::Media::Devices::IAdvancedPhotoControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IAdvancedVideoCaptureDeviceController;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController ABI::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IAdvancedVideoCaptureDeviceController2;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 ABI::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IAdvancedVideoCaptureDeviceController3;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 ABI::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IAdvancedVideoCaptureDeviceController4;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 ABI::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IAdvancedVideoCaptureDeviceController5;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 ABI::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IAudioDeviceController;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController ABI::Windows::Media::Devices::IAudioDeviceController

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IAudioDeviceModule;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule ABI::Windows::Media::Devices::IAudioDeviceModule

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IAudioDeviceModuleNotificationEventArgs;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs ABI::Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IAudioDeviceModulesManager;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager ABI::Windows::Media::Devices::IAudioDeviceModulesManager

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IAudioDeviceModulesManagerFactory;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory ABI::Windows::Media::Devices::IAudioDeviceModulesManagerFactory

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CICallControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CICallControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface ICallControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CICallControl ABI::Windows::Media::Devices::ICallControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CICallControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface ICallControlStatics;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics ABI::Windows::Media::Devices::ICallControlStatics

#endif // ____x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IDefaultAudioDeviceChangedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs ABI::Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IDialRequestedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs ABI::Windows::Media::Devices::IDialRequestedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IExposureCompensationControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl ABI::Windows::Media::Devices::IExposureCompensationControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIExposureControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIExposureControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IExposureControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIExposureControl ABI::Windows::Media::Devices::IExposureControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIExposureControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IExposurePriorityVideoControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl ABI::Windows::Media::Devices::IExposurePriorityVideoControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIFlashControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIFlashControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IFlashControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl ABI::Windows::Media::Devices::IFlashControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIFlashControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IFlashControl2;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 ABI::Windows::Media::Devices::IFlashControl2

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIFocusControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIFocusControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IFocusControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl ABI::Windows::Media::Devices::IFocusControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIFocusControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IFocusControl2;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 ABI::Windows::Media::Devices::IFocusControl2

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IFocusSettings;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings ABI::Windows::Media::Devices::IFocusSettings

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IHdrVideoControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl ABI::Windows::Media::Devices::IHdrVideoControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IIsoSpeedControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl ABI::Windows::Media::Devices::IIsoSpeedControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IIsoSpeedControl2;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 ABI::Windows::Media::Devices::IIsoSpeedControl2

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IKeypadPressedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs ABI::Windows::Media::Devices::IKeypadPressedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface ILowLagPhotoControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl ABI::Windows::Media::Devices::ILowLagPhotoControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface ILowLagPhotoSequenceControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl ABI::Windows::Media::Devices::ILowLagPhotoSequenceControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IMediaDeviceControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl ABI::Windows::Media::Devices::IMediaDeviceControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IMediaDeviceControlCapabilities;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities ABI::Windows::Media::Devices::IMediaDeviceControlCapabilities

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IMediaDeviceController;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController ABI::Windows::Media::Devices::IMediaDeviceController

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IMediaDeviceStatics;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics ABI::Windows::Media::Devices::IMediaDeviceStatics

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IModuleCommandResult;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult ABI::Windows::Media::Devices::IModuleCommandResult

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IOpticalImageStabilizationControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl ABI::Windows::Media::Devices::IOpticalImageStabilizationControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IPhotoConfirmationControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl ABI::Windows::Media::Devices::IPhotoConfirmationControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IRedialRequestedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs ABI::Windows::Media::Devices::IRedialRequestedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IRegionOfInterest;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest ABI::Windows::Media::Devices::IRegionOfInterest

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IRegionOfInterest2;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 ABI::Windows::Media::Devices::IRegionOfInterest2

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IRegionsOfInterestControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl ABI::Windows::Media::Devices::IRegionsOfInterestControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface ISceneModeControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl ABI::Windows::Media::Devices::ISceneModeControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CITorchControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CITorchControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface ITorchControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CITorchControl ABI::Windows::Media::Devices::ITorchControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CITorchControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IVideoDeviceController;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController ABI::Windows::Media::Devices::IVideoDeviceController

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IVideoDeviceControllerGetDevicePropertyResult;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult ABI::Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IWhiteBalanceControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl ABI::Windows::Media::Devices::IWhiteBalanceControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIZoomControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIZoomControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IZoomControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl ABI::Windows::Media::Devices::IZoomControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIZoomControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IZoomControl2;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 ABI::Windows::Media::Devices::IZoomControl2

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IZoomSettings;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings ABI::Windows::Media::Devices::IZoomSettings

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                enum AdvancedPhotoMode : int;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_USE
#define DEF___FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e6d0bc9d-e1cb-5ed0-8ede-7d037bcc2e07"))
IIterator<enum ABI::Windows::Media::Devices::AdvancedPhotoMode> : IIterator_impl<enum ABI::Windows::Media::Devices::AdvancedPhotoMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Devices.AdvancedPhotoMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Media::Devices::AdvancedPhotoMode> __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_t;
#define __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::AdvancedPhotoMode>
//#define __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::AdvancedPhotoMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_USE */





#ifndef DEF___FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_USE
#define DEF___FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7d090784-70a9-570c-be82-0d0890318975"))
IIterable<enum ABI::Windows::Media::Devices::AdvancedPhotoMode> : IIterable_impl<enum ABI::Windows::Media::Devices::AdvancedPhotoMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Devices.AdvancedPhotoMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Media::Devices::AdvancedPhotoMode> __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_t;
#define __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::AdvancedPhotoMode>
//#define __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::AdvancedPhotoMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class AudioDeviceModule;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_USE
#define DEF___FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b4cbbfb7-9851-56c9-839d-a10a8b1bb234"))
IIterator<ABI::Windows::Media::Devices::AudioDeviceModule*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Devices::AudioDeviceModule*, ABI::Windows::Media::Devices::IAudioDeviceModule*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Devices.AudioDeviceModule>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Devices::AudioDeviceModule*> __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_t;
#define __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::IAudioDeviceModule*>
//#define __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::IAudioDeviceModule*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule_USE
#define DEF___FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7eeb51c3-d70e-548a-85c2-3cf71b4a124c"))
IIterable<ABI::Windows::Media::Devices::AudioDeviceModule*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Devices::AudioDeviceModule*, ABI::Windows::Media::Devices::IAudioDeviceModule*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Devices.AudioDeviceModule>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Devices::AudioDeviceModule*> __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule_t;
#define __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::IAudioDeviceModule*>
//#define __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::IAudioDeviceModule*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                enum AutoFocusRange : int;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_USE
#define DEF___FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("07489ac5-3c71-59c6-b7dc-7f21341c2f71"))
IIterator<enum ABI::Windows::Media::Devices::AutoFocusRange> : IIterator_impl<enum ABI::Windows::Media::Devices::AutoFocusRange> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Devices.AutoFocusRange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Media::Devices::AutoFocusRange> __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_t;
#define __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::AutoFocusRange>
//#define __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::AutoFocusRange>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_USE */





#ifndef DEF___FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange_USE
#define DEF___FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("751664c6-f8d6-50a3-ab80-137c6d908c55"))
IIterable<enum ABI::Windows::Media::Devices::AutoFocusRange> : IIterable_impl<enum ABI::Windows::Media::Devices::AutoFocusRange> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Devices.AutoFocusRange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Media::Devices::AutoFocusRange> __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange_t;
#define __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::AutoFocusRange>
//#define __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::AutoFocusRange>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                enum CaptureSceneMode : int;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_USE
#define DEF___FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("aafa6d7a-2f7f-5dd7-aa0a-265731a2b3b3"))
IIterator<enum ABI::Windows::Media::Devices::CaptureSceneMode> : IIterator_impl<enum ABI::Windows::Media::Devices::CaptureSceneMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Devices.CaptureSceneMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Media::Devices::CaptureSceneMode> __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_t;
#define __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::CaptureSceneMode>
//#define __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::CaptureSceneMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_USE */





#ifndef DEF___FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode_USE
#define DEF___FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("16d26b98-2cbc-52f0-ab64-1723714418e9"))
IIterable<enum ABI::Windows::Media::Devices::CaptureSceneMode> : IIterable_impl<enum ABI::Windows::Media::Devices::CaptureSceneMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Devices.CaptureSceneMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Media::Devices::CaptureSceneMode> __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode_t;
#define __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::CaptureSceneMode>
//#define __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::CaptureSceneMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                enum FocusMode : int;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CMedia__CDevices__CFocusMode_USE
#define DEF___FIIterator_1_Windows__CMedia__CDevices__CFocusMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f9a43cd4-b300-541f-af79-3de3400e16af"))
IIterator<enum ABI::Windows::Media::Devices::FocusMode> : IIterator_impl<enum ABI::Windows::Media::Devices::FocusMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Devices.FocusMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Media::Devices::FocusMode> __FIIterator_1_Windows__CMedia__CDevices__CFocusMode_t;
#define __FIIterator_1_Windows__CMedia__CDevices__CFocusMode ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CDevices__CFocusMode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CDevices__CFocusMode ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::FocusMode>
//#define __FIIterator_1_Windows__CMedia__CDevices__CFocusMode_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::FocusMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CDevices__CFocusMode_USE */





#ifndef DEF___FIIterable_1_Windows__CMedia__CDevices__CFocusMode_USE
#define DEF___FIIterable_1_Windows__CMedia__CDevices__CFocusMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("561bc21f-4ae2-580a-a216-0ad48f373a4c"))
IIterable<enum ABI::Windows::Media::Devices::FocusMode> : IIterable_impl<enum ABI::Windows::Media::Devices::FocusMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Devices.FocusMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Media::Devices::FocusMode> __FIIterable_1_Windows__CMedia__CDevices__CFocusMode_t;
#define __FIIterable_1_Windows__CMedia__CDevices__CFocusMode ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CDevices__CFocusMode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CDevices__CFocusMode ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::FocusMode>
//#define __FIIterable_1_Windows__CMedia__CDevices__CFocusMode_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::FocusMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CDevices__CFocusMode_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                enum FocusPreset : int;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_USE
#define DEF___FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d3ebc8e9-f0c5-51c0-bb86-bdea0a6946fb"))
IIterator<enum ABI::Windows::Media::Devices::FocusPreset> : IIterator_impl<enum ABI::Windows::Media::Devices::FocusPreset> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Devices.FocusPreset>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Media::Devices::FocusPreset> __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_t;
#define __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::FocusPreset>
//#define __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::FocusPreset>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_USE */





#ifndef DEF___FIIterable_1_Windows__CMedia__CDevices__CFocusPreset_USE
#define DEF___FIIterable_1_Windows__CMedia__CDevices__CFocusPreset_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("26ba711b-3a32-5216-bc34-61ecafbebdc1"))
IIterable<enum ABI::Windows::Media::Devices::FocusPreset> : IIterable_impl<enum ABI::Windows::Media::Devices::FocusPreset> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Devices.FocusPreset>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Media::Devices::FocusPreset> __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset_t;
#define __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CDevices__CFocusPreset_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::FocusPreset>
//#define __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::FocusPreset>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CDevices__CFocusPreset_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                enum HdrVideoMode : int;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_USE
#define DEF___FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3db61d13-0f30-5d2d-99cb-30c7b9009878"))
IIterator<enum ABI::Windows::Media::Devices::HdrVideoMode> : IIterator_impl<enum ABI::Windows::Media::Devices::HdrVideoMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Devices.HdrVideoMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Media::Devices::HdrVideoMode> __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_t;
#define __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::HdrVideoMode>
//#define __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::HdrVideoMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_USE */





#ifndef DEF___FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode_USE
#define DEF___FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1d9679a7-2d06-5294-ac67-f9cd3561dcb8"))
IIterable<enum ABI::Windows::Media::Devices::HdrVideoMode> : IIterable_impl<enum ABI::Windows::Media::Devices::HdrVideoMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Devices.HdrVideoMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Media::Devices::HdrVideoMode> __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode_t;
#define __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::HdrVideoMode>
//#define __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::HdrVideoMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                enum IsoSpeedPreset : int;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_USE
#define DEF___FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1b33af76-980b-5348-916a-793f61b555a0"))
IIterator<enum ABI::Windows::Media::Devices::IsoSpeedPreset> : IIterator_impl<enum ABI::Windows::Media::Devices::IsoSpeedPreset> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Devices.IsoSpeedPreset>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Media::Devices::IsoSpeedPreset> __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_t;
#define __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::IsoSpeedPreset>
//#define __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::IsoSpeedPreset>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_USE */





#ifndef DEF___FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset_USE
#define DEF___FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("94839abe-9712-545a-a94d-a567a3e8dfb7"))
IIterable<enum ABI::Windows::Media::Devices::IsoSpeedPreset> : IIterable_impl<enum ABI::Windows::Media::Devices::IsoSpeedPreset> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Devices.IsoSpeedPreset>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Media::Devices::IsoSpeedPreset> __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset_t;
#define __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::IsoSpeedPreset>
//#define __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::IsoSpeedPreset>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                enum ManualFocusDistance : int;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_USE
#define DEF___FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b02944e1-f649-511e-80dd-2e2b20379deb"))
IIterator<enum ABI::Windows::Media::Devices::ManualFocusDistance> : IIterator_impl<enum ABI::Windows::Media::Devices::ManualFocusDistance> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Devices.ManualFocusDistance>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Media::Devices::ManualFocusDistance> __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_t;
#define __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::ManualFocusDistance>
//#define __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::ManualFocusDistance>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_USE */





#ifndef DEF___FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance_USE
#define DEF___FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cf8cbeb1-2a4c-522d-962f-84c31a598d68"))
IIterable<enum ABI::Windows::Media::Devices::ManualFocusDistance> : IIterable_impl<enum ABI::Windows::Media::Devices::ManualFocusDistance> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Devices.ManualFocusDistance>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Media::Devices::ManualFocusDistance> __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance_t;
#define __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::ManualFocusDistance>
//#define __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::ManualFocusDistance>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                enum OpticalImageStabilizationMode : int;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_USE
#define DEF___FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4a165d46-cf19-5a03-bb54-63fc2b4ed39b"))
IIterator<enum ABI::Windows::Media::Devices::OpticalImageStabilizationMode> : IIterator_impl<enum ABI::Windows::Media::Devices::OpticalImageStabilizationMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Devices.OpticalImageStabilizationMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Media::Devices::OpticalImageStabilizationMode> __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_t;
#define __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::OpticalImageStabilizationMode>
//#define __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::OpticalImageStabilizationMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_USE */





#ifndef DEF___FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_USE
#define DEF___FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("323d7734-94c2-544d-a560-56560fe68819"))
IIterable<enum ABI::Windows::Media::Devices::OpticalImageStabilizationMode> : IIterable_impl<enum ABI::Windows::Media::Devices::OpticalImageStabilizationMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Devices.OpticalImageStabilizationMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Media::Devices::OpticalImageStabilizationMode> __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_t;
#define __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::OpticalImageStabilizationMode>
//#define __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::OpticalImageStabilizationMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class RegionOfInterest;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_USE
#define DEF___FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8eb80e4e-9691-594f-8b3d-f52ecc0f7837"))
IIterator<ABI::Windows::Media::Devices::RegionOfInterest*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Devices::RegionOfInterest*, ABI::Windows::Media::Devices::IRegionOfInterest*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Devices.RegionOfInterest>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Devices::RegionOfInterest*> __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_t;
#define __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::IRegionOfInterest*>
//#define __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::IRegionOfInterest*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest_USE
#define DEF___FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d73144c7-9d75-5dfb-8040-626202dcf454"))
IIterable<ABI::Windows::Media::Devices::RegionOfInterest*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Devices::RegionOfInterest*, ABI::Windows::Media::Devices::IRegionOfInterest*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Devices.RegionOfInterest>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Devices::RegionOfInterest*> __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest_t;
#define __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::IRegionOfInterest*>
//#define __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::IRegionOfInterest*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                enum ZoomTransitionMode : int;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_USE
#define DEF___FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("80eb468a-fdc4-5c89-99b8-8d476264e211"))
IIterator<enum ABI::Windows::Media::Devices::ZoomTransitionMode> : IIterator_impl<enum ABI::Windows::Media::Devices::ZoomTransitionMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Devices.ZoomTransitionMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Media::Devices::ZoomTransitionMode> __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_t;
#define __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::ZoomTransitionMode>
//#define __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::ZoomTransitionMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_USE */





#ifndef DEF___FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode_USE
#define DEF___FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("db656915-8fac-5fb2-98e0-0e97421656c5"))
IIterable<enum ABI::Windows::Media::Devices::ZoomTransitionMode> : IIterable_impl<enum ABI::Windows::Media::Devices::ZoomTransitionMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Devices.ZoomTransitionMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Media::Devices::ZoomTransitionMode> __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode_t;
#define __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::ZoomTransitionMode>
//#define __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::ZoomTransitionMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode_USE */





#ifndef DEF___FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_USE
#define DEF___FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d05843b6-03c8-523e-b6fb-1fcb03218a54"))
IVectorView<enum ABI::Windows::Media::Devices::AdvancedPhotoMode> : IVectorView_impl<enum ABI::Windows::Media::Devices::AdvancedPhotoMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Devices.AdvancedPhotoMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Media::Devices::AdvancedPhotoMode> __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_t;
#define __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::AdvancedPhotoMode>
//#define __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::AdvancedPhotoMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_USE
#define DEF___FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b9f55617-48ec-5ad7-95ca-33395284f28b"))
IVectorView<ABI::Windows::Media::Devices::AudioDeviceModule*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Devices::AudioDeviceModule*, ABI::Windows::Media::Devices::IAudioDeviceModule*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Devices.AudioDeviceModule>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Devices::AudioDeviceModule*> __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_t;
#define __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::IAudioDeviceModule*>
//#define __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::IAudioDeviceModule*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#ifndef DEF___FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_USE
#define DEF___FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5df64825-c9e1-525f-9aeb-3c0f5f805f26"))
IVectorView<enum ABI::Windows::Media::Devices::AutoFocusRange> : IVectorView_impl<enum ABI::Windows::Media::Devices::AutoFocusRange> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Devices.AutoFocusRange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Media::Devices::AutoFocusRange> __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_t;
#define __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::AutoFocusRange>
//#define __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::AutoFocusRange>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_USE */





#ifndef DEF___FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_USE
#define DEF___FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9b915d69-e718-5b48-bb94-54bdf3737ea5"))
IVectorView<enum ABI::Windows::Media::Devices::CaptureSceneMode> : IVectorView_impl<enum ABI::Windows::Media::Devices::CaptureSceneMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Devices.CaptureSceneMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Media::Devices::CaptureSceneMode> __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_t;
#define __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::CaptureSceneMode>
//#define __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::CaptureSceneMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_USE */





#ifndef DEF___FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_USE
#define DEF___FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c877975c-f3c3-5b3d-93e4-5787be9b7f58"))
IVectorView<enum ABI::Windows::Media::Devices::FocusMode> : IVectorView_impl<enum ABI::Windows::Media::Devices::FocusMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Devices.FocusMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Media::Devices::FocusMode> __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_t;
#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::FocusMode>
//#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::FocusMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_USE */





#ifndef DEF___FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_USE
#define DEF___FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d8a495e3-d7d4-5e9f-a9c2-6b250655a2e0"))
IVectorView<enum ABI::Windows::Media::Devices::FocusPreset> : IVectorView_impl<enum ABI::Windows::Media::Devices::FocusPreset> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Devices.FocusPreset>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Media::Devices::FocusPreset> __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_t;
#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::FocusPreset>
//#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::FocusPreset>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_USE */





#ifndef DEF___FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_USE
#define DEF___FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ad0a4bbd-7630-53a4-aa9b-35a8c7d4958c"))
IVectorView<enum ABI::Windows::Media::Devices::HdrVideoMode> : IVectorView_impl<enum ABI::Windows::Media::Devices::HdrVideoMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Devices.HdrVideoMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Media::Devices::HdrVideoMode> __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_t;
#define __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::HdrVideoMode>
//#define __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::HdrVideoMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_USE */





#ifndef DEF___FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_USE
#define DEF___FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ef6c9fe3-06f9-5eff-98a8-917d9644c946"))
IVectorView<enum ABI::Windows::Media::Devices::IsoSpeedPreset> : IVectorView_impl<enum ABI::Windows::Media::Devices::IsoSpeedPreset> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Devices.IsoSpeedPreset>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Media::Devices::IsoSpeedPreset> __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_t;
#define __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::IsoSpeedPreset>
//#define __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::IsoSpeedPreset>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_USE */





#ifndef DEF___FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_USE
#define DEF___FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("85f7663b-5467-5736-8d34-34395aa6d123"))
IVectorView<enum ABI::Windows::Media::Devices::ManualFocusDistance> : IVectorView_impl<enum ABI::Windows::Media::Devices::ManualFocusDistance> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Devices.ManualFocusDistance>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Media::Devices::ManualFocusDistance> __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_t;
#define __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::ManualFocusDistance>
//#define __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::ManualFocusDistance>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_USE */





#ifndef DEF___FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_USE
#define DEF___FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c2658d8-acaa-5a80-b259-1ba0697c6138"))
IVectorView<enum ABI::Windows::Media::Devices::OpticalImageStabilizationMode> : IVectorView_impl<enum ABI::Windows::Media::Devices::OpticalImageStabilizationMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Devices.OpticalImageStabilizationMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Media::Devices::OpticalImageStabilizationMode> __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_t;
#define __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::OpticalImageStabilizationMode>
//#define __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::OpticalImageStabilizationMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_USE */





#ifndef DEF___FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_USE
#define DEF___FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4d556155-d021-5a46-9a1c-f401d61b8529"))
IVectorView<enum ABI::Windows::Media::Devices::ZoomTransitionMode> : IVectorView_impl<enum ABI::Windows::Media::Devices::ZoomTransitionMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Devices.ZoomTransitionMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Media::Devices::ZoomTransitionMode> __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_t;
#define __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::ZoomTransitionMode>
//#define __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::ZoomTransitionMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class ModuleCommandResult;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cb786404-f2e8-5e0b-bf12-39e31483cfae"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Devices::ModuleCommandResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Devices::ModuleCommandResult*, ABI::Windows::Media::Devices::IModuleCommandResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Devices.ModuleCommandResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Devices::ModuleCommandResult*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Devices::IModuleCommandResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Devices::IModuleCommandResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2e1f3d72-a58d-5b0a-b42d-3660c04cfeeb"))
IAsyncOperation<ABI::Windows::Media::Devices::ModuleCommandResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Devices::ModuleCommandResult*, ABI::Windows::Media::Devices::IModuleCommandResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Devices.ModuleCommandResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Devices::ModuleCommandResult*> __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult_t;
#define __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Devices::IModuleCommandResult*>
//#define __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Devices::IModuleCommandResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#ifndef DEF___FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode_USE
#define DEF___FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e20596aa-0bbe-5203-be6b-6b71ff5b0843"))
IReference<enum ABI::Windows::Media::Devices::CaptureSceneMode> : IReference_impl<enum ABI::Windows::Media::Devices::CaptureSceneMode> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Media.Devices.CaptureSceneMode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<enum ABI::Windows::Media::Devices::CaptureSceneMode> __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode_t;
#define __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode ABI::Windows::Foundation::__FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode ABI::Windows::Foundation::IReference<ABI::Windows::Media::Devices::CaptureSceneMode>
//#define __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode_t ABI::Windows::Foundation::IReference<ABI::Windows::Media::Devices::CaptureSceneMode>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode_USE */





#ifndef DEF___FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance_USE
#define DEF___FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b0060b8a-1105-5ad4-963d-f6cf1905d349"))
IReference<enum ABI::Windows::Media::Devices::ManualFocusDistance> : IReference_impl<enum ABI::Windows::Media::Devices::ManualFocusDistance> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Media.Devices.ManualFocusDistance>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<enum ABI::Windows::Media::Devices::ManualFocusDistance> __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance_t;
#define __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance ABI::Windows::Foundation::__FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance ABI::Windows::Foundation::IReference<ABI::Windows::Media::Devices::ManualFocusDistance>
//#define __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance_t ABI::Windows::Foundation::IReference<ABI::Windows::Media::Devices::ManualFocusDistance>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                enum MediaCaptureFocusState : int;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState_USE
#define DEF___FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("58820185-5da0-5faa-86da-9bd9f03974fa"))
IReference<enum ABI::Windows::Media::Devices::MediaCaptureFocusState> : IReference_impl<enum ABI::Windows::Media::Devices::MediaCaptureFocusState> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Media.Devices.MediaCaptureFocusState>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<enum ABI::Windows::Media::Devices::MediaCaptureFocusState> __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState_t;
#define __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState ABI::Windows::Foundation::__FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState ABI::Windows::Foundation::IReference<ABI::Windows::Media::Devices::MediaCaptureFocusState>
//#define __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState_t ABI::Windows::Foundation::IReference<ABI::Windows::Media::Devices::MediaCaptureFocusState>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState_USE */




namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class DefaultAudioCaptureDeviceChangedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("97d07327-2c78-57bc-98e6-a24cd024cf5b"))
ITypedEventHandler<IInspectable*,ABI::Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs*> : ITypedEventHandler_impl<IInspectable*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs*, ABI::Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Object, Windows.Media.Devices.DefaultAudioCaptureDeviceChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<IInspectable*,ABI::Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs*> __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs_t;
#define __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs*>
//#define __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class DefaultAudioRenderDeviceChangedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fd732aca-dafc-5b7d-bf72-b560b78d260c"))
ITypedEventHandler<IInspectable*,ABI::Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs*> : ITypedEventHandler_impl<IInspectable*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs*, ABI::Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Object, Windows.Media.Devices.DefaultAudioRenderDeviceChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<IInspectable*,ABI::Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs*> __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs_t;
#define __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs*>
//#define __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class AudioDeviceModulesManager;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class AudioDeviceModuleNotificationEventArgs;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b2f6b1fd-7092-5724-b2ce-91b1176e80e1"))
ITypedEventHandler<ABI::Windows::Media::Devices::AudioDeviceModulesManager*,ABI::Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Devices::AudioDeviceModulesManager*, ABI::Windows::Media::Devices::IAudioDeviceModulesManager*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs*, ABI::Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Devices.AudioDeviceModulesManager, Windows.Media.Devices.AudioDeviceModuleNotificationEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Devices::AudioDeviceModulesManager*,ABI::Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Devices::IAudioDeviceModulesManager*,ABI::Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Devices::IAudioDeviceModulesManager*,ABI::Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


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



#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IMediaEncodingProperties;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties ABI::Windows::Media::MediaProperties::IMediaEncodingProperties

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_USE
#define DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7c094aec-c8f3-5f49-99c7-b66d8414200e"))
IIterator<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*> : IIterator_impl<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.MediaProperties.IMediaEncodingProperties>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*> __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_t;
#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*>
//#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_USE
#define DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d7fc75d5-3492-5bbb-9b34-dac3e24e79d0"))
IIterable<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*> : IIterable_impl<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.MediaProperties.IMediaEncodingProperties>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*> __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_t;
#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*>
//#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_USE
#define DEF___FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0f6c3b8b-5818-5cbf-bf26-6616bfc308c4"))
IVectorView<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*> : IVectorView_impl<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.MediaProperties.IMediaEncodingProperties>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*> __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_t;
#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*>
//#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



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


namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                
                typedef enum MediaStreamType : int MediaStreamType;
                
            } /* Windows */
        } /* Media */
    } /* Capture */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                
                typedef enum PowerlineFrequency : int PowerlineFrequency;
                
            } /* Windows */
        } /* Media */
    } /* Capture */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    class VariablePhotoSequenceController;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface IVariablePhotoSequenceController;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController ABI::Windows::Media::Devices::Core::IVariablePhotoSequenceController

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_FWD_DEFINED__







namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                
                typedef enum MediaPixelFormat : int MediaPixelFormat;
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                class MediaRatio;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IMediaRatio;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio ABI::Windows::Media::MediaProperties::IMediaRatio

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                
                typedef enum MediaThumbnailFormat : int MediaThumbnailFormat;
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */




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
        namespace Media {
            namespace Devices {
                
                typedef enum AdvancedPhotoMode : int AdvancedPhotoMode;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum AudioDeviceRole : int AudioDeviceRole;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum AutoFocusRange : int AutoFocusRange;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum CameraStreamState : int CameraStreamState;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum CaptureSceneMode : int CaptureSceneMode;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum CaptureUse : int CaptureUse;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum ColorTemperaturePreset : int ColorTemperaturePreset;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum FocusMode : int FocusMode;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum FocusPreset : int FocusPreset;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum HdrVideoMode : int HdrVideoMode;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum IsoSpeedPreset : int IsoSpeedPreset;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum ManualFocusDistance : int ManualFocusDistance;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum MediaCaptureFocusState : int MediaCaptureFocusState;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum MediaCaptureOptimization : int MediaCaptureOptimization;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum MediaCapturePauseBehavior : int MediaCapturePauseBehavior;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum OpticalImageStabilizationMode : int OpticalImageStabilizationMode;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum RegionOfInterestType : int RegionOfInterestType;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum SendCommandStatus : int SendCommandStatus;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum TelephonyKey : int TelephonyKey;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum VideoDeviceControllerGetDevicePropertyStatus : int VideoDeviceControllerGetDevicePropertyStatus;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum VideoDeviceControllerSetDevicePropertyStatus : int VideoDeviceControllerSetDevicePropertyStatus;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                
                typedef enum ZoomTransitionMode : int ZoomTransitionMode;
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */






















































namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class AdvancedPhotoCaptureSettings;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class AdvancedPhotoControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class AudioDeviceController;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class CallControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class DialRequestedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class ExposureCompensationControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class ExposureControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class ExposurePriorityVideoControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class FlashControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class FocusControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class FocusSettings;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class HdrVideoControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class IsoSpeedControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class KeypadPressedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class LowLagPhotoControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class LowLagPhotoSequenceControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class MediaDeviceControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class MediaDeviceControlCapabilities;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class OpticalImageStabilizationControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class PhotoConfirmationControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class RedialRequestedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class RegionsOfInterestControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class SceneModeControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class TorchControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class VideoDeviceController;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class VideoDeviceControllerGetDevicePropertyResult;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class WhiteBalanceControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class ZoomControl;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class ZoomSettings;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */











/*
 *
 * Struct Windows.Media.Devices.AdvancedPhotoMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum AdvancedPhotoMode : int
                {
                    AdvancedPhotoMode_Auto = 0,
                    AdvancedPhotoMode_Standard = 1,
                    AdvancedPhotoMode_Hdr = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    AdvancedPhotoMode_LowLight = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.AudioDeviceRole
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum AudioDeviceRole : int
                {
                    AudioDeviceRole_Default = 0,
                    AudioDeviceRole_Communications = 1,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.AutoFocusRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum AutoFocusRange : int
                {
                    AutoFocusRange_FullRange = 0,
                    AutoFocusRange_Macro = 1,
                    AutoFocusRange_Normal = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.CameraStreamState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum CameraStreamState : int
                {
                    CameraStreamState_NotStreaming = 0,
                    CameraStreamState_Streaming = 1,
                    CameraStreamState_BlockedForPrivacy = 2,
                    CameraStreamState_Shutdown = 3,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.CaptureSceneMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum CaptureSceneMode : int
                {
                    CaptureSceneMode_Auto = 0,
                    CaptureSceneMode_Manual = 1,
                    CaptureSceneMode_Macro = 2,
                    CaptureSceneMode_Portrait = 3,
                    CaptureSceneMode_Sport = 4,
                    CaptureSceneMode_Snow = 5,
                    CaptureSceneMode_Night = 6,
                    CaptureSceneMode_Beach = 7,
                    CaptureSceneMode_Sunset = 8,
                    CaptureSceneMode_Candlelight = 9,
                    CaptureSceneMode_Landscape = 10,
                    CaptureSceneMode_NightPortrait = 11,
                    CaptureSceneMode_Backlit = 12,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.CaptureUse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum CaptureUse : int
                {
                    CaptureUse_None = 0,
                    CaptureUse_Photo = 1,
                    CaptureUse_Video = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.ColorTemperaturePreset
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum ColorTemperaturePreset : int
                {
                    ColorTemperaturePreset_Auto = 0,
                    ColorTemperaturePreset_Manual = 1,
                    ColorTemperaturePreset_Cloudy = 2,
                    ColorTemperaturePreset_Daylight = 3,
                    ColorTemperaturePreset_Flash = 4,
                    ColorTemperaturePreset_Fluorescent = 5,
                    ColorTemperaturePreset_Tungsten = 6,
                    ColorTemperaturePreset_Candlelight = 7,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.FocusMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum FocusMode : int
                {
                    FocusMode_Auto = 0,
                    FocusMode_Single = 1,
                    FocusMode_Continuous = 2,
                    FocusMode_Manual = 3,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.FocusPreset
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum FocusPreset : int
                {
                    FocusPreset_Auto = 0,
                    FocusPreset_Manual = 1,
                    FocusPreset_AutoMacro = 2,
                    FocusPreset_AutoNormal = 3,
                    FocusPreset_AutoInfinity = 4,
                    FocusPreset_AutoHyperfocal = 5,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.HdrVideoMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum HdrVideoMode : int
                {
                    HdrVideoMode_Off = 0,
                    HdrVideoMode_On = 1,
                    HdrVideoMode_Auto = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.IsoSpeedPreset
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, deprecated, contract] */
                enum 
                #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                DEPRECATED("IsoSpeedPreset may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")
                #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                IsoSpeedPreset : int
                {
                    IsoSpeedPreset_Auto = 0,
                    IsoSpeedPreset_Iso50 = 1,
                    IsoSpeedPreset_Iso80 = 2,
                    IsoSpeedPreset_Iso100 = 3,
                    IsoSpeedPreset_Iso200 = 4,
                    IsoSpeedPreset_Iso400 = 5,
                    IsoSpeedPreset_Iso800 = 6,
                    IsoSpeedPreset_Iso1600 = 7,
                    IsoSpeedPreset_Iso3200 = 8,
                    IsoSpeedPreset_Iso6400 = 9,
                    IsoSpeedPreset_Iso12800 = 10,
                    IsoSpeedPreset_Iso25600 = 11,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.ManualFocusDistance
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum ManualFocusDistance : int
                {
                    ManualFocusDistance_Infinity = 0,
                    ManualFocusDistance_Hyperfocal = 1,
                    ManualFocusDistance_Nearest = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.MediaCaptureFocusState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum MediaCaptureFocusState : int
                {
                    MediaCaptureFocusState_Uninitialized = 0,
                    MediaCaptureFocusState_Lost = 1,
                    MediaCaptureFocusState_Searching = 2,
                    MediaCaptureFocusState_Focused = 3,
                    MediaCaptureFocusState_Failed = 4,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.MediaCaptureOptimization
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum MediaCaptureOptimization : int
                {
                    MediaCaptureOptimization_Default = 0,
                    MediaCaptureOptimization_Quality = 1,
                    MediaCaptureOptimization_Latency = 2,
                    MediaCaptureOptimization_Power = 3,
                    MediaCaptureOptimization_LatencyThenQuality = 4,
                    MediaCaptureOptimization_LatencyThenPower = 5,
                    MediaCaptureOptimization_PowerAndQuality = 6,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.MediaCapturePauseBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum MediaCapturePauseBehavior : int
                {
                    MediaCapturePauseBehavior_RetainHardwareResources = 0,
                    MediaCapturePauseBehavior_ReleaseHardwareResources = 1,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.OpticalImageStabilizationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum OpticalImageStabilizationMode : int
                {
                    OpticalImageStabilizationMode_Off = 0,
                    OpticalImageStabilizationMode_On = 1,
                    OpticalImageStabilizationMode_Auto = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.RegionOfInterestType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum RegionOfInterestType : int
                {
                    RegionOfInterestType_Unknown = 0,
                    RegionOfInterestType_Face = 1,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.SendCommandStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum SendCommandStatus : int
                {
                    SendCommandStatus_Success = 0,
                    SendCommandStatus_DeviceNotAvailable = 1,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Media.Devices.TelephonyKey
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 */

#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum TelephonyKey : int
                {
                    TelephonyKey_D0 = 0,
                    TelephonyKey_D1 = 1,
                    TelephonyKey_D2 = 2,
                    TelephonyKey_D3 = 3,
                    TelephonyKey_D4 = 4,
                    TelephonyKey_D5 = 5,
                    TelephonyKey_D6 = 6,
                    TelephonyKey_D7 = 7,
                    TelephonyKey_D8 = 8,
                    TelephonyKey_D9 = 9,
                    TelephonyKey_Star = 10,
                    TelephonyKey_Pound = 11,
                    TelephonyKey_A = 12,
                    TelephonyKey_B = 13,
                    TelephonyKey_C = 14,
                    TelephonyKey_D = 15,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.VideoDeviceControllerGetDevicePropertyStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum VideoDeviceControllerGetDevicePropertyStatus : int
                {
                    VideoDeviceControllerGetDevicePropertyStatus_Success = 0,
                    VideoDeviceControllerGetDevicePropertyStatus_UnknownFailure = 1,
                    VideoDeviceControllerGetDevicePropertyStatus_BufferTooSmall = 2,
                    VideoDeviceControllerGetDevicePropertyStatus_NotSupported = 3,
                    VideoDeviceControllerGetDevicePropertyStatus_DeviceNotAvailable = 4,
                    VideoDeviceControllerGetDevicePropertyStatus_MaxPropertyValueSizeTooSmall = 5,
                    VideoDeviceControllerGetDevicePropertyStatus_MaxPropertyValueSizeRequired = 6,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Media.Devices.VideoDeviceControllerSetDevicePropertyStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum VideoDeviceControllerSetDevicePropertyStatus : int
                {
                    VideoDeviceControllerSetDevicePropertyStatus_Success = 0,
                    VideoDeviceControllerSetDevicePropertyStatus_UnknownFailure = 1,
                    VideoDeviceControllerSetDevicePropertyStatus_NotSupported = 2,
                    VideoDeviceControllerSetDevicePropertyStatus_InvalidValue = 3,
                    VideoDeviceControllerSetDevicePropertyStatus_DeviceNotAvailable = 4,
                    VideoDeviceControllerSetDevicePropertyStatus_NotInControl = 5,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Media.Devices.ZoomTransitionMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [v1_enum, contract] */
                enum ZoomTransitionMode : int
                {
                    ZoomTransitionMode_Auto = 0,
                    ZoomTransitionMode_Direct = 1,
                    ZoomTransitionMode_Smooth = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Media.Devices.CallControlEventHandler
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("596F759F-50DF-4454-BC63-4D3D01B61958"), contract] */
                MIDL_INTERFACE("596F759F-50DF-4454-BC63-4D3D01B61958")
                ICallControlEventHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::ICallControl * sender
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICallControlEventHandler=_uuidof(ICallControlEventHandler);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Media.Devices.DialRequestedEventHandler
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("5ABBFFDB-C21F-4BC4-891B-257E28C1B1A4"), contract] */
                MIDL_INTERFACE("5ABBFFDB-C21F-4BC4-891B-257E28C1B1A4")
                IDialRequestedEventHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::ICallControl * sender,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::IDialRequestedEventArgs * e
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDialRequestedEventHandler=_uuidof(IDialRequestedEventHandler);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Media.Devices.KeypadPressedEventHandler
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("E637A454-C527-422C-8926-C9AF83B559A0"), contract] */
                MIDL_INTERFACE("E637A454-C527-422C-8926-C9AF83B559A0")
                IKeypadPressedEventHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::ICallControl * sender,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::IKeypadPressedEventArgs * e
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IKeypadPressedEventHandler=_uuidof(IKeypadPressedEventHandler);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Media.Devices.RedialRequestedEventHandler
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("BAF257D1-4EBD-4B84-9F47-6EC43D75D8B1"), contract] */
                MIDL_INTERFACE("BAF257D1-4EBD-4B84-9F47-6EC43D75D8B1")
                IRedialRequestedEventHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::ICallControl * sender,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::IRedialRequestedEventArgs * e
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRedialRequestedEventHandler=_uuidof(IRedialRequestedEventHandler);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IAdvancedPhotoCaptureSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.AdvancedPhotoCaptureSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedPhotoCaptureSettings[] = L"Windows.Media.Devices.IAdvancedPhotoCaptureSettings";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("08F3863A-0018-445B-93D2-646D1C5ED05C"), exclusiveto, contract] */
                MIDL_INTERFACE("08F3863A-0018-445B-93D2-646D1C5ED05C")
                IAdvancedPhotoCaptureSettings : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::AdvancedPhotoMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Mode(
                        /* [in] */ABI::Windows::Media::Devices::AdvancedPhotoMode value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAdvancedPhotoCaptureSettings=_uuidof(IAdvancedPhotoCaptureSettings);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IAdvancedPhotoControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.AdvancedPhotoControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedPhotoControl[] = L"Windows.Media.Devices.IAdvancedPhotoControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("C5B15486-9001-4682-9309-68EAE0080EEC"), exclusiveto, contract] */
                MIDL_INTERFACE("C5B15486-9001-4682-9309-68EAE0080EEC")
                IAdvancedPhotoControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedModes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::AdvancedPhotoMode * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Configure(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::IAdvancedPhotoCaptureSettings * settings
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAdvancedPhotoControl=_uuidof(IAdvancedPhotoControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IAdvancedVideoCaptureDeviceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.VideoDeviceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController[] = L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("DE6FF4D3-2B96-4583-80AB-B5B01DC6A8D7"), exclusiveto, contract] */
                MIDL_INTERFACE("DE6FF4D3-2B96-4583-80AB-B5B01DC6A8D7")
                IAdvancedVideoCaptureDeviceController : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SetDeviceProperty(
                        /* [in] */__RPC__in HSTRING propertyId,
                        /* [in] */__RPC__in_opt IInspectable * propertyValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceProperty(
                        /* [in] */__RPC__in HSTRING propertyId,
                        /* [retval, out] */__RPC__deref_out_opt IInspectable * * propertyValue
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAdvancedVideoCaptureDeviceController=_uuidof(IAdvancedVideoCaptureDeviceController);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IAdvancedVideoCaptureDeviceController2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.VideoDeviceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2[] = L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("8BB94F8F-F11A-43DB-B402-11930B80AE56"), exclusiveto, contract] */
                MIDL_INTERFACE("8BB94F8F-F11A-43DB-B402-11930B80AE56")
                IAdvancedVideoCaptureDeviceController2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LowLagPhotoSequence(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::ILowLagPhotoSequenceControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LowLagPhoto(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::ILowLagPhotoControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SceneModeControl(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::ISceneModeControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TorchControl(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::ITorchControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FlashControl(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IFlashControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WhiteBalanceControl(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IWhiteBalanceControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExposureControl(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IExposureControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FocusControl(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IFocusControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExposureCompensationControl(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IExposureCompensationControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsoSpeedControl(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IIsoSpeedControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RegionsOfInterestControl(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IRegionsOfInterestControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PrimaryUse(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::CaptureUse * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PrimaryUse(
                        /* [in] */ABI::Windows::Media::Devices::CaptureUse value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAdvancedVideoCaptureDeviceController2=_uuidof(IAdvancedVideoCaptureDeviceController2);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IAdvancedVideoCaptureDeviceController3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.VideoDeviceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController3[] = L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController3";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("A98B8F34-EE0D-470C-B9F0-4229C4BBD089"), exclusiveto, contract] */
                MIDL_INTERFACE("A98B8F34-EE0D-470C-B9F0-4229C4BBD089")
                IAdvancedVideoCaptureDeviceController3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VariablePhotoSequenceController(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::Core::IVariablePhotoSequenceController * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhotoConfirmationControl(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IPhotoConfirmationControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ZoomControl(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IZoomControl * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAdvancedVideoCaptureDeviceController3=_uuidof(IAdvancedVideoCaptureDeviceController3);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IAdvancedVideoCaptureDeviceController4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.VideoDeviceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4[] = L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController4";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("EA9FBFAF-D371-41C3-9A17-824A87EBDFD2"), exclusiveto, contract] */
                MIDL_INTERFACE("EA9FBFAF-D371-41C3-9A17-824A87EBDFD2")
                IAdvancedVideoCaptureDeviceController4 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExposurePriorityVideoControl(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IExposurePriorityVideoControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredOptimization(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::MediaCaptureOptimization * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredOptimization(
                        /* [in] */ABI::Windows::Media::Devices::MediaCaptureOptimization value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HdrVideoControl(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IHdrVideoControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OpticalImageStabilizationControl(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IOpticalImageStabilizationControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AdvancedPhotoControl(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IAdvancedPhotoControl * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAdvancedVideoCaptureDeviceController4=_uuidof(IAdvancedVideoCaptureDeviceController4);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IAdvancedVideoCaptureDeviceController5
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.VideoDeviceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController5[] = L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController5";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("33512B17-B9CB-4A23-B875-F9EAAB535492"), exclusiveto, contract] */
                MIDL_INTERFACE("33512B17-B9CB-4A23-B875-F9EAAB535492")
                IAdvancedVideoCaptureDeviceController5 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDevicePropertyById(
                        /* [in] */__RPC__in HSTRING propertyId,
                        /* [in] */__RPC__in_opt __FIReference_1_UINT32 * maxPropertyValueSize,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetDevicePropertyById(
                        /* [in] */__RPC__in HSTRING propertyId,
                        /* [in] */__RPC__in_opt IInspectable * propertyValue,
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDevicePropertyByExtendedId(
                        /* [in] */UINT32 __extendedPropertyIdSize,
                        /* [size_is(__extendedPropertyIdSize), in] */__RPC__in_ecount_full(__extendedPropertyIdSize) BYTE * extendedPropertyId,
                        /* [in] */__RPC__in_opt __FIReference_1_UINT32 * maxPropertyValueSize,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetDevicePropertyByExtendedId(
                        /* [in] */UINT32 __extendedPropertyIdSize,
                        /* [size_is(__extendedPropertyIdSize), in] */__RPC__in_ecount_full(__extendedPropertyIdSize) BYTE * extendedPropertyId,
                        /* [in] */UINT32 __propertyValueSize,
                        /* [size_is(__propertyValueSize), in] */__RPC__in_ecount_full(__propertyValueSize) BYTE * propertyValue,
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAdvancedVideoCaptureDeviceController5=_uuidof(IAdvancedVideoCaptureDeviceController5);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Devices.IAudioDeviceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.AudioDeviceController
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Devices.IMediaDeviceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAudioDeviceController[] = L"Windows.Media.Devices.IAudioDeviceController";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("EDD4A388-79C7-4F7C-90E8-EF934B21580A"), exclusiveto, contract] */
                MIDL_INTERFACE("EDD4A388-79C7-4F7C-90E8-EF934B21580A")
                IAudioDeviceController : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Muted(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Muted(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_VolumePercent(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VolumePercent(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioDeviceController=_uuidof(IAudioDeviceController);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IAudioDeviceModule
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.AudioDeviceModule
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAudioDeviceModule[] = L"Windows.Media.Devices.IAudioDeviceModule";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("86CFAC36-47C1-4B33-9852-8773EC4BE123"), exclusiveto, contract] */
                MIDL_INTERFACE("86CFAC36-47C1-4B33-9852-8773EC4BE123")
                IAudioDeviceModule : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClassId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InstanceId(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MajorVersion(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinorVersion(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SendCommandAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * Command,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioDeviceModule=_uuidof(IAudioDeviceModule);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Devices.IAudioDeviceModuleNotificationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.AudioDeviceModuleNotificationEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAudioDeviceModuleNotificationEventArgs[] = L"Windows.Media.Devices.IAudioDeviceModuleNotificationEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("E3E3CCAF-224C-48BE-956B-9A13134E96E8"), exclusiveto, contract] */
                MIDL_INTERFACE("E3E3CCAF-224C-48BE-956B-9A13134E96E8")
                IAudioDeviceModuleNotificationEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Module(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IAudioDeviceModule * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NotificationData(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioDeviceModuleNotificationEventArgs=_uuidof(IAudioDeviceModuleNotificationEventArgs);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Devices.IAudioDeviceModulesManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.AudioDeviceModulesManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAudioDeviceModulesManager[] = L"Windows.Media.Devices.IAudioDeviceModulesManager";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("6AA40C4D-960A-4D1C-B318-0022604547ED"), exclusiveto, contract] */
                MIDL_INTERFACE("6AA40C4D-960A-4D1C-B318-0022604547ED")
                IAudioDeviceModulesManager : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ModuleNotificationReceived(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ModuleNotificationReceived(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FindAllById(
                        /* [in] */__RPC__in HSTRING moduleId,
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * * modules
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FindAll(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * * modules
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioDeviceModulesManager=_uuidof(IAudioDeviceModulesManager);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Devices.IAudioDeviceModulesManagerFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.AudioDeviceModulesManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAudioDeviceModulesManagerFactory[] = L"Windows.Media.Devices.IAudioDeviceModulesManagerFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("8DB03670-E64D-4773-96C0-BC7EBF0E063F"), exclusiveto, contract] */
                MIDL_INTERFACE("8DB03670-E64D-4773-96C0-BC7EBF0E063F")
                IAudioDeviceModulesManagerFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IAudioDeviceModulesManager * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioDeviceModulesManagerFactory=_uuidof(IAudioDeviceModulesManagerFactory);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Devices.ICallControl
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.CallControl
 *
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CICallControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CICallControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_ICallControl[] = L"Windows.Media.Devices.ICallControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("A520D0D6-AE8D-45DB-8011-CA49D3B3E578"), exclusiveto, contract] */
                MIDL_INTERFACE("A520D0D6-AE8D-45DB-8011-CA49D3B3E578")
                ICallControl : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE IndicateNewIncomingCall(
                        /* [in] */boolean enableRinger,
                        /* [in] */__RPC__in HSTRING callerId,
                        /* [retval, out] */__RPC__out UINT64 * callToken
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IndicateNewOutgoingCall(
                        /* [retval, out] */__RPC__out UINT64 * callToken
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IndicateActiveCall(
                        /* [in] */UINT64 callToken
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE EndCall(
                        /* [in] */UINT64 callToken
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasRinger(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AnswerRequested(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::ICallControlEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AnswerRequested(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_HangUpRequested(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::ICallControlEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_HangUpRequested(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DialRequested(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::IDialRequestedEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DialRequested(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RedialRequested(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::IRedialRequestedEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RedialRequested(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_KeypadPressed(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::IKeypadPressedEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_KeypadPressed(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AudioTransferRequested(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::ICallControlEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AudioTransferRequested(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICallControl=_uuidof(ICallControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CICallControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CICallControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.ICallControlStatics
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.CallControl
 *
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_ICallControlStatics[] = L"Windows.Media.Devices.ICallControlStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("03945AD5-85AB-40E1-AF19-56C94303B019"), exclusiveto, contract] */
                MIDL_INTERFACE("03945AD5-85AB-40E1-AF19-56C94303B019")
                ICallControlStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::ICallControl * * callControl
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromId(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::ICallControl * * callControl
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICallControlStatics=_uuidof(ICallControlStatics);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CICallControlStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IDefaultAudioDeviceChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IDefaultAudioDeviceChangedEventArgs[] = L"Windows.Media.Devices.IDefaultAudioDeviceChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("110F882F-1C05-4657-A18E-47C9B69F07AB"), contract] */
                MIDL_INTERFACE("110F882F-1C05-4657-A18E-47C9B69F07AB")
                IDefaultAudioDeviceChangedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Role(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::AudioDeviceRole * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDefaultAudioDeviceChangedEventArgs=_uuidof(IDefaultAudioDeviceChangedEventArgs);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IDialRequestedEventArgs
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.DialRequestedEventArgs
 *
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IDialRequestedEventArgs[] = L"Windows.Media.Devices.IDialRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("037B929E-953C-4286-8866-4F0F376C855A"), exclusiveto, contract] */
                MIDL_INTERFACE("037B929E-953C-4286-8866-4F0F376C855A")
                IDialRequestedEventArgs : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Handled(void) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contact(
                        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDialRequestedEventArgs=_uuidof(IDialRequestedEventArgs);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IExposureCompensationControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.ExposureCompensationControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IExposureCompensationControl[] = L"Windows.Media.Devices.IExposureCompensationControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("81C8E834-DCEC-4011-A610-1F3847E64ACA"), exclusiveto, contract] */
                MIDL_INTERFACE("81C8E834-DCEC-4011-A610-1F3847E64ACA")
                IExposureCompensationControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Min(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Max(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Step(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetValueAsync(
                        /* [in] */FLOAT value,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IExposureCompensationControl=_uuidof(IExposureCompensationControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IExposureControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.ExposureControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIExposureControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIExposureControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IExposureControl[] = L"Windows.Media.Devices.IExposureControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("09E8CBE2-AD96-4F28-A0E0-96ED7E1B5FD2"), exclusiveto, contract] */
                MIDL_INTERFACE("09E8CBE2-AD96-4F28-A0E0-96ED7E1B5FD2")
                IExposureControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Auto(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetAutoAsync(
                        /* [in] */boolean value,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Min(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Max(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Step(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetValueAsync(
                        /* [in] */ABI::Windows::Foundation::TimeSpan shutterDuration,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IExposureControl=_uuidof(IExposureControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIExposureControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIExposureControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IExposurePriorityVideoControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.ExposurePriorityVideoControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IExposurePriorityVideoControl[] = L"Windows.Media.Devices.IExposurePriorityVideoControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("2CB240A3-5168-4271-9EA5-47621A98A352"), exclusiveto, contract] */
                MIDL_INTERFACE("2CB240A3-5168-4271-9EA5-47621A98A352")
                IExposurePriorityVideoControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Enabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Enabled(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IExposurePriorityVideoControl=_uuidof(IExposurePriorityVideoControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IFlashControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.FlashControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIFlashControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIFlashControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IFlashControl[] = L"Windows.Media.Devices.IFlashControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("DEF41DBE-7D68-45E3-8C0F-BE7BB32837D0"), exclusiveto, contract] */
                MIDL_INTERFACE("DEF41DBE-7D68-45E3-8C0F-BE7BB32837D0")
                IFlashControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PowerSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RedEyeReductionSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Enabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Enabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Auto(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Auto(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RedEyeReduction(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RedEyeReduction(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PowerPercent(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PowerPercent(
                        /* [in] */FLOAT value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFlashControl=_uuidof(IFlashControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIFlashControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIFlashControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IFlashControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.FlashControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IFlashControl2[] = L"Windows.Media.Devices.IFlashControl2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("7D29CC9E-75E1-4AF7-BD7D-4E38E1C06CD6"), exclusiveto, contract] */
                MIDL_INTERFACE("7D29CC9E-75E1-4AF7-BD7D-4E38E1C06CD6")
                IFlashControl2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AssistantLightSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AssistantLightEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AssistantLightEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFlashControl2=_uuidof(IFlashControl2);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIFlashControl2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IFocusControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.FocusControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIFocusControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIFocusControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IFocusControl[] = L"Windows.Media.Devices.IFocusControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("C0D889F6-5228-4453-B153-85606592B238"), exclusiveto, contract] */
                MIDL_INTERFACE("C0D889F6-5228-4453-B153-85606592B238")
                IFocusControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedPresets(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Preset(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::FocusPreset * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetPresetAsync(
                        /* [in] */ABI::Windows::Media::Devices::FocusPreset preset,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetPresetWithCompletionOptionAsync(
                        /* [in] */ABI::Windows::Media::Devices::FocusPreset preset,
                        /* [in] */boolean completeBeforeFocus,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Min(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Max(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Step(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetValueAsync(
                        /* [in] */UINT32 focus,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FocusAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFocusControl=_uuidof(IFocusControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIFocusControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIFocusControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IFocusControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.FocusControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IFocusControl2[] = L"Windows.Media.Devices.IFocusControl2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("3F7CFF48-C534-4E9E-94C3-52EF2AFD5D07"), exclusiveto, contract] */
                MIDL_INTERFACE("3F7CFF48-C534-4E9E-94C3-52EF2AFD5D07")
                IFocusControl2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FocusChangedSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WaitForFocusSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedFocusModes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedFocusDistances(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedFocusRanges(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::FocusMode * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FocusState(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::MediaCaptureFocusState * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UnlockAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LockAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Configure(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::IFocusSettings * settings
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFocusControl2=_uuidof(IFocusControl2);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIFocusControl2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IFocusSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.FocusSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IFocusSettings[] = L"Windows.Media.Devices.IFocusSettings";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("79958F6B-3263-4275-85D6-AEAE891C96EE"), exclusiveto, contract] */
                MIDL_INTERFACE("79958F6B-3263-4275-85D6-AEAE891C96EE")
                IFocusSettings : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::FocusMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Mode(
                        /* [in] */ABI::Windows::Media::Devices::FocusMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoFocusRange(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::AutoFocusRange * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AutoFocusRange(
                        /* [in] */ABI::Windows::Media::Devices::AutoFocusRange value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                        /* [in] */__RPC__in_opt __FIReference_1_UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Distance(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Distance(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WaitForFocus(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_WaitForFocus(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisableDriverFallback(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisableDriverFallback(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFocusSettings=_uuidof(IFocusSettings);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIFocusSettings;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IHdrVideoControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.HdrVideoControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IHdrVideoControl[] = L"Windows.Media.Devices.IHdrVideoControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("55D8E2D0-30C0-43BF-9B9A-9799D70CED94"), exclusiveto, contract] */
                MIDL_INTERFACE("55D8E2D0-30C0-43BF-9B9A-9799D70CED94")
                IHdrVideoControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedModes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::HdrVideoMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Mode(
                        /* [in] */ABI::Windows::Media::Devices::HdrVideoMode value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHdrVideoControl=_uuidof(IHdrVideoControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IIsoSpeedControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.IsoSpeedControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IIsoSpeedControl[] = L"Windows.Media.Devices.IIsoSpeedControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("27B6C322-25AD-4F1B-AAAB-524AB376CA33"), exclusiveto, contract] */
                MIDL_INTERFACE("27B6C322-25AD-4F1B-AAAB-524AB376CA33")
                IIsoSpeedControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("SupportedPresets may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_SupportedPresets(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("Preset may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Preset(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::IsoSpeedPreset * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("SetPresetAsync may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE SetPresetAsync(
                        /* [in] */ABI::Windows::Media::Devices::IsoSpeedPreset preset,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IIsoSpeedControl=_uuidof(IIsoSpeedControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IIsoSpeedControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.IsoSpeedControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IIsoSpeedControl2[] = L"Windows.Media.Devices.IIsoSpeedControl2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("6F1578F2-6D77-4F8A-8C2F-6130B6395053"), exclusiveto, contract] */
                MIDL_INTERFACE("6F1578F2-6D77-4F8A-8C2F-6130B6395053")
                IIsoSpeedControl2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Min(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Max(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Step(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetValueAsync(
                        /* [in] */UINT32 isoSpeed,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Auto(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetAutoAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IIsoSpeedControl2=_uuidof(IIsoSpeedControl2);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IKeypadPressedEventArgs
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.KeypadPressedEventArgs
 *
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IKeypadPressedEventArgs[] = L"Windows.Media.Devices.IKeypadPressedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("D3A43900-B4FA-49CD-9442-89AF6568F601"), exclusiveto, contract] */
                MIDL_INTERFACE("D3A43900-B4FA-49CD-9442-89AF6568F601")
                IKeypadPressedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TelephonyKey(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::TelephonyKey * telephonyKey
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IKeypadPressedEventArgs=_uuidof(IKeypadPressedEventArgs);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.ILowLagPhotoControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.LowLagPhotoControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_ILowLagPhotoControl[] = L"Windows.Media.Devices.ILowLagPhotoControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("6D5C4DD0-FADF-415D-AEE6-3BAA529300C9"), exclusiveto, contract] */
                MIDL_INTERFACE("6D5C4DD0-FADF-415D-AEE6-3BAA529300C9")
                ILowLagPhotoControl : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetHighestConcurrentFrameRate(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProperties * captureProperties,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaRatio * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCurrentFrameRate(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaRatio * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ThumbnailEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ThumbnailEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ThumbnailFormat(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::MediaProperties::MediaThumbnailFormat * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ThumbnailFormat(
                        /* [in] */ABI::Windows::Media::MediaProperties::MediaThumbnailFormat value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredThumbnailSize(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredThumbnailSize(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HardwareAcceleratedThumbnailSupported(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILowLagPhotoControl=_uuidof(ILowLagPhotoControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.ILowLagPhotoSequenceControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.LowLagPhotoSequenceControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_ILowLagPhotoSequenceControl[] = L"Windows.Media.Devices.ILowLagPhotoSequenceControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("3DCF909D-6D16-409C-BAFE-B9A594C6FDE6"), exclusiveto, contract] */
                MIDL_INTERFACE("3DCF909D-6D16-409C-BAFE-B9A594C6FDE6")
                ILowLagPhotoSequenceControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxPastPhotos(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxPhotosPerSecond(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PastPhotoLimit(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PastPhotoLimit(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhotosPerSecondLimit(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PhotosPerSecondLimit(
                        /* [in] */FLOAT value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetHighestConcurrentFrameRate(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProperties * captureProperties,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaRatio * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCurrentFrameRate(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaRatio * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ThumbnailEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ThumbnailEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ThumbnailFormat(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::MediaProperties::MediaThumbnailFormat * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ThumbnailFormat(
                        /* [in] */ABI::Windows::Media::MediaProperties::MediaThumbnailFormat value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredThumbnailSize(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredThumbnailSize(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HardwareAcceleratedThumbnailSupported(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILowLagPhotoSequenceControl=_uuidof(ILowLagPhotoSequenceControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IMediaDeviceControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.MediaDeviceControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IMediaDeviceControl[] = L"Windows.Media.Devices.IMediaDeviceControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("EFA8DFA9-6F75-4863-BA0B-583F3036B4DE"), exclusiveto, contract] */
                MIDL_INTERFACE("EFA8DFA9-6F75-4863-BA0B-583F3036B4DE")
                IMediaDeviceControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Capabilities(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IMediaDeviceControlCapabilities * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryGetValue(
                        /* [out] */__RPC__out DOUBLE * value,
                        /* [retval, out] */__RPC__out boolean * succeeded
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TrySetValue(
                        /* [in] */DOUBLE value,
                        /* [retval, out] */__RPC__out boolean * succeeded
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryGetAuto(
                        /* [out] */__RPC__out boolean * value,
                        /* [retval, out] */__RPC__out boolean * succeeded
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TrySetAuto(
                        /* [in] */boolean value,
                        /* [retval, out] */__RPC__out boolean * succeeded
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaDeviceControl=_uuidof(IMediaDeviceControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IMediaDeviceControlCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.MediaDeviceControlCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IMediaDeviceControlCapabilities[] = L"Windows.Media.Devices.IMediaDeviceControlCapabilities";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("23005816-EB85-43E2-B92B-8240D5EE70EC"), exclusiveto, contract] */
                MIDL_INTERFACE("23005816-EB85-43E2-B92B-8240D5EE70EC")
                IMediaDeviceControlCapabilities : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Min(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Max(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Step(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Default(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoModeSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaDeviceControlCapabilities=_uuidof(IMediaDeviceControlCapabilities);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IMediaDeviceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IMediaDeviceController[] = L"Windows.Media.Devices.IMediaDeviceController";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("F6F8F5CE-209A-48FB-86FC-D44578F317E6"), contract] */
                MIDL_INTERFACE("F6F8F5CE-209A-48FB-86FC-D44578F317E6")
                IMediaDeviceController : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetAvailableMediaStreamProperties(
                        /* [in] */ABI::Windows::Media::Capture::MediaStreamType mediaStreamType,
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetMediaStreamProperties(
                        /* [in] */ABI::Windows::Media::Capture::MediaStreamType mediaStreamType,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProperties * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetMediaStreamPropertiesAsync(
                        /* [in] */ABI::Windows::Media::Capture::MediaStreamType mediaStreamType,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProperties * mediaEncodingProperties,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaDeviceController=_uuidof(IMediaDeviceController);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IMediaDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.MediaDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IMediaDeviceStatics[] = L"Windows.Media.Devices.IMediaDeviceStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("AA2D9A40-909F-4BBA-BF8B-0C0D296F14F0"), exclusiveto, contract] */
                MIDL_INTERFACE("AA2D9A40-909F-4BBA-BF8B-0C0D296F14F0")
                IMediaDeviceStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetAudioCaptureSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAudioRenderSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetVideoCaptureSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDefaultAudioCaptureId(
                        /* [in] */ABI::Windows::Media::Devices::AudioDeviceRole role,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceId
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDefaultAudioRenderId(
                        /* [in] */ABI::Windows::Media::Devices::AudioDeviceRole role,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceId
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DefaultAudioCaptureDeviceChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DefaultAudioCaptureDeviceChanged(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DefaultAudioRenderDeviceChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DefaultAudioRenderDeviceChanged(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaDeviceStatics=_uuidof(IMediaDeviceStatics);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IModuleCommandResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.ModuleCommandResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IModuleCommandResult[] = L"Windows.Media.Devices.IModuleCommandResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("520D1EB4-1374-4C7D-B1E4-39DCDF3EAE4E"), exclusiveto, contract] */
                MIDL_INTERFACE("520D1EB4-1374-4C7D-B1E4-39DCDF3EAE4E")
                IModuleCommandResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::SendCommandStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Result(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IModuleCommandResult=_uuidof(IModuleCommandResult);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Devices.IOpticalImageStabilizationControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.OpticalImageStabilizationControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IOpticalImageStabilizationControl[] = L"Windows.Media.Devices.IOpticalImageStabilizationControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("BFAD9C1D-00BC-423B-8EB2-A0178CA94247"), exclusiveto, contract] */
                MIDL_INTERFACE("BFAD9C1D-00BC-423B-8EB2-A0178CA94247")
                IOpticalImageStabilizationControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedModes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::OpticalImageStabilizationMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Mode(
                        /* [in] */ABI::Windows::Media::Devices::OpticalImageStabilizationMode value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IOpticalImageStabilizationControl=_uuidof(IOpticalImageStabilizationControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IPhotoConfirmationControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.PhotoConfirmationControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IPhotoConfirmationControl[] = L"Windows.Media.Devices.IPhotoConfirmationControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("C8F3F363-FF5E-4582-A9A8-0550F85A4A76"), exclusiveto, contract] */
                MIDL_INTERFACE("C8F3F363-FF5E-4582-A9A8-0550F85A4A76")
                IPhotoConfirmationControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                        /* [retval, out] */__RPC__out boolean * pbSupported
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Enabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Enabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PixelFormat(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::MediaProperties::MediaPixelFormat * format
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PixelFormat(
                        /* [in] */ABI::Windows::Media::MediaProperties::MediaPixelFormat format
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhotoConfirmationControl=_uuidof(IPhotoConfirmationControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IRedialRequestedEventArgs
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.RedialRequestedEventArgs
 *
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IRedialRequestedEventArgs[] = L"Windows.Media.Devices.IRedialRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("7EB55209-76AB-4C31-B40E-4B58379D580C"), exclusiveto, contract] */
                MIDL_INTERFACE("7EB55209-76AB-4C31-B40E-4B58379D580C")
                IRedialRequestedEventArgs : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Handled(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRedialRequestedEventArgs=_uuidof(IRedialRequestedEventArgs);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IRegionOfInterest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.RegionOfInterest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IRegionOfInterest[] = L"Windows.Media.Devices.IRegionOfInterest";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("E5ECC834-CE66-4E05-A78F-CF391A5EC2D1"), exclusiveto, contract] */
                MIDL_INTERFACE("E5ECC834-CE66-4E05-A78F-CF391A5EC2D1")
                IRegionOfInterest : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoFocusEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AutoFocusEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoWhiteBalanceEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AutoWhiteBalanceEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoExposureEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AutoExposureEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bounds(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Bounds(
                        /* [in] */ABI::Windows::Foundation::Rect value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRegionOfInterest=_uuidof(IRegionOfInterest);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IRegionOfInterest2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.RegionOfInterest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IRegionOfInterest2[] = L"Windows.Media.Devices.IRegionOfInterest2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("19FE2A91-73AA-4D51-8A9D-56CCF7DB7F54"), exclusiveto, contract] */
                MIDL_INTERFACE("19FE2A91-73AA-4D51-8A9D-56CCF7DB7F54")
                IRegionOfInterest2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::RegionOfInterestType * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Type(
                        /* [in] */ABI::Windows::Media::Devices::RegionOfInterestType value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BoundsNormalized(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BoundsNormalized(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Weight(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Weight(
                        /* [in] */UINT32 value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRegionOfInterest2=_uuidof(IRegionOfInterest2);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IRegionsOfInterestControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.RegionsOfInterestControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IRegionsOfInterestControl[] = L"Windows.Media.Devices.IRegionsOfInterestControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("C323F527-AB0B-4558-8B5B-DF5693DB0378"), exclusiveto, contract] */
                MIDL_INTERFACE("C323F527-AB0B-4558-8B5B-DF5693DB0378")
                IRegionsOfInterestControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxRegions(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetRegionsAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * regions,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetRegionsWithLockAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * regions,
                        /* [in] */boolean lockValues,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ClearRegionsAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoFocusSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoWhiteBalanceSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoExposureSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRegionsOfInterestControl=_uuidof(IRegionsOfInterestControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.ISceneModeControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.SceneModeControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_ISceneModeControl[] = L"Windows.Media.Devices.ISceneModeControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("D48E5AF7-8D59-4854-8C62-12C70BA89B7C"), exclusiveto, contract] */
                MIDL_INTERFACE("D48E5AF7-8D59-4854-8C62-12C70BA89B7C")
                ISceneModeControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedModes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::CaptureSceneMode * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetValueAsync(
                        /* [in] */ABI::Windows::Media::Devices::CaptureSceneMode sceneMode,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISceneModeControl=_uuidof(ISceneModeControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CISceneModeControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.ITorchControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.TorchControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CITorchControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CITorchControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_ITorchControl[] = L"Windows.Media.Devices.ITorchControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("A6053665-8250-416C-919A-724296AFA306"), exclusiveto, contract] */
                MIDL_INTERFACE("A6053665-8250-416C-919A-724296AFA306")
                ITorchControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PowerSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Enabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Enabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PowerPercent(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PowerPercent(
                        /* [in] */FLOAT value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITorchControl=_uuidof(ITorchControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CITorchControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CITorchControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IVideoDeviceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.VideoDeviceController
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Devices.IMediaDeviceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IVideoDeviceController[] = L"Windows.Media.Devices.IVideoDeviceController";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("99555575-2E2E-40B8-B6C7-F82D10013210"), exclusiveto, contract] */
                MIDL_INTERFACE("99555575-2E2E-40B8-B6C7-F82D10013210")
                IVideoDeviceController : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Brightness(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IMediaDeviceControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contrast(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IMediaDeviceControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Hue(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IMediaDeviceControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WhiteBalance(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IMediaDeviceControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BacklightCompensation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IMediaDeviceControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pan(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IMediaDeviceControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Tilt(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IMediaDeviceControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Zoom(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IMediaDeviceControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Roll(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IMediaDeviceControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Exposure(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IMediaDeviceControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Focus(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IMediaDeviceControl * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TrySetPowerlineFrequency(
                        /* [in] */ABI::Windows::Media::Capture::PowerlineFrequency value,
                        /* [retval, out] */__RPC__out boolean * succeeded
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryGetPowerlineFrequency(
                        /* [out] */__RPC__out ABI::Windows::Media::Capture::PowerlineFrequency * value,
                        /* [retval, out] */__RPC__out boolean * succeeded
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVideoDeviceController=_uuidof(IVideoDeviceController);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IVideoDeviceControllerGetDevicePropertyResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.VideoDeviceControllerGetDevicePropertyResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IVideoDeviceControllerGetDevicePropertyResult[] = L"Windows.Media.Devices.IVideoDeviceControllerGetDevicePropertyResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("C5D88395-6ED5-4790-8B5D-0EF13935D0F8"), exclusiveto, contract] */
                MIDL_INTERFACE("C5D88395-6ED5-4790-8B5D-0EF13935D0F8")
                IVideoDeviceControllerGetDevicePropertyResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVideoDeviceControllerGetDevicePropertyResult=_uuidof(IVideoDeviceControllerGetDevicePropertyResult);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Devices.IWhiteBalanceControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.WhiteBalanceControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IWhiteBalanceControl[] = L"Windows.Media.Devices.IWhiteBalanceControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("781F047E-7162-49C8-A8F9-9481C565363E"), exclusiveto, contract] */
                MIDL_INTERFACE("781F047E-7162-49C8-A8F9-9481C565363E")
                IWhiteBalanceControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Preset(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::ColorTemperaturePreset * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPresetAsync(
                        /* [in] */ABI::Windows::Media::Devices::ColorTemperaturePreset preset,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Min(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Max(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Step(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetValueAsync(
                        /* [in] */UINT32 temperature,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWhiteBalanceControl=_uuidof(IWhiteBalanceControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IZoomControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.ZoomControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIZoomControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIZoomControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IZoomControl[] = L"Windows.Media.Devices.IZoomControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("3A1E0B12-32DA-4C17-BFD7-8D0C73C8F5A5"), exclusiveto, contract] */
                MIDL_INTERFACE("3A1E0B12-32DA-4C17-BFD7-8D0C73C8F5A5")
                IZoomControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Min(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Max(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Step(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                        /* [in] */FLOAT value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IZoomControl=_uuidof(IZoomControl);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIZoomControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIZoomControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IZoomControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.ZoomControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IZoomControl2[] = L"Windows.Media.Devices.IZoomControl2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("69843DB0-2E99-4641-8529-184F319D1671"), exclusiveto, contract] */
                MIDL_INTERFACE("69843DB0-2E99-4641-8529-184F319D1671")
                IZoomControl2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedModes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::ZoomTransitionMode * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Configure(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::IZoomSettings * settings
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IZoomControl2=_uuidof(IZoomControl2);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIZoomControl2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IZoomSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.ZoomSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IZoomSettings[] = L"Windows.Media.Devices.IZoomSettings";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                /* [object, uuid("6AD66B24-14B4-4BFD-B18F-88FE24463B52"), exclusiveto, contract] */
                MIDL_INTERFACE("6AD66B24-14B4-4BFD-B18F-88FE24463B52")
                IZoomSettings : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::ZoomTransitionMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Mode(
                        /* [in] */ABI::Windows::Media::Devices::ZoomTransitionMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                        /* [in] */FLOAT value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IZoomSettings=_uuidof(IZoomSettings);
                
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIZoomSettings;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.AdvancedPhotoCaptureSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IAdvancedPhotoCaptureSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_AdvancedPhotoCaptureSettings_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_AdvancedPhotoCaptureSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_AdvancedPhotoCaptureSettings[] = L"Windows.Media.Devices.AdvancedPhotoCaptureSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.AdvancedPhotoControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IAdvancedPhotoControl ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_AdvancedPhotoControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_AdvancedPhotoControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_AdvancedPhotoControl[] = L"Windows.Media.Devices.AdvancedPhotoControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.AudioDeviceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IAudioDeviceController ** Default Interface **
 *    Windows.Media.Devices.IMediaDeviceController
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_AudioDeviceController_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_AudioDeviceController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_AudioDeviceController[] = L"Windows.Media.Devices.AudioDeviceController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.AudioDeviceModule
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IAudioDeviceModule ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Devices_AudioDeviceModule_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_AudioDeviceModule_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_AudioDeviceModule[] = L"Windows.Media.Devices.AudioDeviceModule";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Devices.AudioDeviceModuleNotificationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IAudioDeviceModuleNotificationEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Devices_AudioDeviceModuleNotificationEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_AudioDeviceModuleNotificationEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_AudioDeviceModuleNotificationEventArgs[] = L"Windows.Media.Devices.AudioDeviceModuleNotificationEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Devices.AudioDeviceModulesManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Devices.IAudioDeviceModulesManagerFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IAudioDeviceModulesManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Devices_AudioDeviceModulesManager_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_AudioDeviceModulesManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_AudioDeviceModulesManager[] = L"Windows.Media.Devices.AudioDeviceModulesManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Devices.CallControl
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Devices.ICallControlStatics interface starting with version 1.0 of the Windows.Media.Devices.CallControlContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.ICallControl ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_CallControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_CallControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_CallControl[] = L"Windows.Media.Devices.CallControl";
#endif
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.DefaultAudioCaptureDeviceChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IDefaultAudioDeviceChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_DefaultAudioCaptureDeviceChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_DefaultAudioCaptureDeviceChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_DefaultAudioCaptureDeviceChangedEventArgs[] = L"Windows.Media.Devices.DefaultAudioCaptureDeviceChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.DefaultAudioRenderDeviceChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IDefaultAudioDeviceChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_DefaultAudioRenderDeviceChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_DefaultAudioRenderDeviceChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_DefaultAudioRenderDeviceChangedEventArgs[] = L"Windows.Media.Devices.DefaultAudioRenderDeviceChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.DialRequestedEventArgs
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IDialRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_DialRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_DialRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_DialRequestedEventArgs[] = L"Windows.Media.Devices.DialRequestedEventArgs";
#endif
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.ExposureCompensationControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IExposureCompensationControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_ExposureCompensationControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_ExposureCompensationControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_ExposureCompensationControl[] = L"Windows.Media.Devices.ExposureCompensationControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.ExposureControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IExposureControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_ExposureControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_ExposureControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_ExposureControl[] = L"Windows.Media.Devices.ExposureControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.ExposurePriorityVideoControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IExposurePriorityVideoControl ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_ExposurePriorityVideoControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_ExposurePriorityVideoControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_ExposurePriorityVideoControl[] = L"Windows.Media.Devices.ExposurePriorityVideoControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.FlashControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IFlashControl ** Default Interface **
 *    Windows.Media.Devices.IFlashControl2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_FlashControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_FlashControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_FlashControl[] = L"Windows.Media.Devices.FlashControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.FocusControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IFocusControl ** Default Interface **
 *    Windows.Media.Devices.IFocusControl2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_FocusControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_FocusControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_FocusControl[] = L"Windows.Media.Devices.FocusControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.FocusSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IFocusSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_FocusSettings_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_FocusSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_FocusSettings[] = L"Windows.Media.Devices.FocusSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.HdrVideoControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IHdrVideoControl ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_HdrVideoControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_HdrVideoControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_HdrVideoControl[] = L"Windows.Media.Devices.HdrVideoControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.IsoSpeedControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IIsoSpeedControl ** Default Interface **
 *    Windows.Media.Devices.IIsoSpeedControl2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_IsoSpeedControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_IsoSpeedControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_IsoSpeedControl[] = L"Windows.Media.Devices.IsoSpeedControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.KeypadPressedEventArgs
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IKeypadPressedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_KeypadPressedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_KeypadPressedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_KeypadPressedEventArgs[] = L"Windows.Media.Devices.KeypadPressedEventArgs";
#endif
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.LowLagPhotoControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.ILowLagPhotoControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_LowLagPhotoControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_LowLagPhotoControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_LowLagPhotoControl[] = L"Windows.Media.Devices.LowLagPhotoControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.LowLagPhotoSequenceControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.ILowLagPhotoSequenceControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_LowLagPhotoSequenceControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_LowLagPhotoSequenceControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_LowLagPhotoSequenceControl[] = L"Windows.Media.Devices.LowLagPhotoSequenceControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.MediaDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Devices.IMediaDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_Devices_MediaDevice_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_MediaDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_MediaDevice[] = L"Windows.Media.Devices.MediaDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.MediaDeviceControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IMediaDeviceControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_MediaDeviceControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_MediaDeviceControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_MediaDeviceControl[] = L"Windows.Media.Devices.MediaDeviceControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.MediaDeviceControlCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IMediaDeviceControlCapabilities ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_MediaDeviceControlCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_MediaDeviceControlCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_MediaDeviceControlCapabilities[] = L"Windows.Media.Devices.MediaDeviceControlCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.ModuleCommandResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IModuleCommandResult ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Devices_ModuleCommandResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_ModuleCommandResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_ModuleCommandResult[] = L"Windows.Media.Devices.ModuleCommandResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Devices.OpticalImageStabilizationControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IOpticalImageStabilizationControl ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_OpticalImageStabilizationControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_OpticalImageStabilizationControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_OpticalImageStabilizationControl[] = L"Windows.Media.Devices.OpticalImageStabilizationControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.PhotoConfirmationControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IPhotoConfirmationControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_PhotoConfirmationControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_PhotoConfirmationControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_PhotoConfirmationControl[] = L"Windows.Media.Devices.PhotoConfirmationControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.RedialRequestedEventArgs
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IRedialRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_RedialRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_RedialRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_RedialRequestedEventArgs[] = L"Windows.Media.Devices.RedialRequestedEventArgs";
#endif
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.RegionOfInterest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IRegionOfInterest ** Default Interface **
 *    Windows.Media.Devices.IRegionOfInterest2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_RegionOfInterest_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_RegionOfInterest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_RegionOfInterest[] = L"Windows.Media.Devices.RegionOfInterest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.RegionsOfInterestControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IRegionsOfInterestControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_RegionsOfInterestControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_RegionsOfInterestControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_RegionsOfInterestControl[] = L"Windows.Media.Devices.RegionsOfInterestControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.SceneModeControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.ISceneModeControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_SceneModeControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_SceneModeControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_SceneModeControl[] = L"Windows.Media.Devices.SceneModeControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.TorchControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.ITorchControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_TorchControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_TorchControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_TorchControl[] = L"Windows.Media.Devices.TorchControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.VideoDeviceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IVideoDeviceController ** Default Interface **
 *    Windows.Media.Devices.IMediaDeviceController
 *    Windows.Media.Devices.IAdvancedVideoCaptureDeviceController
 *    Windows.Media.Devices.IAdvancedVideoCaptureDeviceController2
 *    Windows.Media.Devices.IAdvancedVideoCaptureDeviceController3
 *    Windows.Media.Devices.IAdvancedVideoCaptureDeviceController4
 *    Windows.Media.Devices.IAdvancedVideoCaptureDeviceController5
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_VideoDeviceController_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_VideoDeviceController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_VideoDeviceController[] = L"Windows.Media.Devices.VideoDeviceController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.VideoDeviceControllerGetDevicePropertyResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IVideoDeviceControllerGetDevicePropertyResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Devices_VideoDeviceControllerGetDevicePropertyResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_VideoDeviceControllerGetDevicePropertyResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_VideoDeviceControllerGetDevicePropertyResult[] = L"Windows.Media.Devices.VideoDeviceControllerGetDevicePropertyResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Devices.WhiteBalanceControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IWhiteBalanceControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_WhiteBalanceControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_WhiteBalanceControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_WhiteBalanceControl[] = L"Windows.Media.Devices.WhiteBalanceControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.ZoomControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IZoomControl ** Default Interface **
 *    Windows.Media.Devices.IZoomControl2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_ZoomControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_ZoomControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_ZoomControl[] = L"Windows.Media.Devices.ZoomControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.ZoomSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IZoomSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_ZoomSettings_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_ZoomSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_ZoomSettings[] = L"Windows.Media.Devices.ZoomSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CICallControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CICallControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CICallControl __x_ABI_CWindows_CMedia_CDevices_CICallControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CICallControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIExposureControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIExposureControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIExposureControl __x_ABI_CWindows_CMedia_CDevices_CIExposureControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIExposureControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIFlashControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIFlashControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIFlashControl __x_ABI_CWindows_CMedia_CDevices_CIFlashControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIFlashControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIFocusControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIFocusControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIFocusControl __x_ABI_CWindows_CMedia_CDevices_CIFocusControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIFocusControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CITorchControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CITorchControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CITorchControl __x_ABI_CWindows_CMedia_CDevices_CITorchControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CITorchControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIZoomControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIZoomControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIZoomControl __x_ABI_CWindows_CMedia_CDevices_CIZoomControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIZoomControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
enum __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode;
#if !defined(____FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode;

typedef struct __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoModeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoModeVtbl;

interface __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoModeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode;

typedef  struct __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoModeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoModeVtbl;

interface __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoModeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule;

typedef struct __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModuleVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModuleVtbl;

interface __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModuleVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule;

typedef  struct __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModuleVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModuleVtbl;

interface __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModuleVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

enum __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange;
#if !defined(____FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange;

typedef struct __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRangeVtbl;

interface __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRangeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange;

typedef  struct __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRangeVtbl;

interface __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRangeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange_INTERFACE_DEFINED__


enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode;
#if !defined(____FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode;

typedef struct __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl;

interface __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode;

typedef  struct __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl;

interface __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode_INTERFACE_DEFINED__


enum __x_ABI_CWindows_CMedia_CDevices_CFocusMode;
#if !defined(____FIIterator_1_Windows__CMedia__CDevices__CFocusMode_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CDevices__CFocusMode_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CDevices__CFocusMode __FIIterator_1_Windows__CMedia__CDevices__CFocusMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CFocusMode;

typedef struct __FIIterator_1_Windows__CMedia__CDevices__CFocusModeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CFocusMode *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CFocusMode *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CFocusModeVtbl;

interface __FIIterator_1_Windows__CMedia__CDevices__CFocusMode
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CFocusModeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CDevices__CFocusMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CFocusMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CFocusMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CFocusMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CFocusMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CFocusMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CFocusMode_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CFocusMode_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CFocusMode_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CFocusMode_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CDevices__CFocusMode_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CMedia__CDevices__CFocusMode_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CDevices__CFocusMode_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CDevices__CFocusMode __FIIterable_1_Windows__CMedia__CDevices__CFocusMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CFocusMode;

typedef  struct __FIIterable_1_Windows__CMedia__CDevices__CFocusModeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusMode * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusMode * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusMode * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusMode * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusMode * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusMode * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CFocusMode **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CFocusModeVtbl;

interface __FIIterable_1_Windows__CMedia__CDevices__CFocusMode
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CFocusModeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CDevices__CFocusMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CFocusMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CFocusMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CFocusMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CFocusMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CFocusMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CFocusMode_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CDevices__CFocusMode_INTERFACE_DEFINED__


enum __x_ABI_CWindows_CMedia_CDevices_CFocusPreset;
#if !defined(____FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CFocusPreset;

typedef struct __FIIterator_1_Windows__CMedia__CDevices__CFocusPresetVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CFocusPreset *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CFocusPreset *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CFocusPresetVtbl;

interface __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CFocusPresetVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CDevices__CFocusPreset_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CMedia__CDevices__CFocusPreset_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CDevices__CFocusPreset_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CFocusPreset;

typedef  struct __FIIterable_1_Windows__CMedia__CDevices__CFocusPresetVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CFocusPresetVtbl;

interface __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CFocusPresetVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CDevices__CFocusPreset_INTERFACE_DEFINED__


enum __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode;
#if !defined(____FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode;

typedef struct __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoModeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoModeVtbl;

interface __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoModeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode;

typedef  struct __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoModeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoModeVtbl;

interface __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoModeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode_INTERFACE_DEFINED__


enum __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset;
#if !defined(____FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset;

typedef struct __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPresetVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPresetVtbl;

interface __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPresetVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset;

typedef  struct __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPresetVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPresetVtbl;

interface __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPresetVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset_INTERFACE_DEFINED__


enum __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance;
#if !defined(____FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance;

typedef struct __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl;

interface __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance;

typedef  struct __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl;

interface __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance_INTERFACE_DEFINED__


enum __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode;
#if !defined(____FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode;

typedef struct __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationModeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationModeVtbl;

interface __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationModeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode;

typedef  struct __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationModeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationModeVtbl;

interface __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationModeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest;

typedef struct __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterestVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterestVtbl;

interface __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterestVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest;

typedef  struct __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterestVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterestVtbl;

interface __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterestVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode;
#if !defined(____FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode;

typedef struct __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionModeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionModeVtbl;

interface __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionModeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode;

typedef  struct __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionModeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionModeVtbl;

interface __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionModeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode;

typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoModeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
            /* [in] */ enum __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoModeVtbl;

interface __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoModeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule;

typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModuleVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModuleVtbl;

interface __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModuleVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if !defined(____FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange;

typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
            /* [in] */ enum __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRangeVtbl;

interface __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRangeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode;

typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
            /* [in] */ enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl;

interface __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CFocusMode;

typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CFocusModeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CFocusMode *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This,
            /* [in] */ enum __x_ABI_CWindows_CMedia_CDevices_CFocusMode item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CFocusMode *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CFocusModeVtbl;

interface __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CFocusModeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CDevices__CFocusMode_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset;

typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CFocusPresetVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CFocusPreset *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This,
            /* [in] */ enum __x_ABI_CWindows_CMedia_CDevices_CFocusPreset item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CFocusPreset *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CFocusPresetVtbl;

interface __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CFocusPresetVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode;

typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoModeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
            /* [in] */ enum __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoModeVtbl;

interface __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoModeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset;

typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPresetVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
            /* [in] */ enum __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPresetVtbl;

interface __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPresetVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance;

typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
            /* [in] */ enum __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl;

interface __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode;

typedef struct __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationModeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
            /* [in] */ enum __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationModeVtbl;

interface __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationModeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode;

typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionModeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
            /* [in] */ enum __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionModeVtbl;

interface __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionModeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResultVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if !defined(____FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode;

typedef struct __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode *value);
    END_INTERFACE
} __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl;

interface __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode
{
    CONST_VTBL struct __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode_INTERFACE_DEFINED__



#if !defined(____FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance;

typedef struct __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance *value);
    END_INTERFACE
} __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl;

interface __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance
{
    CONST_VTBL struct __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance_INTERFACE_DEFINED__


enum __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureFocusState;
#if !defined(____FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState;

typedef struct __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureFocusState *value);
    END_INTERFACE
} __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusStateVtbl;

interface __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState
{
    CONST_VTBL struct __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusStateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs;

typedef struct __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs * This,/* [in] */ __RPC__in_opt IInspectable * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgsVtbl;

interface __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs;

typedef struct __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs * This,/* [in] */ __RPC__in_opt IInspectable * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgsVtbl;

interface __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

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


#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;

typedef struct __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl;

interface __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;

typedef  struct __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl;

interface __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;

typedef struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl;

interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;





typedef enum __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType;


typedef enum __x_ABI_CWindows_CMedia_CCapture_CPowerlineFrequency __x_ABI_CWindows_CMedia_CCapture_CPowerlineFrequency;




#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_FWD_DEFINED__








typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaPixelFormat __x_ABI_CWindows_CMedia_CMediaProperties_CMediaPixelFormat;

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaThumbnailFormat __x_ABI_CWindows_CMedia_CMediaProperties_CMediaThumbnailFormat;




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CAudioDeviceRole __x_ABI_CWindows_CMedia_CDevices_CAudioDeviceRole;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CCameraStreamState __x_ABI_CWindows_CMedia_CDevices_CCameraStreamState;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CCaptureUse __x_ABI_CWindows_CMedia_CDevices_CCaptureUse;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CColorTemperaturePreset __x_ABI_CWindows_CMedia_CDevices_CColorTemperaturePreset;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CFocusMode __x_ABI_CWindows_CMedia_CDevices_CFocusMode;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CFocusPreset __x_ABI_CWindows_CMedia_CDevices_CFocusPreset;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureFocusState __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureFocusState;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureOptimization __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureOptimization;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CMediaCapturePauseBehavior __x_ABI_CWindows_CMedia_CDevices_CMediaCapturePauseBehavior;


typedef enum __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CRegionOfInterestType __x_ABI_CWindows_CMedia_CDevices_CRegionOfInterestType;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CSendCommandStatus __x_ABI_CWindows_CMedia_CDevices_CSendCommandStatus;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CTelephonyKey __x_ABI_CWindows_CMedia_CDevices_CTelephonyKey;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CVideoDeviceControllerGetDevicePropertyStatus __x_ABI_CWindows_CMedia_CDevices_CVideoDeviceControllerGetDevicePropertyStatus;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CVideoDeviceControllerSetDevicePropertyStatus __x_ABI_CWindows_CMedia_CDevices_CVideoDeviceControllerSetDevicePropertyStatus;


typedef enum __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode;




































































































/*
 *
 * Struct Windows.Media.Devices.AdvancedPhotoMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode
{
    AdvancedPhotoMode_Auto = 0,
    AdvancedPhotoMode_Standard = 1,
    AdvancedPhotoMode_Hdr = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AdvancedPhotoMode_LowLight = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.AudioDeviceRole
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CAudioDeviceRole
{
    AudioDeviceRole_Default = 0,
    AudioDeviceRole_Communications = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.AutoFocusRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange
{
    AutoFocusRange_FullRange = 0,
    AutoFocusRange_Macro = 1,
    AutoFocusRange_Normal = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.CameraStreamState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CCameraStreamState
{
    CameraStreamState_NotStreaming = 0,
    CameraStreamState_Streaming = 1,
    CameraStreamState_BlockedForPrivacy = 2,
    CameraStreamState_Shutdown = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.CaptureSceneMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode
{
    CaptureSceneMode_Auto = 0,
    CaptureSceneMode_Manual = 1,
    CaptureSceneMode_Macro = 2,
    CaptureSceneMode_Portrait = 3,
    CaptureSceneMode_Sport = 4,
    CaptureSceneMode_Snow = 5,
    CaptureSceneMode_Night = 6,
    CaptureSceneMode_Beach = 7,
    CaptureSceneMode_Sunset = 8,
    CaptureSceneMode_Candlelight = 9,
    CaptureSceneMode_Landscape = 10,
    CaptureSceneMode_NightPortrait = 11,
    CaptureSceneMode_Backlit = 12,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.CaptureUse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CCaptureUse
{
    CaptureUse_None = 0,
    CaptureUse_Photo = 1,
    CaptureUse_Video = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.ColorTemperaturePreset
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CColorTemperaturePreset
{
    ColorTemperaturePreset_Auto = 0,
    ColorTemperaturePreset_Manual = 1,
    ColorTemperaturePreset_Cloudy = 2,
    ColorTemperaturePreset_Daylight = 3,
    ColorTemperaturePreset_Flash = 4,
    ColorTemperaturePreset_Fluorescent = 5,
    ColorTemperaturePreset_Tungsten = 6,
    ColorTemperaturePreset_Candlelight = 7,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.FocusMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CFocusMode
{
    FocusMode_Auto = 0,
    FocusMode_Single = 1,
    FocusMode_Continuous = 2,
    FocusMode_Manual = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.FocusPreset
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CFocusPreset
{
    FocusPreset_Auto = 0,
    FocusPreset_Manual = 1,
    FocusPreset_AutoMacro = 2,
    FocusPreset_AutoNormal = 3,
    FocusPreset_AutoInfinity = 4,
    FocusPreset_AutoHyperfocal = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.HdrVideoMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode
{
    HdrVideoMode_Off = 0,
    HdrVideoMode_On = 1,
    HdrVideoMode_Auto = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.IsoSpeedPreset
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, deprecated, contract] */
enum 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("IsoSpeedPreset may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
__x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset
{
    IsoSpeedPreset_Auto = 0,
    IsoSpeedPreset_Iso50 = 1,
    IsoSpeedPreset_Iso80 = 2,
    IsoSpeedPreset_Iso100 = 3,
    IsoSpeedPreset_Iso200 = 4,
    IsoSpeedPreset_Iso400 = 5,
    IsoSpeedPreset_Iso800 = 6,
    IsoSpeedPreset_Iso1600 = 7,
    IsoSpeedPreset_Iso3200 = 8,
    IsoSpeedPreset_Iso6400 = 9,
    IsoSpeedPreset_Iso12800 = 10,
    IsoSpeedPreset_Iso25600 = 11,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.ManualFocusDistance
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance
{
    ManualFocusDistance_Infinity = 0,
    ManualFocusDistance_Hyperfocal = 1,
    ManualFocusDistance_Nearest = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.MediaCaptureFocusState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureFocusState
{
    MediaCaptureFocusState_Uninitialized = 0,
    MediaCaptureFocusState_Lost = 1,
    MediaCaptureFocusState_Searching = 2,
    MediaCaptureFocusState_Focused = 3,
    MediaCaptureFocusState_Failed = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.MediaCaptureOptimization
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureOptimization
{
    MediaCaptureOptimization_Default = 0,
    MediaCaptureOptimization_Quality = 1,
    MediaCaptureOptimization_Latency = 2,
    MediaCaptureOptimization_Power = 3,
    MediaCaptureOptimization_LatencyThenQuality = 4,
    MediaCaptureOptimization_LatencyThenPower = 5,
    MediaCaptureOptimization_PowerAndQuality = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.MediaCapturePauseBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CMediaCapturePauseBehavior
{
    MediaCapturePauseBehavior_RetainHardwareResources = 0,
    MediaCapturePauseBehavior_ReleaseHardwareResources = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.OpticalImageStabilizationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode
{
    OpticalImageStabilizationMode_Off = 0,
    OpticalImageStabilizationMode_On = 1,
    OpticalImageStabilizationMode_Auto = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.RegionOfInterestType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CRegionOfInterestType
{
    RegionOfInterestType_Unknown = 0,
    RegionOfInterestType_Face = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.SendCommandStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CSendCommandStatus
{
    SendCommandStatus_Success = 0,
    SendCommandStatus_DeviceNotAvailable = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Media.Devices.TelephonyKey
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 */

#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CTelephonyKey
{
    TelephonyKey_D0 = 0,
    TelephonyKey_D1 = 1,
    TelephonyKey_D2 = 2,
    TelephonyKey_D3 = 3,
    TelephonyKey_D4 = 4,
    TelephonyKey_D5 = 5,
    TelephonyKey_D6 = 6,
    TelephonyKey_D7 = 7,
    TelephonyKey_D8 = 8,
    TelephonyKey_D9 = 9,
    TelephonyKey_Star = 10,
    TelephonyKey_Pound = 11,
    TelephonyKey_A = 12,
    TelephonyKey_B = 13,
    TelephonyKey_C = 14,
    TelephonyKey_D = 15,
};
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Devices.VideoDeviceControllerGetDevicePropertyStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CVideoDeviceControllerGetDevicePropertyStatus
{
    VideoDeviceControllerGetDevicePropertyStatus_Success = 0,
    VideoDeviceControllerGetDevicePropertyStatus_UnknownFailure = 1,
    VideoDeviceControllerGetDevicePropertyStatus_BufferTooSmall = 2,
    VideoDeviceControllerGetDevicePropertyStatus_NotSupported = 3,
    VideoDeviceControllerGetDevicePropertyStatus_DeviceNotAvailable = 4,
    VideoDeviceControllerGetDevicePropertyStatus_MaxPropertyValueSizeTooSmall = 5,
    VideoDeviceControllerGetDevicePropertyStatus_MaxPropertyValueSizeRequired = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Media.Devices.VideoDeviceControllerSetDevicePropertyStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CVideoDeviceControllerSetDevicePropertyStatus
{
    VideoDeviceControllerSetDevicePropertyStatus_Success = 0,
    VideoDeviceControllerSetDevicePropertyStatus_UnknownFailure = 1,
    VideoDeviceControllerSetDevicePropertyStatus_NotSupported = 2,
    VideoDeviceControllerSetDevicePropertyStatus_InvalidValue = 3,
    VideoDeviceControllerSetDevicePropertyStatus_DeviceNotAvailable = 4,
    VideoDeviceControllerSetDevicePropertyStatus_NotInControl = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Media.Devices.ZoomTransitionMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode
{
    ZoomTransitionMode_Auto = 0,
    ZoomTransitionMode_Direct = 1,
    ZoomTransitionMode_Smooth = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Media.Devices.CallControlEventHandler
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler_INTERFACE_DEFINED__
/* [object, uuid("596F759F-50DF-4454-BC63-4D3D01B61958"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CICallControl * sender
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandlerVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler_Invoke(This,sender) \
    ( (This)->lpVtbl->Invoke(This,sender) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Media.Devices.DialRequestedEventHandler
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("5ABBFFDB-C21F-4BC4-891B-257E28C1B1A4"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CICallControl * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandlerVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Media.Devices.KeypadPressedEventHandler
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("E637A454-C527-422C-8926-C9AF83B559A0"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CICallControl * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandlerVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Media.Devices.RedialRequestedEventHandler
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("BAF257D1-4EBD-4B84-9F47-6EC43D75D8B1"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CICallControl * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandlerVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IAdvancedPhotoCaptureSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.AdvancedPhotoCaptureSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedPhotoCaptureSettings[] = L"Windows.Media.Devices.IAdvancedPhotoCaptureSettings";
/* [object, uuid("08F3863A-0018-445B-93D2-646D1C5ED05C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings * This,
        /* [in] */__x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettingsVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_put_Mode(This,value) \
    ( (This)->lpVtbl->put_Mode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IAdvancedPhotoControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.AdvancedPhotoControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedPhotoControl[] = L"Windows.Media.Devices.IAdvancedPhotoControl";
/* [object, uuid("C5B15486-9001-4682-9309-68EAE0080EEC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedModes )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *Configure )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings * settings
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_get_SupportedModes(This,value) \
    ( (This)->lpVtbl->get_SupportedModes(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_Configure(This,settings) \
    ( (This)->lpVtbl->Configure(This,settings) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IAdvancedVideoCaptureDeviceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.VideoDeviceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController[] = L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController";
/* [object, uuid("DE6FF4D3-2B96-4583-80AB-B5B01DC6A8D7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetDeviceProperty )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController * This,
        /* [in] */__RPC__in HSTRING propertyId,
        /* [in] */__RPC__in_opt IInspectable * propertyValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceProperty )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController * This,
        /* [in] */__RPC__in HSTRING propertyId,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * propertyValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceControllerVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_SetDeviceProperty(This,propertyId,propertyValue) \
    ( (This)->lpVtbl->SetDeviceProperty(This,propertyId,propertyValue) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_GetDeviceProperty(This,propertyId,propertyValue) \
    ( (This)->lpVtbl->GetDeviceProperty(This,propertyId,propertyValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IAdvancedVideoCaptureDeviceController2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.VideoDeviceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2[] = L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController2";
/* [object, uuid("8BB94F8F-F11A-43DB-B402-11930B80AE56"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LowLagPhotoSequence )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LowLagPhoto )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SceneModeControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TorchControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CITorchControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FlashControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WhiteBalanceControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExposureControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FocusControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExposureCompensationControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsoSpeedControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RegionsOfInterestControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PrimaryUse )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CCaptureUse * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PrimaryUse )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
        /* [in] */__x_ABI_CWindows_CMedia_CDevices_CCaptureUse value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2Vtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_get_LowLagPhotoSequence(This,value) \
    ( (This)->lpVtbl->get_LowLagPhotoSequence(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_get_LowLagPhoto(This,value) \
    ( (This)->lpVtbl->get_LowLagPhoto(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_get_SceneModeControl(This,value) \
    ( (This)->lpVtbl->get_SceneModeControl(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_get_TorchControl(This,value) \
    ( (This)->lpVtbl->get_TorchControl(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_get_FlashControl(This,value) \
    ( (This)->lpVtbl->get_FlashControl(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_get_WhiteBalanceControl(This,value) \
    ( (This)->lpVtbl->get_WhiteBalanceControl(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_get_ExposureControl(This,value) \
    ( (This)->lpVtbl->get_ExposureControl(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_get_FocusControl(This,value) \
    ( (This)->lpVtbl->get_FocusControl(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_get_ExposureCompensationControl(This,value) \
    ( (This)->lpVtbl->get_ExposureCompensationControl(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_get_IsoSpeedControl(This,value) \
    ( (This)->lpVtbl->get_IsoSpeedControl(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_get_RegionsOfInterestControl(This,value) \
    ( (This)->lpVtbl->get_RegionsOfInterestControl(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_get_PrimaryUse(This,value) \
    ( (This)->lpVtbl->get_PrimaryUse(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_put_PrimaryUse(This,value) \
    ( (This)->lpVtbl->put_PrimaryUse(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IAdvancedVideoCaptureDeviceController3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.VideoDeviceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController3[] = L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController3";
/* [object, uuid("A98B8F34-EE0D-470C-B9F0-4229C4BBD089"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VariablePhotoSequenceController )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhotoConfirmationControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ZoomControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3Vtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_get_VariablePhotoSequenceController(This,value) \
    ( (This)->lpVtbl->get_VariablePhotoSequenceController(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_get_PhotoConfirmationControl(This,value) \
    ( (This)->lpVtbl->get_PhotoConfirmationControl(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_get_ZoomControl(This,value) \
    ( (This)->lpVtbl->get_ZoomControl(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IAdvancedVideoCaptureDeviceController4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.VideoDeviceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4[] = L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController4";
/* [object, uuid("EA9FBFAF-D371-41C3-9A17-824A87EBDFD2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExposurePriorityVideoControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredOptimization )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureOptimization * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredOptimization )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
        /* [in] */__x_ABI_CWindows_CMedia_CDevices_CMediaCaptureOptimization value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HdrVideoControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OpticalImageStabilizationControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AdvancedPhotoControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4Vtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_get_ExposurePriorityVideoControl(This,value) \
    ( (This)->lpVtbl->get_ExposurePriorityVideoControl(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_get_DesiredOptimization(This,value) \
    ( (This)->lpVtbl->get_DesiredOptimization(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_put_DesiredOptimization(This,value) \
    ( (This)->lpVtbl->put_DesiredOptimization(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_get_HdrVideoControl(This,value) \
    ( (This)->lpVtbl->get_HdrVideoControl(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_get_OpticalImageStabilizationControl(This,value) \
    ( (This)->lpVtbl->get_OpticalImageStabilizationControl(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_get_AdvancedPhotoControl(This,value) \
    ( (This)->lpVtbl->get_AdvancedPhotoControl(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IAdvancedVideoCaptureDeviceController5
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.VideoDeviceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController5[] = L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController5";
/* [object, uuid("33512B17-B9CB-4A23-B875-F9EAAB535492"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDevicePropertyById )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This,
        /* [in] */__RPC__in HSTRING propertyId,
        /* [in] */__RPC__in_opt __FIReference_1_UINT32 * maxPropertyValueSize,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDevicePropertyById )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This,
        /* [in] */__RPC__in HSTRING propertyId,
        /* [in] */__RPC__in_opt IInspectable * propertyValue,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CVideoDeviceControllerSetDevicePropertyStatus * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDevicePropertyByExtendedId )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This,
        /* [in] */UINT32 __extendedPropertyIdSize,
        /* [size_is(__extendedPropertyIdSize), in] */__RPC__in_ecount_full(__extendedPropertyIdSize) BYTE * extendedPropertyId,
        /* [in] */__RPC__in_opt __FIReference_1_UINT32 * maxPropertyValueSize,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDevicePropertyByExtendedId )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This,
        /* [in] */UINT32 __extendedPropertyIdSize,
        /* [size_is(__extendedPropertyIdSize), in] */__RPC__in_ecount_full(__extendedPropertyIdSize) BYTE * extendedPropertyId,
        /* [in] */UINT32 __propertyValueSize,
        /* [size_is(__propertyValueSize), in] */__RPC__in_ecount_full(__propertyValueSize) BYTE * propertyValue,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CVideoDeviceControllerSetDevicePropertyStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5Vtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_GetDevicePropertyById(This,propertyId,maxPropertyValueSize,value) \
    ( (This)->lpVtbl->GetDevicePropertyById(This,propertyId,maxPropertyValueSize,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_SetDevicePropertyById(This,propertyId,propertyValue,value) \
    ( (This)->lpVtbl->SetDevicePropertyById(This,propertyId,propertyValue,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_GetDevicePropertyByExtendedId(This,__extendedPropertyIdSize,extendedPropertyId,maxPropertyValueSize,value) \
    ( (This)->lpVtbl->GetDevicePropertyByExtendedId(This,__extendedPropertyIdSize,extendedPropertyId,maxPropertyValueSize,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_SetDevicePropertyByExtendedId(This,__extendedPropertyIdSize,extendedPropertyId,__propertyValueSize,propertyValue,value) \
    ( (This)->lpVtbl->SetDevicePropertyByExtendedId(This,__extendedPropertyIdSize,extendedPropertyId,__propertyValueSize,propertyValue,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Devices.IAudioDeviceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.AudioDeviceController
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Devices.IMediaDeviceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAudioDeviceController[] = L"Windows.Media.Devices.IAudioDeviceController";
/* [object, uuid("EDD4A388-79C7-4F7C-90E8-EF934B21580A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Muted )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Muted )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_VolumePercent )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VolumePercent )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceControllerVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_put_Muted(This,value) \
    ( (This)->lpVtbl->put_Muted(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_get_Muted(This,value) \
    ( (This)->lpVtbl->get_Muted(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_put_VolumePercent(This,value) \
    ( (This)->lpVtbl->put_VolumePercent(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_get_VolumePercent(This,value) \
    ( (This)->lpVtbl->get_VolumePercent(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IAudioDeviceModule
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.AudioDeviceModule
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAudioDeviceModule[] = L"Windows.Media.Devices.IAudioDeviceModule";
/* [object, uuid("86CFAC36-47C1-4B33-9852-8773EC4BE123"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClassId )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InstanceId )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SendCommandAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * Command,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_get_ClassId(This,value) \
    ( (This)->lpVtbl->get_ClassId(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_get_InstanceId(This,value) \
    ( (This)->lpVtbl->get_InstanceId(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_get_MajorVersion(This,value) \
    ( (This)->lpVtbl->get_MajorVersion(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_get_MinorVersion(This,value) \
    ( (This)->lpVtbl->get_MinorVersion(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_SendCommandAsync(This,Command,operation) \
    ( (This)->lpVtbl->SendCommandAsync(This,Command,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Devices.IAudioDeviceModuleNotificationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.AudioDeviceModuleNotificationEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAudioDeviceModuleNotificationEventArgs[] = L"Windows.Media.Devices.IAudioDeviceModuleNotificationEventArgs";
/* [object, uuid("E3E3CCAF-224C-48BE-956B-9A13134E96E8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Module )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NotificationData )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_get_Module(This,value) \
    ( (This)->lpVtbl->get_Module(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_get_NotificationData(This,value) \
    ( (This)->lpVtbl->get_NotificationData(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Devices.IAudioDeviceModulesManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.AudioDeviceModulesManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAudioDeviceModulesManager[] = L"Windows.Media.Devices.IAudioDeviceModulesManager";
/* [object, uuid("6AA40C4D-960A-4D1C-B318-0022604547ED"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ModuleNotificationReceived )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ModuleNotificationReceived )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *FindAllById )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This,
        /* [in] */__RPC__in HSTRING moduleId,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * * modules
        );
    HRESULT ( STDMETHODCALLTYPE *FindAll )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * * modules
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_add_ModuleNotificationReceived(This,handler,token) \
    ( (This)->lpVtbl->add_ModuleNotificationReceived(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_remove_ModuleNotificationReceived(This,token) \
    ( (This)->lpVtbl->remove_ModuleNotificationReceived(This,token) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_FindAllById(This,moduleId,modules) \
    ( (This)->lpVtbl->FindAllById(This,moduleId,modules) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_FindAll(This,modules) \
    ( (This)->lpVtbl->FindAll(This,modules) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Devices.IAudioDeviceModulesManagerFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.AudioDeviceModulesManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAudioDeviceModulesManagerFactory[] = L"Windows.Media.Devices.IAudioDeviceModulesManagerFactory";
/* [object, uuid("8DB03670-E64D-4773-96C0-BC7EBF0E063F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_Create(This,deviceId,result) \
    ( (This)->lpVtbl->Create(This,deviceId,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Devices.ICallControl
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.CallControl
 *
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CICallControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CICallControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_ICallControl[] = L"Windows.Media.Devices.ICallControl";
/* [object, uuid("A520D0D6-AE8D-45DB-8011-CA49D3B3E578"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CICallControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IndicateNewIncomingCall )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
        /* [in] */boolean enableRinger,
        /* [in] */__RPC__in HSTRING callerId,
        /* [retval, out] */__RPC__out UINT64 * callToken
        );
    HRESULT ( STDMETHODCALLTYPE *IndicateNewOutgoingCall )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
        /* [retval, out] */__RPC__out UINT64 * callToken
        );
    HRESULT ( STDMETHODCALLTYPE *IndicateActiveCall )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
        /* [in] */UINT64 callToken
        );
    HRESULT ( STDMETHODCALLTYPE *EndCall )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
        /* [in] */UINT64 callToken
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasRinger )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AnswerRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AnswerRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_HangUpRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_HangUpRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DialRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DialRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RedialRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RedialRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_KeypadPressed )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_KeypadPressed )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AudioTransferRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AudioTransferRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CICallControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CICallControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CICallControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_IndicateNewIncomingCall(This,enableRinger,callerId,callToken) \
    ( (This)->lpVtbl->IndicateNewIncomingCall(This,enableRinger,callerId,callToken) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_IndicateNewOutgoingCall(This,callToken) \
    ( (This)->lpVtbl->IndicateNewOutgoingCall(This,callToken) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_IndicateActiveCall(This,callToken) \
    ( (This)->lpVtbl->IndicateActiveCall(This,callToken) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_EndCall(This,callToken) \
    ( (This)->lpVtbl->EndCall(This,callToken) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_get_HasRinger(This,value) \
    ( (This)->lpVtbl->get_HasRinger(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_add_AnswerRequested(This,handler,token) \
    ( (This)->lpVtbl->add_AnswerRequested(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_remove_AnswerRequested(This,token) \
    ( (This)->lpVtbl->remove_AnswerRequested(This,token) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_add_HangUpRequested(This,handler,token) \
    ( (This)->lpVtbl->add_HangUpRequested(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_remove_HangUpRequested(This,token) \
    ( (This)->lpVtbl->remove_HangUpRequested(This,token) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_add_DialRequested(This,handler,token) \
    ( (This)->lpVtbl->add_DialRequested(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_remove_DialRequested(This,token) \
    ( (This)->lpVtbl->remove_DialRequested(This,token) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_add_RedialRequested(This,handler,token) \
    ( (This)->lpVtbl->add_RedialRequested(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_remove_RedialRequested(This,token) \
    ( (This)->lpVtbl->remove_RedialRequested(This,token) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_add_KeypadPressed(This,handler,token) \
    ( (This)->lpVtbl->add_KeypadPressed(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_remove_KeypadPressed(This,token) \
    ( (This)->lpVtbl->remove_KeypadPressed(This,token) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_add_AudioTransferRequested(This,handler,token) \
    ( (This)->lpVtbl->add_AudioTransferRequested(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControl_remove_AudioTransferRequested(This,token) \
    ( (This)->lpVtbl->remove_AudioTransferRequested(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CICallControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CICallControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.ICallControlStatics
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.CallControl
 *
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_ICallControlStatics[] = L"Windows.Media.Devices.ICallControlStatics";
/* [object, uuid("03945AD5-85AB-40E1-AF19-56C94303B019"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CICallControlStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CICallControl * * callControl
        );
    HRESULT ( STDMETHODCALLTYPE *FromId )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CICallControl * * callControl
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CICallControlStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CICallControlStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_GetDefault(This,callControl) \
    ( (This)->lpVtbl->GetDefault(This,callControl) )

#define __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_FromId(This,deviceId,callControl) \
    ( (This)->lpVtbl->FromId(This,deviceId,callControl) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CICallControlStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CICallControlStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IDefaultAudioDeviceChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IDefaultAudioDeviceChangedEventArgs[] = L"Windows.Media.Devices.IDefaultAudioDeviceChangedEventArgs";
/* [object, uuid("110F882F-1C05-4657-A18E-47C9B69F07AB"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Role )(
        __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CAudioDeviceRole * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_get_Role(This,value) \
    ( (This)->lpVtbl->get_Role(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IDialRequestedEventArgs
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.DialRequestedEventArgs
 *
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IDialRequestedEventArgs[] = L"Windows.Media.Devices.IDialRequestedEventArgs";
/* [object, uuid("037B929E-953C-4286-8866-4F0F376C855A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Handled )(
        __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs * This
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_Handled(This) \
    ( (This)->lpVtbl->Handled(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_get_Contact(This,value) \
    ( (This)->lpVtbl->get_Contact(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IExposureCompensationControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.ExposureCompensationControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IExposureCompensationControl[] = L"Windows.Media.Devices.IExposureCompensationControl";
/* [object, uuid("81C8E834-DCEC-4011-A610-1F3847E64ACA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetValueAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
        /* [in] */FLOAT value,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_get_Min(This,value) \
    ( (This)->lpVtbl->get_Min(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_get_Max(This,value) \
    ( (This)->lpVtbl->get_Max(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_get_Step(This,value) \
    ( (This)->lpVtbl->get_Step(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_SetValueAsync(This,value,asyncInfo) \
    ( (This)->lpVtbl->SetValueAsync(This,value,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IExposureControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.ExposureControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIExposureControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIExposureControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IExposureControl[] = L"Windows.Media.Devices.IExposureControl";
/* [object, uuid("09E8CBE2-AD96-4F28-A0E0-96ED7E1B5FD2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIExposureControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetAutoAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
        /* [in] */boolean value,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetValueAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan shutterDuration,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIExposureControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIExposureControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIExposureControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIExposureControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureControl_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureControl_get_Auto(This,value) \
    ( (This)->lpVtbl->get_Auto(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureControl_SetAutoAsync(This,value,asyncInfo) \
    ( (This)->lpVtbl->SetAutoAsync(This,value,asyncInfo) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureControl_get_Min(This,value) \
    ( (This)->lpVtbl->get_Min(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureControl_get_Max(This,value) \
    ( (This)->lpVtbl->get_Max(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureControl_get_Step(This,value) \
    ( (This)->lpVtbl->get_Step(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureControl_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposureControl_SetValueAsync(This,shutterDuration,asyncInfo) \
    ( (This)->lpVtbl->SetValueAsync(This,shutterDuration,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIExposureControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIExposureControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IExposurePriorityVideoControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.ExposurePriorityVideoControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IExposurePriorityVideoControl[] = L"Windows.Media.Devices.IExposurePriorityVideoControl";
/* [object, uuid("2CB240A3-5168-4271-9EA5-47621A98A352"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_get_Enabled(This,value) \
    ( (This)->lpVtbl->get_Enabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_put_Enabled(This,value) \
    ( (This)->lpVtbl->put_Enabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IFlashControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.FlashControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIFlashControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIFlashControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IFlashControl[] = L"Windows.Media.Devices.IFlashControl";
/* [object, uuid("DEF41DBE-7D68-45E3-8C0F-BE7BB32837D0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIFlashControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PowerSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RedEyeReductionSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RedEyeReduction )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RedEyeReduction )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PowerPercent )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PowerPercent )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
        /* [in] */FLOAT value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIFlashControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIFlashControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIFlashControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl_get_PowerSupported(This,value) \
    ( (This)->lpVtbl->get_PowerSupported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl_get_RedEyeReductionSupported(This,value) \
    ( (This)->lpVtbl->get_RedEyeReductionSupported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl_get_Enabled(This,value) \
    ( (This)->lpVtbl->get_Enabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl_put_Enabled(This,value) \
    ( (This)->lpVtbl->put_Enabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl_get_Auto(This,value) \
    ( (This)->lpVtbl->get_Auto(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl_put_Auto(This,value) \
    ( (This)->lpVtbl->put_Auto(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl_get_RedEyeReduction(This,value) \
    ( (This)->lpVtbl->get_RedEyeReduction(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl_put_RedEyeReduction(This,value) \
    ( (This)->lpVtbl->put_RedEyeReduction(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl_get_PowerPercent(This,value) \
    ( (This)->lpVtbl->get_PowerPercent(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl_put_PowerPercent(This,value) \
    ( (This)->lpVtbl->put_PowerPercent(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIFlashControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIFlashControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IFlashControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.FlashControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IFlashControl2[] = L"Windows.Media.Devices.IFlashControl2";
/* [object, uuid("7D29CC9E-75E1-4AF7-BD7D-4E38E1C06CD6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AssistantLightSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AssistantLightEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AssistantLightEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2Vtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_get_AssistantLightSupported(This,value) \
    ( (This)->lpVtbl->get_AssistantLightSupported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_get_AssistantLightEnabled(This,value) \
    ( (This)->lpVtbl->get_AssistantLightEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_put_AssistantLightEnabled(This,value) \
    ( (This)->lpVtbl->put_AssistantLightEnabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIFlashControl2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIFlashControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IFocusControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.FocusControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIFocusControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIFocusControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IFocusControl[] = L"Windows.Media.Devices.IFocusControl";
/* [object, uuid("C0D889F6-5228-4453-B153-85606592B238"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIFocusControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedPresets )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Preset )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CFocusPreset * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SetPresetAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
        /* [in] */__x_ABI_CWindows_CMedia_CDevices_CFocusPreset preset,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SetPresetWithCompletionOptionAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
        /* [in] */__x_ABI_CWindows_CMedia_CDevices_CFocusPreset preset,
        /* [in] */boolean completeBeforeFocus,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetValueAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
        /* [in] */UINT32 focus,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *FocusAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIFocusControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIFocusControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIFocusControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl_get_SupportedPresets(This,value) \
    ( (This)->lpVtbl->get_SupportedPresets(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl_get_Preset(This,value) \
    ( (This)->lpVtbl->get_Preset(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl_SetPresetAsync(This,preset,asyncInfo) \
    ( (This)->lpVtbl->SetPresetAsync(This,preset,asyncInfo) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl_SetPresetWithCompletionOptionAsync(This,preset,completeBeforeFocus,asyncInfo) \
    ( (This)->lpVtbl->SetPresetWithCompletionOptionAsync(This,preset,completeBeforeFocus,asyncInfo) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl_get_Min(This,value) \
    ( (This)->lpVtbl->get_Min(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl_get_Max(This,value) \
    ( (This)->lpVtbl->get_Max(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl_get_Step(This,value) \
    ( (This)->lpVtbl->get_Step(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl_SetValueAsync(This,focus,asyncInfo) \
    ( (This)->lpVtbl->SetValueAsync(This,focus,asyncInfo) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl_FocusAsync(This,asyncInfo) \
    ( (This)->lpVtbl->FocusAsync(This,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIFocusControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIFocusControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IFocusControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.FocusControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IFocusControl2[] = L"Windows.Media.Devices.IFocusControl2";
/* [object, uuid("3F7CFF48-C534-4E9E-94C3-52EF2AFD5D07"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FocusChangedSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WaitForFocusSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedFocusModes )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedFocusDistances )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedFocusRanges )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CFocusMode * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FocusState )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureFocusState * value
        );
    HRESULT ( STDMETHODCALLTYPE *UnlockAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *LockAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *Configure )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * settings
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2Vtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_get_FocusChangedSupported(This,value) \
    ( (This)->lpVtbl->get_FocusChangedSupported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_get_WaitForFocusSupported(This,value) \
    ( (This)->lpVtbl->get_WaitForFocusSupported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_get_SupportedFocusModes(This,value) \
    ( (This)->lpVtbl->get_SupportedFocusModes(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_get_SupportedFocusDistances(This,value) \
    ( (This)->lpVtbl->get_SupportedFocusDistances(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_get_SupportedFocusRanges(This,value) \
    ( (This)->lpVtbl->get_SupportedFocusRanges(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_get_FocusState(This,value) \
    ( (This)->lpVtbl->get_FocusState(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_UnlockAsync(This,asyncInfo) \
    ( (This)->lpVtbl->UnlockAsync(This,asyncInfo) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_LockAsync(This,asyncInfo) \
    ( (This)->lpVtbl->LockAsync(This,asyncInfo) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_Configure(This,settings) \
    ( (This)->lpVtbl->Configure(This,settings) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIFocusControl2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIFocusControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IFocusSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.FocusSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IFocusSettings[] = L"Windows.Media.Devices.IFocusSettings";
/* [object, uuid("79958F6B-3263-4275-85D6-AEAE891C96EE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIFocusSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CFocusMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
        /* [in] */__x_ABI_CWindows_CMedia_CDevices_CFocusMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoFocusRange )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AutoFocusRange )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
        /* [in] */__x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
        /* [in] */__RPC__in_opt __FIReference_1_UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Distance )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Distance )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WaitForFocus )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_WaitForFocus )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisableDriverFallback )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisableDriverFallback )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIFocusSettingsVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIFocusSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_put_Mode(This,value) \
    ( (This)->lpVtbl->put_Mode(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_get_AutoFocusRange(This,value) \
    ( (This)->lpVtbl->get_AutoFocusRange(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_put_AutoFocusRange(This,value) \
    ( (This)->lpVtbl->put_AutoFocusRange(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_get_Distance(This,value) \
    ( (This)->lpVtbl->get_Distance(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_put_Distance(This,value) \
    ( (This)->lpVtbl->put_Distance(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_get_WaitForFocus(This,value) \
    ( (This)->lpVtbl->get_WaitForFocus(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_put_WaitForFocus(This,value) \
    ( (This)->lpVtbl->put_WaitForFocus(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_get_DisableDriverFallback(This,value) \
    ( (This)->lpVtbl->get_DisableDriverFallback(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_put_DisableDriverFallback(This,value) \
    ( (This)->lpVtbl->put_DisableDriverFallback(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIFocusSettings;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIFocusSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IHdrVideoControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.HdrVideoControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IHdrVideoControl[] = L"Windows.Media.Devices.IHdrVideoControl";
/* [object, uuid("55D8E2D0-30C0-43BF-9B9A-9799D70CED94"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedModes )(
        __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This,
        /* [in] */__x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_get_SupportedModes(This,value) \
    ( (This)->lpVtbl->get_SupportedModes(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_put_Mode(This,value) \
    ( (This)->lpVtbl->put_Mode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IIsoSpeedControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.IsoSpeedControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IIsoSpeedControl[] = L"Windows.Media.Devices.IIsoSpeedControl";
/* [object, uuid("27B6C322-25AD-4F1B-AAAB-524AB376CA33"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("SupportedPresets may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_SupportedPresets )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Preset may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Preset )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("SetPresetAsync may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *SetPresetAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This,
        /* [in] */__x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset preset,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("SupportedPresets may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_get_SupportedPresets(This,value) \
    ( (This)->lpVtbl->get_SupportedPresets(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Preset may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_get_Preset(This,value) \
    ( (This)->lpVtbl->get_Preset(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("SetPresetAsync may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_SetPresetAsync(This,preset,asyncInfo) \
    ( (This)->lpVtbl->SetPresetAsync(This,preset,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IIsoSpeedControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.IsoSpeedControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IIsoSpeedControl2[] = L"Windows.Media.Devices.IIsoSpeedControl2";
/* [object, uuid("6F1578F2-6D77-4F8A-8C2F-6130B6395053"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetValueAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
        /* [in] */UINT32 isoSpeed,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetAutoAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2Vtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_get_Min(This,value) \
    ( (This)->lpVtbl->get_Min(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_get_Max(This,value) \
    ( (This)->lpVtbl->get_Max(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_get_Step(This,value) \
    ( (This)->lpVtbl->get_Step(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_SetValueAsync(This,isoSpeed,asyncInfo) \
    ( (This)->lpVtbl->SetValueAsync(This,isoSpeed,asyncInfo) )

#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_get_Auto(This,value) \
    ( (This)->lpVtbl->get_Auto(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_SetAutoAsync(This,asyncInfo) \
    ( (This)->lpVtbl->SetAutoAsync(This,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IKeypadPressedEventArgs
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.KeypadPressedEventArgs
 *
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IKeypadPressedEventArgs[] = L"Windows.Media.Devices.IKeypadPressedEventArgs";
/* [object, uuid("D3A43900-B4FA-49CD-9442-89AF6568F601"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TelephonyKey )(
        __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CTelephonyKey * telephonyKey
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_get_TelephonyKey(This,telephonyKey) \
    ( (This)->lpVtbl->get_TelephonyKey(This,telephonyKey) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.ILowLagPhotoControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.LowLagPhotoControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_ILowLagPhotoControl[] = L"Windows.Media.Devices.ILowLagPhotoControl";
/* [object, uuid("6D5C4DD0-FADF-415D-AEE6-3BAA529300C9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetHighestConcurrentFrameRate )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * captureProperties,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentFrameRate )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ThumbnailEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ThumbnailEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ThumbnailFormat )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CMediaThumbnailFormat * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ThumbnailFormat )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaProperties_CMediaThumbnailFormat value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredThumbnailSize )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredThumbnailSize )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HardwareAcceleratedThumbnailSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_GetHighestConcurrentFrameRate(This,captureProperties,value) \
    ( (This)->lpVtbl->GetHighestConcurrentFrameRate(This,captureProperties,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_GetCurrentFrameRate(This,value) \
    ( (This)->lpVtbl->GetCurrentFrameRate(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_get_ThumbnailEnabled(This,value) \
    ( (This)->lpVtbl->get_ThumbnailEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_put_ThumbnailEnabled(This,value) \
    ( (This)->lpVtbl->put_ThumbnailEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_get_ThumbnailFormat(This,value) \
    ( (This)->lpVtbl->get_ThumbnailFormat(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_put_ThumbnailFormat(This,value) \
    ( (This)->lpVtbl->put_ThumbnailFormat(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_get_DesiredThumbnailSize(This,value) \
    ( (This)->lpVtbl->get_DesiredThumbnailSize(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_put_DesiredThumbnailSize(This,value) \
    ( (This)->lpVtbl->put_DesiredThumbnailSize(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_get_HardwareAcceleratedThumbnailSupported(This,value) \
    ( (This)->lpVtbl->get_HardwareAcceleratedThumbnailSupported(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.ILowLagPhotoSequenceControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.LowLagPhotoSequenceControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_ILowLagPhotoSequenceControl[] = L"Windows.Media.Devices.ILowLagPhotoSequenceControl";
/* [object, uuid("3DCF909D-6D16-409C-BAFE-B9A594C6FDE6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxPastPhotos )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxPhotosPerSecond )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PastPhotoLimit )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PastPhotoLimit )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhotosPerSecondLimit )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PhotosPerSecondLimit )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
        /* [in] */FLOAT value
        );
    HRESULT ( STDMETHODCALLTYPE *GetHighestConcurrentFrameRate )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * captureProperties,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentFrameRate )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ThumbnailEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ThumbnailEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ThumbnailFormat )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CMediaThumbnailFormat * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ThumbnailFormat )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaProperties_CMediaThumbnailFormat value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredThumbnailSize )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredThumbnailSize )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HardwareAcceleratedThumbnailSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_get_MaxPastPhotos(This,value) \
    ( (This)->lpVtbl->get_MaxPastPhotos(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_get_MaxPhotosPerSecond(This,value) \
    ( (This)->lpVtbl->get_MaxPhotosPerSecond(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_get_PastPhotoLimit(This,value) \
    ( (This)->lpVtbl->get_PastPhotoLimit(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_put_PastPhotoLimit(This,value) \
    ( (This)->lpVtbl->put_PastPhotoLimit(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_get_PhotosPerSecondLimit(This,value) \
    ( (This)->lpVtbl->get_PhotosPerSecondLimit(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_put_PhotosPerSecondLimit(This,value) \
    ( (This)->lpVtbl->put_PhotosPerSecondLimit(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_GetHighestConcurrentFrameRate(This,captureProperties,value) \
    ( (This)->lpVtbl->GetHighestConcurrentFrameRate(This,captureProperties,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_GetCurrentFrameRate(This,value) \
    ( (This)->lpVtbl->GetCurrentFrameRate(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_get_ThumbnailEnabled(This,value) \
    ( (This)->lpVtbl->get_ThumbnailEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_put_ThumbnailEnabled(This,value) \
    ( (This)->lpVtbl->put_ThumbnailEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_get_ThumbnailFormat(This,value) \
    ( (This)->lpVtbl->get_ThumbnailFormat(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_put_ThumbnailFormat(This,value) \
    ( (This)->lpVtbl->put_ThumbnailFormat(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_get_DesiredThumbnailSize(This,value) \
    ( (This)->lpVtbl->get_DesiredThumbnailSize(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_put_DesiredThumbnailSize(This,value) \
    ( (This)->lpVtbl->put_DesiredThumbnailSize(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_get_HardwareAcceleratedThumbnailSupported(This,value) \
    ( (This)->lpVtbl->get_HardwareAcceleratedThumbnailSupported(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IMediaDeviceControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.MediaDeviceControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IMediaDeviceControl[] = L"Windows.Media.Devices.IMediaDeviceControl";
/* [object, uuid("EFA8DFA9-6F75-4863-BA0B-583F3036B4DE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Capabilities )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetValue )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This,
        /* [out] */__RPC__out DOUBLE * value,
        /* [retval, out] */__RPC__out boolean * succeeded
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetValue )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This,
        /* [in] */DOUBLE value,
        /* [retval, out] */__RPC__out boolean * succeeded
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetAuto )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This,
        /* [out] */__RPC__out boolean * value,
        /* [retval, out] */__RPC__out boolean * succeeded
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetAuto )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This,
        /* [in] */boolean value,
        /* [retval, out] */__RPC__out boolean * succeeded
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_get_Capabilities(This,value) \
    ( (This)->lpVtbl->get_Capabilities(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_TryGetValue(This,value,succeeded) \
    ( (This)->lpVtbl->TryGetValue(This,value,succeeded) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_TrySetValue(This,value,succeeded) \
    ( (This)->lpVtbl->TrySetValue(This,value,succeeded) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_TryGetAuto(This,value,succeeded) \
    ( (This)->lpVtbl->TryGetAuto(This,value,succeeded) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_TrySetAuto(This,value,succeeded) \
    ( (This)->lpVtbl->TrySetAuto(This,value,succeeded) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IMediaDeviceControlCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.MediaDeviceControlCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IMediaDeviceControlCapabilities[] = L"Windows.Media.Devices.IMediaDeviceControlCapabilities";
/* [object, uuid("23005816-EB85-43E2-B92B-8240D5EE70EC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Default )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoModeSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilitiesVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilitiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_get_Min(This,value) \
    ( (This)->lpVtbl->get_Min(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_get_Max(This,value) \
    ( (This)->lpVtbl->get_Max(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_get_Step(This,value) \
    ( (This)->lpVtbl->get_Step(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_get_Default(This,value) \
    ( (This)->lpVtbl->get_Default(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_get_AutoModeSupported(This,value) \
    ( (This)->lpVtbl->get_AutoModeSupported(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IMediaDeviceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IMediaDeviceController[] = L"Windows.Media.Devices.IMediaDeviceController";
/* [object, uuid("F6F8F5CE-209A-48FB-86FC-D44578F317E6"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAvailableMediaStreamProperties )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController * This,
        /* [in] */__x_ABI_CWindows_CMedia_CCapture_CMediaStreamType mediaStreamType,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetMediaStreamProperties )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController * This,
        /* [in] */__x_ABI_CWindows_CMedia_CCapture_CMediaStreamType mediaStreamType,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetMediaStreamPropertiesAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController * This,
        /* [in] */__x_ABI_CWindows_CMedia_CCapture_CMediaStreamType mediaStreamType,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * mediaEncodingProperties,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControllerVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_GetAvailableMediaStreamProperties(This,mediaStreamType,value) \
    ( (This)->lpVtbl->GetAvailableMediaStreamProperties(This,mediaStreamType,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_GetMediaStreamProperties(This,mediaStreamType,value) \
    ( (This)->lpVtbl->GetMediaStreamProperties(This,mediaStreamType,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_SetMediaStreamPropertiesAsync(This,mediaStreamType,mediaEncodingProperties,asyncInfo) \
    ( (This)->lpVtbl->SetMediaStreamPropertiesAsync(This,mediaStreamType,mediaEncodingProperties,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IMediaDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.MediaDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IMediaDeviceStatics[] = L"Windows.Media.Devices.IMediaDeviceStatics";
/* [object, uuid("AA2D9A40-909F-4BBA-BF8B-0C0D296F14F0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAudioCaptureSelector )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
        );
    HRESULT ( STDMETHODCALLTYPE *GetAudioRenderSelector )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
        );
    HRESULT ( STDMETHODCALLTYPE *GetVideoCaptureSelector )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultAudioCaptureId )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
        /* [in] */__x_ABI_CWindows_CMedia_CDevices_CAudioDeviceRole role,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceId
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultAudioRenderId )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
        /* [in] */__x_ABI_CWindows_CMedia_CDevices_CAudioDeviceRole role,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceId
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DefaultAudioCaptureDeviceChanged )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DefaultAudioCaptureDeviceChanged )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DefaultAudioRenderDeviceChanged )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DefaultAudioRenderDeviceChanged )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_GetAudioCaptureSelector(This,selector) \
    ( (This)->lpVtbl->GetAudioCaptureSelector(This,selector) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_GetAudioRenderSelector(This,selector) \
    ( (This)->lpVtbl->GetAudioRenderSelector(This,selector) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_GetVideoCaptureSelector(This,selector) \
    ( (This)->lpVtbl->GetVideoCaptureSelector(This,selector) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_GetDefaultAudioCaptureId(This,role,deviceId) \
    ( (This)->lpVtbl->GetDefaultAudioCaptureId(This,role,deviceId) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_GetDefaultAudioRenderId(This,role,deviceId) \
    ( (This)->lpVtbl->GetDefaultAudioRenderId(This,role,deviceId) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_add_DefaultAudioCaptureDeviceChanged(This,handler,cookie) \
    ( (This)->lpVtbl->add_DefaultAudioCaptureDeviceChanged(This,handler,cookie) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_remove_DefaultAudioCaptureDeviceChanged(This,cookie) \
    ( (This)->lpVtbl->remove_DefaultAudioCaptureDeviceChanged(This,cookie) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_add_DefaultAudioRenderDeviceChanged(This,handler,cookie) \
    ( (This)->lpVtbl->add_DefaultAudioRenderDeviceChanged(This,handler,cookie) )

#define __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_remove_DefaultAudioRenderDeviceChanged(This,cookie) \
    ( (This)->lpVtbl->remove_DefaultAudioRenderDeviceChanged(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IModuleCommandResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.ModuleCommandResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IModuleCommandResult[] = L"Windows.Media.Devices.IModuleCommandResult";
/* [object, uuid("520D1EB4-1374-4C7D-B1E4-39DCDF3EAE4E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CSendCommandStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Result )(
        __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResultVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_get_Result(This,value) \
    ( (This)->lpVtbl->get_Result(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Devices.IOpticalImageStabilizationControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.OpticalImageStabilizationControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IOpticalImageStabilizationControl[] = L"Windows.Media.Devices.IOpticalImageStabilizationControl";
/* [object, uuid("BFAD9C1D-00BC-423B-8EB2-A0178CA94247"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedModes )(
        __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This,
        /* [in] */__x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_get_SupportedModes(This,value) \
    ( (This)->lpVtbl->get_SupportedModes(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_put_Mode(This,value) \
    ( (This)->lpVtbl->put_Mode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IPhotoConfirmationControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.PhotoConfirmationControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IPhotoConfirmationControl[] = L"Windows.Media.Devices.IPhotoConfirmationControl";
/* [object, uuid("C8F3F363-FF5E-4582-A9A8-0550F85A4A76"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This,
        /* [retval, out] */__RPC__out boolean * pbSupported
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PixelFormat )(
        __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CMediaPixelFormat * format
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PixelFormat )(
        __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaProperties_CMediaPixelFormat format
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_get_Supported(This,pbSupported) \
    ( (This)->lpVtbl->get_Supported(This,pbSupported) )

#define __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_get_Enabled(This,value) \
    ( (This)->lpVtbl->get_Enabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_put_Enabled(This,value) \
    ( (This)->lpVtbl->put_Enabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_get_PixelFormat(This,format) \
    ( (This)->lpVtbl->get_PixelFormat(This,format) )

#define __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_put_PixelFormat(This,format) \
    ( (This)->lpVtbl->put_PixelFormat(This,format) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IRedialRequestedEventArgs
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.RedialRequestedEventArgs
 *
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IRedialRequestedEventArgs[] = L"Windows.Media.Devices.IRedialRequestedEventArgs";
/* [object, uuid("7EB55209-76AB-4C31-B40E-4B58379D580C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Handled )(
        __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_Handled(This) \
    ( (This)->lpVtbl->Handled(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IRegionOfInterest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.RegionOfInterest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IRegionOfInterest[] = L"Windows.Media.Devices.IRegionOfInterest";
/* [object, uuid("E5ECC834-CE66-4E05-A78F-CF391A5EC2D1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoFocusEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AutoFocusEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoWhiteBalanceEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AutoWhiteBalanceEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoExposureEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AutoExposureEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bounds )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Bounds )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterestVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_get_AutoFocusEnabled(This,value) \
    ( (This)->lpVtbl->get_AutoFocusEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_put_AutoFocusEnabled(This,value) \
    ( (This)->lpVtbl->put_AutoFocusEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_get_AutoWhiteBalanceEnabled(This,value) \
    ( (This)->lpVtbl->get_AutoWhiteBalanceEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_put_AutoWhiteBalanceEnabled(This,value) \
    ( (This)->lpVtbl->put_AutoWhiteBalanceEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_get_AutoExposureEnabled(This,value) \
    ( (This)->lpVtbl->get_AutoExposureEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_put_AutoExposureEnabled(This,value) \
    ( (This)->lpVtbl->put_AutoExposureEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_get_Bounds(This,value) \
    ( (This)->lpVtbl->get_Bounds(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_put_Bounds(This,value) \
    ( (This)->lpVtbl->put_Bounds(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IRegionOfInterest2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.RegionOfInterest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IRegionOfInterest2[] = L"Windows.Media.Devices.IRegionOfInterest2";
/* [object, uuid("19FE2A91-73AA-4D51-8A9D-56CCF7DB7F54"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CRegionOfInterestType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Type )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
        /* [in] */__x_ABI_CWindows_CMedia_CDevices_CRegionOfInterestType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BoundsNormalized )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BoundsNormalized )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Weight )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Weight )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
        /* [in] */UINT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2Vtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_put_Type(This,value) \
    ( (This)->lpVtbl->put_Type(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_get_BoundsNormalized(This,value) \
    ( (This)->lpVtbl->get_BoundsNormalized(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_put_BoundsNormalized(This,value) \
    ( (This)->lpVtbl->put_BoundsNormalized(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_get_Weight(This,value) \
    ( (This)->lpVtbl->get_Weight(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_put_Weight(This,value) \
    ( (This)->lpVtbl->put_Weight(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IRegionsOfInterestControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.RegionsOfInterestControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IRegionsOfInterestControl[] = L"Windows.Media.Devices.IRegionsOfInterestControl";
/* [object, uuid("C323F527-AB0B-4558-8B5B-DF5693DB0378"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxRegions )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SetRegionsAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * regions,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SetRegionsWithLockAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * regions,
        /* [in] */boolean lockValues,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *ClearRegionsAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoFocusSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoWhiteBalanceSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoExposureSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_get_MaxRegions(This,value) \
    ( (This)->lpVtbl->get_MaxRegions(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_SetRegionsAsync(This,regions,asyncInfo) \
    ( (This)->lpVtbl->SetRegionsAsync(This,regions,asyncInfo) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_SetRegionsWithLockAsync(This,regions,lockValues,asyncInfo) \
    ( (This)->lpVtbl->SetRegionsWithLockAsync(This,regions,lockValues,asyncInfo) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_ClearRegionsAsync(This,asyncInfo) \
    ( (This)->lpVtbl->ClearRegionsAsync(This,asyncInfo) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_get_AutoFocusSupported(This,value) \
    ( (This)->lpVtbl->get_AutoFocusSupported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_get_AutoWhiteBalanceSupported(This,value) \
    ( (This)->lpVtbl->get_AutoWhiteBalanceSupported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_get_AutoExposureSupported(This,value) \
    ( (This)->lpVtbl->get_AutoExposureSupported(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.ISceneModeControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.SceneModeControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_ISceneModeControl[] = L"Windows.Media.Devices.ISceneModeControl";
/* [object, uuid("D48E5AF7-8D59-4854-8C62-12C70BA89B7C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CISceneModeControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedModes )(
        __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetValueAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * This,
        /* [in] */__x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode sceneMode,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CISceneModeControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CISceneModeControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_get_SupportedModes(This,value) \
    ( (This)->lpVtbl->get_SupportedModes(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_SetValueAsync(This,sceneMode,asyncInfo) \
    ( (This)->lpVtbl->SetValueAsync(This,sceneMode,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CISceneModeControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CISceneModeControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.ITorchControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.TorchControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CITorchControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CITorchControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_ITorchControl[] = L"Windows.Media.Devices.ITorchControl";
/* [object, uuid("A6053665-8250-416C-919A-724296AFA306"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CITorchControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PowerSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
        __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PowerPercent )(
        __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PowerPercent )(
        __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
        /* [in] */FLOAT value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CITorchControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CITorchControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CITorchControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CITorchControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CITorchControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CITorchControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CITorchControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CITorchControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CITorchControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CITorchControl_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CITorchControl_get_PowerSupported(This,value) \
    ( (This)->lpVtbl->get_PowerSupported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CITorchControl_get_Enabled(This,value) \
    ( (This)->lpVtbl->get_Enabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CITorchControl_put_Enabled(This,value) \
    ( (This)->lpVtbl->put_Enabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CITorchControl_get_PowerPercent(This,value) \
    ( (This)->lpVtbl->get_PowerPercent(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CITorchControl_put_PowerPercent(This,value) \
    ( (This)->lpVtbl->put_PowerPercent(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CITorchControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CITorchControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IVideoDeviceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.VideoDeviceController
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Devices.IMediaDeviceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IVideoDeviceController[] = L"Windows.Media.Devices.IVideoDeviceController";
/* [object, uuid("99555575-2E2E-40B8-B6C7-F82D10013210"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Brightness )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contrast )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Hue )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WhiteBalance )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BacklightCompensation )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pan )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Tilt )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Zoom )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Roll )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Exposure )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Focus )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetPowerlineFrequency )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
        /* [in] */__x_ABI_CWindows_CMedia_CCapture_CPowerlineFrequency value,
        /* [retval, out] */__RPC__out boolean * succeeded
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetPowerlineFrequency )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
        /* [out] */__RPC__out __x_ABI_CWindows_CMedia_CCapture_CPowerlineFrequency * value,
        /* [retval, out] */__RPC__out boolean * succeeded
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_get_Brightness(This,value) \
    ( (This)->lpVtbl->get_Brightness(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_get_Contrast(This,value) \
    ( (This)->lpVtbl->get_Contrast(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_get_Hue(This,value) \
    ( (This)->lpVtbl->get_Hue(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_get_WhiteBalance(This,value) \
    ( (This)->lpVtbl->get_WhiteBalance(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_get_BacklightCompensation(This,value) \
    ( (This)->lpVtbl->get_BacklightCompensation(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_get_Pan(This,value) \
    ( (This)->lpVtbl->get_Pan(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_get_Tilt(This,value) \
    ( (This)->lpVtbl->get_Tilt(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_get_Zoom(This,value) \
    ( (This)->lpVtbl->get_Zoom(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_get_Roll(This,value) \
    ( (This)->lpVtbl->get_Roll(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_get_Exposure(This,value) \
    ( (This)->lpVtbl->get_Exposure(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_get_Focus(This,value) \
    ( (This)->lpVtbl->get_Focus(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_TrySetPowerlineFrequency(This,value,succeeded) \
    ( (This)->lpVtbl->TrySetPowerlineFrequency(This,value,succeeded) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_TryGetPowerlineFrequency(This,value,succeeded) \
    ( (This)->lpVtbl->TryGetPowerlineFrequency(This,value,succeeded) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IVideoDeviceControllerGetDevicePropertyResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.VideoDeviceControllerGetDevicePropertyResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IVideoDeviceControllerGetDevicePropertyResult[] = L"Windows.Media.Devices.IVideoDeviceControllerGetDevicePropertyResult";
/* [object, uuid("C5D88395-6ED5-4790-8B5D-0EF13935D0F8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CVideoDeviceControllerGetDevicePropertyStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResultVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Devices.IWhiteBalanceControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.WhiteBalanceControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IWhiteBalanceControl[] = L"Windows.Media.Devices.IWhiteBalanceControl";
/* [object, uuid("781F047E-7162-49C8-A8F9-9481C565363E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Preset )(
        __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CColorTemperaturePreset * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPresetAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
        /* [in] */__x_ABI_CWindows_CMedia_CDevices_CColorTemperaturePreset preset,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetValueAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
        /* [in] */UINT32 temperature,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_get_Preset(This,value) \
    ( (This)->lpVtbl->get_Preset(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_SetPresetAsync(This,preset,asyncInfo) \
    ( (This)->lpVtbl->SetPresetAsync(This,preset,asyncInfo) )

#define __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_get_Min(This,value) \
    ( (This)->lpVtbl->get_Min(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_get_Max(This,value) \
    ( (This)->lpVtbl->get_Max(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_get_Step(This,value) \
    ( (This)->lpVtbl->get_Step(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_SetValueAsync(This,temperature,asyncInfo) \
    ( (This)->lpVtbl->SetValueAsync(This,temperature,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IZoomControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.ZoomControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIZoomControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIZoomControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IZoomControl[] = L"Windows.Media.Devices.IZoomControl";
/* [object, uuid("3A1E0B12-32DA-4C17-BFD7-8D0C73C8F5A5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIZoomControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
        /* [in] */FLOAT value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIZoomControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIZoomControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIZoomControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl_get_Min(This,value) \
    ( (This)->lpVtbl->get_Min(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl_get_Max(This,value) \
    ( (This)->lpVtbl->get_Max(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl_get_Step(This,value) \
    ( (This)->lpVtbl->get_Step(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIZoomControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIZoomControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IZoomControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.ZoomControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IZoomControl2[] = L"Windows.Media.Devices.IZoomControl2";
/* [object, uuid("69843DB0-2E99-4641-8529-184F319D1671"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedModes )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *Configure )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * settings
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2Vtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_get_SupportedModes(This,value) \
    ( (This)->lpVtbl->get_SupportedModes(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_Configure(This,settings) \
    ( (This)->lpVtbl->Configure(This,settings) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIZoomControl2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIZoomControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.IZoomSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.ZoomSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IZoomSettings[] = L"Windows.Media.Devices.IZoomSettings";
/* [object, uuid("6AD66B24-14B4-4BFD-B18F-88FE24463B52"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIZoomSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This,
        /* [in] */__x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This,
        /* [in] */FLOAT value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CIZoomSettingsVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIZoomSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_put_Mode(This,value) \
    ( (This)->lpVtbl->put_Mode(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIZoomSettings;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CIZoomSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.AdvancedPhotoCaptureSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IAdvancedPhotoCaptureSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_AdvancedPhotoCaptureSettings_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_AdvancedPhotoCaptureSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_AdvancedPhotoCaptureSettings[] = L"Windows.Media.Devices.AdvancedPhotoCaptureSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.AdvancedPhotoControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IAdvancedPhotoControl ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_AdvancedPhotoControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_AdvancedPhotoControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_AdvancedPhotoControl[] = L"Windows.Media.Devices.AdvancedPhotoControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.AudioDeviceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IAudioDeviceController ** Default Interface **
 *    Windows.Media.Devices.IMediaDeviceController
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_AudioDeviceController_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_AudioDeviceController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_AudioDeviceController[] = L"Windows.Media.Devices.AudioDeviceController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.AudioDeviceModule
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IAudioDeviceModule ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Devices_AudioDeviceModule_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_AudioDeviceModule_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_AudioDeviceModule[] = L"Windows.Media.Devices.AudioDeviceModule";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Devices.AudioDeviceModuleNotificationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IAudioDeviceModuleNotificationEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Devices_AudioDeviceModuleNotificationEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_AudioDeviceModuleNotificationEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_AudioDeviceModuleNotificationEventArgs[] = L"Windows.Media.Devices.AudioDeviceModuleNotificationEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Devices.AudioDeviceModulesManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Devices.IAudioDeviceModulesManagerFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IAudioDeviceModulesManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Devices_AudioDeviceModulesManager_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_AudioDeviceModulesManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_AudioDeviceModulesManager[] = L"Windows.Media.Devices.AudioDeviceModulesManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Devices.CallControl
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Devices.ICallControlStatics interface starting with version 1.0 of the Windows.Media.Devices.CallControlContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.ICallControl ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_CallControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_CallControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_CallControl[] = L"Windows.Media.Devices.CallControl";
#endif
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.DefaultAudioCaptureDeviceChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IDefaultAudioDeviceChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_DefaultAudioCaptureDeviceChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_DefaultAudioCaptureDeviceChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_DefaultAudioCaptureDeviceChangedEventArgs[] = L"Windows.Media.Devices.DefaultAudioCaptureDeviceChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.DefaultAudioRenderDeviceChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IDefaultAudioDeviceChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_DefaultAudioRenderDeviceChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_DefaultAudioRenderDeviceChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_DefaultAudioRenderDeviceChangedEventArgs[] = L"Windows.Media.Devices.DefaultAudioRenderDeviceChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.DialRequestedEventArgs
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IDialRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_DialRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_DialRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_DialRequestedEventArgs[] = L"Windows.Media.Devices.DialRequestedEventArgs";
#endif
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.ExposureCompensationControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IExposureCompensationControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_ExposureCompensationControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_ExposureCompensationControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_ExposureCompensationControl[] = L"Windows.Media.Devices.ExposureCompensationControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.ExposureControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IExposureControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_ExposureControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_ExposureControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_ExposureControl[] = L"Windows.Media.Devices.ExposureControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.ExposurePriorityVideoControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IExposurePriorityVideoControl ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_ExposurePriorityVideoControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_ExposurePriorityVideoControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_ExposurePriorityVideoControl[] = L"Windows.Media.Devices.ExposurePriorityVideoControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.FlashControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IFlashControl ** Default Interface **
 *    Windows.Media.Devices.IFlashControl2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_FlashControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_FlashControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_FlashControl[] = L"Windows.Media.Devices.FlashControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.FocusControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IFocusControl ** Default Interface **
 *    Windows.Media.Devices.IFocusControl2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_FocusControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_FocusControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_FocusControl[] = L"Windows.Media.Devices.FocusControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.FocusSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IFocusSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_FocusSettings_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_FocusSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_FocusSettings[] = L"Windows.Media.Devices.FocusSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.HdrVideoControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IHdrVideoControl ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_HdrVideoControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_HdrVideoControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_HdrVideoControl[] = L"Windows.Media.Devices.HdrVideoControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.IsoSpeedControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IIsoSpeedControl ** Default Interface **
 *    Windows.Media.Devices.IIsoSpeedControl2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_IsoSpeedControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_IsoSpeedControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_IsoSpeedControl[] = L"Windows.Media.Devices.IsoSpeedControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.KeypadPressedEventArgs
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IKeypadPressedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_KeypadPressedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_KeypadPressedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_KeypadPressedEventArgs[] = L"Windows.Media.Devices.KeypadPressedEventArgs";
#endif
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.LowLagPhotoControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.ILowLagPhotoControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_LowLagPhotoControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_LowLagPhotoControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_LowLagPhotoControl[] = L"Windows.Media.Devices.LowLagPhotoControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.LowLagPhotoSequenceControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.ILowLagPhotoSequenceControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_LowLagPhotoSequenceControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_LowLagPhotoSequenceControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_LowLagPhotoSequenceControl[] = L"Windows.Media.Devices.LowLagPhotoSequenceControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.MediaDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Devices.IMediaDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_Devices_MediaDevice_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_MediaDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_MediaDevice[] = L"Windows.Media.Devices.MediaDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.MediaDeviceControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IMediaDeviceControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_MediaDeviceControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_MediaDeviceControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_MediaDeviceControl[] = L"Windows.Media.Devices.MediaDeviceControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.MediaDeviceControlCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IMediaDeviceControlCapabilities ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_MediaDeviceControlCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_MediaDeviceControlCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_MediaDeviceControlCapabilities[] = L"Windows.Media.Devices.MediaDeviceControlCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.ModuleCommandResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IModuleCommandResult ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Devices_ModuleCommandResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_ModuleCommandResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_ModuleCommandResult[] = L"Windows.Media.Devices.ModuleCommandResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Devices.OpticalImageStabilizationControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IOpticalImageStabilizationControl ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_OpticalImageStabilizationControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_OpticalImageStabilizationControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_OpticalImageStabilizationControl[] = L"Windows.Media.Devices.OpticalImageStabilizationControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.PhotoConfirmationControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IPhotoConfirmationControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_PhotoConfirmationControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_PhotoConfirmationControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_PhotoConfirmationControl[] = L"Windows.Media.Devices.PhotoConfirmationControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.RedialRequestedEventArgs
 *
 * Introduced to Windows.Media.Devices.CallControlContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IRedialRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_RedialRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_RedialRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_RedialRequestedEventArgs[] = L"Windows.Media.Devices.RedialRequestedEventArgs";
#endif
#endif // WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.RegionOfInterest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IRegionOfInterest ** Default Interface **
 *    Windows.Media.Devices.IRegionOfInterest2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_RegionOfInterest_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_RegionOfInterest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_RegionOfInterest[] = L"Windows.Media.Devices.RegionOfInterest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.RegionsOfInterestControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IRegionsOfInterestControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_RegionsOfInterestControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_RegionsOfInterestControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_RegionsOfInterestControl[] = L"Windows.Media.Devices.RegionsOfInterestControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.SceneModeControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.ISceneModeControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_SceneModeControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_SceneModeControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_SceneModeControl[] = L"Windows.Media.Devices.SceneModeControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.TorchControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.ITorchControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_TorchControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_TorchControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_TorchControl[] = L"Windows.Media.Devices.TorchControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.VideoDeviceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IVideoDeviceController ** Default Interface **
 *    Windows.Media.Devices.IMediaDeviceController
 *    Windows.Media.Devices.IAdvancedVideoCaptureDeviceController
 *    Windows.Media.Devices.IAdvancedVideoCaptureDeviceController2
 *    Windows.Media.Devices.IAdvancedVideoCaptureDeviceController3
 *    Windows.Media.Devices.IAdvancedVideoCaptureDeviceController4
 *    Windows.Media.Devices.IAdvancedVideoCaptureDeviceController5
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_VideoDeviceController_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_VideoDeviceController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_VideoDeviceController[] = L"Windows.Media.Devices.VideoDeviceController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.VideoDeviceControllerGetDevicePropertyResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IVideoDeviceControllerGetDevicePropertyResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Devices_VideoDeviceControllerGetDevicePropertyResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_VideoDeviceControllerGetDevicePropertyResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_VideoDeviceControllerGetDevicePropertyResult[] = L"Windows.Media.Devices.VideoDeviceControllerGetDevicePropertyResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Devices.WhiteBalanceControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IWhiteBalanceControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_WhiteBalanceControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_WhiteBalanceControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_WhiteBalanceControl[] = L"Windows.Media.Devices.WhiteBalanceControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.ZoomControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IZoomControl ** Default Interface **
 *    Windows.Media.Devices.IZoomControl2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_ZoomControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_ZoomControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_ZoomControl[] = L"Windows.Media.Devices.ZoomControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.ZoomSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.IZoomSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_ZoomSettings_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_ZoomSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_ZoomSettings[] = L"Windows.Media.Devices.ZoomSettings";
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
#endif // __windows2Emedia2Edevices_p_h__

#endif // __windows2Emedia2Edevices_h__
