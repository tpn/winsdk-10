/* Header file automatically generated from windows.media.devices.core.idl */
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
#ifndef __windows2Emedia2Edevices2Ecore_h__
#define __windows2Emedia2Edevices2Ecore_h__
#ifndef __windows2Emedia2Edevices2Ecore_p_h__
#define __windows2Emedia2Edevices2Ecore_p_h__


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
#include "Windows.Foundation.Numerics.h"
#include "Windows.Media.MediaProperties.h"
#include "Windows.Perception.Spatial.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface ICameraIntrinsics;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics ABI::Windows::Media::Devices::Core::ICameraIntrinsics

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface ICameraIntrinsics2;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 ABI::Windows::Media::Devices::Core::ICameraIntrinsics2

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface ICameraIntrinsicsFactory;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory ABI::Windows::Media::Devices::Core::ICameraIntrinsicsFactory

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface IDepthCorrelatedCoordinateMapper;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper ABI::Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface IFrameControlCapabilities;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities ABI::Windows::Media::Devices::Core::IFrameControlCapabilities

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface IFrameControlCapabilities2;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2 ABI::Windows::Media::Devices::Core::IFrameControlCapabilities2

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface IFrameController;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController ABI::Windows::Media::Devices::Core::IFrameController

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface IFrameController2;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2 ABI::Windows::Media::Devices::Core::IFrameController2

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface IFrameExposureCapabilities;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities ABI::Windows::Media::Devices::Core::IFrameExposureCapabilities

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface IFrameExposureCompensationCapabilities;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities ABI::Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface IFrameExposureCompensationControl;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl ABI::Windows::Media::Devices::Core::IFrameExposureCompensationControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface IFrameExposureControl;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl ABI::Windows::Media::Devices::Core::IFrameExposureControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface IFrameFlashCapabilities;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities ABI::Windows::Media::Devices::Core::IFrameFlashCapabilities

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface IFrameFlashControl;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl ABI::Windows::Media::Devices::Core::IFrameFlashControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface IFrameFocusCapabilities;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities ABI::Windows::Media::Devices::Core::IFrameFocusCapabilities

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface IFrameFocusControl;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl ABI::Windows::Media::Devices::Core::IFrameFocusControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface IFrameIsoSpeedCapabilities;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities ABI::Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface IFrameIsoSpeedControl;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl ABI::Windows::Media::Devices::Core::IFrameIsoSpeedControl

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_FWD_DEFINED__

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

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    class FrameController;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_USE
#define DEF___FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1440dc88-63ff-5a01-bb93-390c76742488"))
IIterator<ABI::Windows::Media::Devices::Core::FrameController*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Devices::Core::FrameController*, ABI::Windows::Media::Devices::Core::IFrameController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Devices.Core.FrameController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Devices::Core::FrameController*> __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_t;
#define __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::Core::IFrameController*>
//#define __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Devices::Core::IFrameController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController_USE
#define DEF___FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bd8eeadc-2dd9-5ad8-ac5d-f3b13b94b9c2"))
IIterable<ABI::Windows::Media::Devices::Core::FrameController*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Devices::Core::FrameController*, ABI::Windows::Media::Devices::Core::IFrameController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Devices.Core.FrameController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Devices::Core::FrameController*> __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController_t;
#define __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::Core::IFrameController*>
//#define __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Devices::Core::IFrameController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_USE
#define DEF___FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fcd6a2a3-b6ff-5572-912b-99ebaf95165d"))
IVectorView<ABI::Windows::Media::Devices::Core::FrameController*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Devices::Core::FrameController*, ABI::Windows::Media::Devices::Core::IFrameController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Devices.Core.FrameController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Devices::Core::FrameController*> __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_t;
#define __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::Core::IFrameController*>
//#define __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Devices::Core::IFrameController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_USE
#define DEF___FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1c8f8276-b89a-5093-a1ed-af49dfb72a89"))
IVector<ABI::Windows::Media::Devices::Core::FrameController*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Devices::Core::FrameController*, ABI::Windows::Media::Devices::Core::IFrameController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Media.Devices.Core.FrameController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Media::Devices::Core::FrameController*> __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_t;
#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Devices::Core::IFrameController*>
//#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Devices::Core::IFrameController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIReference_1_boolean_USE
#define DEF___FIReference_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3c00fd60-2950-5939-a21a-2d12c5a01b8a"))
IReference<bool> : IReference_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<bool> __FIReference_1_boolean_t;
#define __FIReference_1_boolean ABI::Windows::Foundation::__FIReference_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_boolean ABI::Windows::Foundation::IReference<boolean>
//#define __FIReference_1_boolean_t ABI::Windows::Foundation::IReference<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_boolean_USE */




#ifndef DEF___FIReference_1_float_USE
#define DEF___FIReference_1_float_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("719cc2ba-3e76-5def-9f1a-38d85a145ea8"))
IReference<float> : IReference_impl<float> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Single>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<float> __FIReference_1_float_t;
#define __FIReference_1_float ABI::Windows::Foundation::__FIReference_1_float_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_float ABI::Windows::Foundation::IReference<FLOAT>
//#define __FIReference_1_float_t ABI::Windows::Foundation::IReference<FLOAT>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_float_USE */



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
            namespace Numerics {
                
                typedef struct Matrix4x4 Matrix4x4;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Vector2 Vector2;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Vector3 Vector3;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Point Point;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




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
        namespace Perception {
            namespace Spatial {
                class SpatialCoordinateSystem;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialCoordinateSystem;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    
                    typedef enum FrameFlashMode : int FrameFlashMode;
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */




















namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    class CameraIntrinsics;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    class DepthCorrelatedCoordinateMapper;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    class FrameControlCapabilities;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    class FrameExposureCapabilities;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    class FrameExposureCompensationCapabilities;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    class FrameExposureCompensationControl;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    class FrameExposureControl;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    class FrameFlashCapabilities;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    class FrameFlashControl;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    class FrameFocusCapabilities;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    class FrameFocusControl;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    class FrameIsoSpeedCapabilities;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    class FrameIsoSpeedControl;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */


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












/*
 *
 * Struct Windows.Media.Devices.Core.FrameFlashMode
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
                namespace Core {
                    /* [v1_enum, contract] */
                    enum FrameFlashMode : int
                    {
                        FrameFlashMode_Disable = 0,
                        FrameFlashMode_Enable = 1,
                        FrameFlashMode_Global = 2,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.ICameraIntrinsics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.CameraIntrinsics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_ICameraIntrinsics[] = L"Windows.Media.Devices.Core.ICameraIntrinsics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("0AA6ED32-6589-49DA-AFDE-594270CA0AAC"), exclusiveto, contract] */
                    MIDL_INTERFACE("0AA6ED32-6589-49DA-AFDE-594270CA0AAC")
                    ICameraIntrinsics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FocalLength(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector2 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PrincipalPoint(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector2 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RadialDistortion(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TangentialDistortion(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector2 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ImageWidth(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ImageHeight(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ProjectOntoFrame(
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector3 coordinate,
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE UnprojectAtUnitDepth(
                            /* [in] */ABI::Windows::Foundation::Point pixelCoordinate,
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector2 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ProjectManyOntoFrame(
                            /* [in] */UINT32 __coordinatesSize,
                            /* [size_is(__coordinatesSize), in] */__RPC__in_ecount_full(__coordinatesSize) ABI::Windows::Foundation::Numerics::Vector3 * coordinates,
                            /* [in] */UINT32 __resultsSize,
                            /* [size_is(__resultsSize), out] */__RPC__out_ecount_full(__resultsSize) ABI::Windows::Foundation::Point * results
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE UnprojectPixelsAtUnitDepth(
                            /* [in] */UINT32 __pixelCoordinatesSize,
                            /* [size_is(__pixelCoordinatesSize), in] */__RPC__in_ecount_full(__pixelCoordinatesSize) ABI::Windows::Foundation::Point * pixelCoordinates,
                            /* [in] */UINT32 __resultsSize,
                            /* [size_is(__resultsSize), out] */__RPC__out_ecount_full(__resultsSize) ABI::Windows::Foundation::Numerics::Vector2 * results
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICameraIntrinsics=_uuidof(ICameraIntrinsics);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.ICameraIntrinsics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.CameraIntrinsics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_ICameraIntrinsics2[] = L"Windows.Media.Devices.Core.ICameraIntrinsics2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("0CDAA447-0798-4B4D-839F-C5EC414DB27A"), exclusiveto, contract] */
                    MIDL_INTERFACE("0CDAA447-0798-4B4D-839F-C5EC414DB27A")
                    ICameraIntrinsics2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UndistortedProjectionTransform(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Matrix4x4 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DistortPoint(
                            /* [in] */ABI::Windows::Foundation::Point input,
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DistortPoints(
                            /* [in] */UINT32 __inputsSize,
                            /* [size_is(__inputsSize), in] */__RPC__in_ecount_full(__inputsSize) ABI::Windows::Foundation::Point * inputs,
                            /* [in] */UINT32 __resultsSize,
                            /* [size_is(__resultsSize), out] */__RPC__out_ecount_full(__resultsSize) ABI::Windows::Foundation::Point * results
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE UndistortPoint(
                            /* [in] */ABI::Windows::Foundation::Point input,
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE UndistortPoints(
                            /* [in] */UINT32 __inputsSize,
                            /* [size_is(__inputsSize), in] */__RPC__in_ecount_full(__inputsSize) ABI::Windows::Foundation::Point * inputs,
                            /* [in] */UINT32 __resultsSize,
                            /* [size_is(__resultsSize), out] */__RPC__out_ecount_full(__resultsSize) ABI::Windows::Foundation::Point * results
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICameraIntrinsics2=_uuidof(ICameraIntrinsics2);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Devices.Core.ICameraIntrinsicsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.CameraIntrinsics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_ICameraIntrinsicsFactory[] = L"Windows.Media.Devices.Core.ICameraIntrinsicsFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("C0DDC486-2132-4A34-A659-9BFE2A055712"), exclusiveto, contract] */
                    MIDL_INTERFACE("C0DDC486-2132-4A34-A659-9BFE2A055712")
                    ICameraIntrinsicsFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector2 focalLength,
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector2 principalPoint,
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector3 radialDistortion,
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector2 tangentialDistortion,
                            /* [in] */UINT32 imageWidth,
                            /* [in] */UINT32 imageHeight,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::Core::ICameraIntrinsics * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICameraIntrinsicsFactory=_uuidof(ICameraIntrinsicsFactory);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IDepthCorrelatedCoordinateMapper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IDepthCorrelatedCoordinateMapper[] = L"Windows.Media.Devices.Core.IDepthCorrelatedCoordinateMapper";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("F95D89FB-8AF0-4CB0-926D-696866E5046A"), exclusiveto, contract] */
                    MIDL_INTERFACE("F95D89FB-8AF0-4CB0-926D-696866E5046A")
                    IDepthCorrelatedCoordinateMapper : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE UnprojectPoint(
                            /* [in] */ABI::Windows::Foundation::Point sourcePoint,
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * targetCoordinateSystem,
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE UnprojectPoints(
                            /* [in] */UINT32 __sourcePointsSize,
                            /* [size_is(__sourcePointsSize), in] */__RPC__in_ecount_full(__sourcePointsSize) ABI::Windows::Foundation::Point * sourcePoints,
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * targetCoordinateSystem,
                            /* [in] */UINT32 __resultsSize,
                            /* [size_is(__resultsSize), out] */__RPC__out_ecount_full(__resultsSize) ABI::Windows::Foundation::Numerics::Vector3 * results
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE MapPoint(
                            /* [in] */ABI::Windows::Foundation::Point sourcePoint,
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * targetCoordinateSystem,
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::Core::ICameraIntrinsics * targetCameraIntrinsics,
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE MapPoints(
                            /* [in] */UINT32 __sourcePointsSize,
                            /* [size_is(__sourcePointsSize), in] */__RPC__in_ecount_full(__sourcePointsSize) ABI::Windows::Foundation::Point * sourcePoints,
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * targetCoordinateSystem,
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::Core::ICameraIntrinsics * targetCameraIntrinsics,
                            /* [in] */UINT32 __resultsSize,
                            /* [size_is(__resultsSize), out] */__RPC__out_ecount_full(__resultsSize) ABI::Windows::Foundation::Point * results
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDepthCorrelatedCoordinateMapper=_uuidof(IDepthCorrelatedCoordinateMapper);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameControlCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameControlCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameControlCapabilities[] = L"Windows.Media.Devices.Core.IFrameControlCapabilities";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("A8FFAE60-4E9E-4377-A789-E24C4AE7E544"), exclusiveto, contract] */
                    MIDL_INTERFACE("A8FFAE60-4E9E-4377-A789-E24C4AE7E544")
                    IFrameControlCapabilities : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Exposure(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::Core::IFrameExposureCapabilities * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExposureCompensation(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsoSpeed(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Focus(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::Core::IFrameFocusCapabilities * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhotoConfirmationSupported(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFrameControlCapabilities=_uuidof(IFrameControlCapabilities);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameControlCapabilities2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameControlCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameControlCapabilities2[] = L"Windows.Media.Devices.Core.IFrameControlCapabilities2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("CE9B0464-4730-440F-BD3E-EFE8A8F230A8"), exclusiveto, contract] */
                    MIDL_INTERFACE("CE9B0464-4730-440F-BD3E-EFE8A8F230A8")
                    IFrameControlCapabilities2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Flash(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::Core::IFrameFlashCapabilities * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFrameControlCapabilities2=_uuidof(IFrameControlCapabilities2);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameController[] = L"Windows.Media.Devices.Core.IFrameController";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("C16459D9-BAEF-4052-9177-48AFF2AF7522"), exclusiveto, contract] */
                    MIDL_INTERFACE("C16459D9-BAEF-4052-9177-48AFF2AF7522")
                    IFrameController : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExposureControl(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::Core::IFrameExposureControl * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExposureCompensationControl(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::Core::IFrameExposureCompensationControl * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsoSpeedControl(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::Core::IFrameIsoSpeedControl * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FocusControl(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::Core::IFrameFocusControl * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhotoConfirmationEnabled(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_boolean * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PhotoConfirmationEnabled(
                            /* [in] */__RPC__in_opt __FIReference_1_boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFrameController=_uuidof(IFrameController);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameController2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameController2[] = L"Windows.Media.Devices.Core.IFrameController2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("00D3BC75-D87C-485B-8A09-5C358568B427"), exclusiveto, contract] */
                    MIDL_INTERFACE("00D3BC75-D87C-485B-8A09-5C358568B427")
                    IFrameController2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FlashControl(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::Core::IFrameFlashControl * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFrameController2=_uuidof(IFrameController2);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameExposureCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameExposureCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameExposureCapabilities[] = L"Windows.Media.Devices.Core.IFrameExposureCapabilities";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("BDBE9CE3-3985-4E72-97C2-0590D61307A1"), exclusiveto, contract] */
                    MIDL_INTERFACE("BDBE9CE3-3985-4E72-97C2-0590D61307A1")
                    IFrameExposureCapabilities : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                            /* [retval, out] */__RPC__out boolean * value
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
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFrameExposureCapabilities=_uuidof(IFrameExposureCapabilities);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameExposureCompensationCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameExposureCompensationCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameExposureCompensationCapabilities[] = L"Windows.Media.Devices.Core.IFrameExposureCompensationCapabilities";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("B988A823-8065-41EE-B04F-722265954500"), exclusiveto, contract] */
                    MIDL_INTERFACE("B988A823-8065-41EE-B04F-722265954500")
                    IFrameExposureCompensationCapabilities : IInspectable
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
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFrameExposureCompensationCapabilities=_uuidof(IFrameExposureCompensationCapabilities);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameExposureCompensationControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameExposureCompensationControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameExposureCompensationControl[] = L"Windows.Media.Devices.Core.IFrameExposureCompensationControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("E95896C9-F7F9-48CA-8591-A26531CB1578"), exclusiveto, contract] */
                    MIDL_INTERFACE("E95896C9-F7F9-48CA-8591-A26531CB1578")
                    IFrameExposureCompensationControl : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_float * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                            /* [in] */__RPC__in_opt __FIReference_1_float * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFrameExposureCompensationControl=_uuidof(IFrameExposureCompensationControl);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameExposureControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameExposureControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameExposureControl[] = L"Windows.Media.Devices.Core.IFrameExposureControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("B1605A61-FFAF-4752-B621-F5B6F117F432"), exclusiveto, contract] */
                    MIDL_INTERFACE("B1605A61-FFAF-4752-B621-F5B6F117F432")
                    IFrameExposureControl : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Auto(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Auto(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                            /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFrameExposureControl=_uuidof(IFrameExposureControl);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameFlashCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameFlashCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameFlashCapabilities[] = L"Windows.Media.Devices.Core.IFrameFlashCapabilities";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("BB9341A2-5EBE-4F62-8223-0E2B05BFBBD0"), exclusiveto, contract] */
                    MIDL_INTERFACE("BB9341A2-5EBE-4F62-8223-0E2B05BFBBD0")
                    IFrameFlashCapabilities : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RedEyeReductionSupported(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PowerSupported(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFrameFlashCapabilities=_uuidof(IFrameFlashCapabilities);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameFlashControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameFlashControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameFlashControl[] = L"Windows.Media.Devices.Core.IFrameFlashControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("75D5F6C7-BD45-4FAB-9375-45AC04B332C2"), exclusiveto, contract] */
                    MIDL_INTERFACE("75D5F6C7-BD45-4FAB-9375-45AC04B332C2")
                    IFrameFlashControl : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Devices::Core::FrameFlashMode * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Mode(
                            /* [in] */ABI::Windows::Media::Devices::Core::FrameFlashMode value
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

                    extern MIDL_CONST_ID IID & IID_IFrameFlashControl=_uuidof(IFrameFlashControl);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameFocusCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameFocusCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameFocusCapabilities[] = L"Windows.Media.Devices.Core.IFrameFocusCapabilities";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("7B25CD58-01C0-4065-9C40-C1A721425C1A"), exclusiveto, contract] */
                    MIDL_INTERFACE("7B25CD58-01C0-4065-9C40-C1A721425C1A")
                    IFrameFocusCapabilities : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                            /* [retval, out] */__RPC__out boolean * value
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
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFrameFocusCapabilities=_uuidof(IFrameFocusCapabilities);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameFocusControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameFocusControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameFocusControl[] = L"Windows.Media.Devices.Core.IFrameFocusControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("272DF1D0-D912-4214-A67B-E38A8D48D8C6"), exclusiveto, contract] */
                    MIDL_INTERFACE("272DF1D0-D912-4214-A67B-E38A8D48D8C6")
                    IFrameFocusControl : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                            /* [in] */__RPC__in_opt __FIReference_1_UINT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFrameFocusControl=_uuidof(IFrameFocusControl);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameIsoSpeedCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameIsoSpeedCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameIsoSpeedCapabilities[] = L"Windows.Media.Devices.Core.IFrameIsoSpeedCapabilities";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("16BDFF61-6DF6-4AC9-B92A-9F6ECD1AD2FA"), exclusiveto, contract] */
                    MIDL_INTERFACE("16BDFF61-6DF6-4AC9-B92A-9F6ECD1AD2FA")
                    IFrameIsoSpeedCapabilities : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                            /* [retval, out] */__RPC__out boolean * value
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
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFrameIsoSpeedCapabilities=_uuidof(IFrameIsoSpeedCapabilities);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameIsoSpeedControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameIsoSpeedControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameIsoSpeedControl[] = L"Windows.Media.Devices.Core.IFrameIsoSpeedControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("1A03EFED-786A-4C75-A557-7AB9A85F588C"), exclusiveto, contract] */
                    MIDL_INTERFACE("1A03EFED-786A-4C75-A557-7AB9A85F588C")
                    IFrameIsoSpeedControl : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Auto(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Auto(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                            /* [in] */__RPC__in_opt __FIReference_1_UINT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IFrameIsoSpeedControl=_uuidof(IFrameIsoSpeedControl);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IVariablePhotoSequenceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.VariablePhotoSequenceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IVariablePhotoSequenceController[] = L"Windows.Media.Devices.Core.IVariablePhotoSequenceController";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    /* [object, uuid("7FBFF880-ED8C-43FD-A7C3-B35809E4229A"), exclusiveto, contract] */
                    MIDL_INTERFACE("7FBFF880-ED8C-43FD-A7C3-B35809E4229A")
                    IVariablePhotoSequenceController : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Supported(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxPhotosPerSecond(
                            /* [retval, out] */__RPC__out FLOAT * value
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
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FrameCapabilities(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::Core::IFrameControlCapabilities * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredFrameControllers(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * * items
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IVariablePhotoSequenceController=_uuidof(IVariablePhotoSequenceController);
                    
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.CameraIntrinsics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.ICameraIntrinsics ** Default Interface **
 *    Windows.Media.Devices.Core.ICameraIntrinsics2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_CameraIntrinsics_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_CameraIntrinsics_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_CameraIntrinsics[] = L"Windows.Media.Devices.Core.CameraIntrinsics";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IDepthCorrelatedCoordinateMapper ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_DepthCorrelatedCoordinateMapper_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_DepthCorrelatedCoordinateMapper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_DepthCorrelatedCoordinateMapper[] = L"Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Devices.Core.FrameControlCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameControlCapabilities ** Default Interface **
 *    Windows.Media.Devices.Core.IFrameControlCapabilities2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameControlCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameControlCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameControlCapabilities[] = L"Windows.Media.Devices.Core.FrameControlCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameController ** Default Interface **
 *    Windows.Media.Devices.Core.IFrameController2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameController_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameController[] = L"Windows.Media.Devices.Core.FrameController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameExposureCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameExposureCapabilities ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameExposureCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameExposureCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameExposureCapabilities[] = L"Windows.Media.Devices.Core.FrameExposureCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameExposureCompensationCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameExposureCompensationCapabilities ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameExposureCompensationCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameExposureCompensationCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameExposureCompensationCapabilities[] = L"Windows.Media.Devices.Core.FrameExposureCompensationCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameExposureCompensationControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameExposureCompensationControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameExposureCompensationControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameExposureCompensationControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameExposureCompensationControl[] = L"Windows.Media.Devices.Core.FrameExposureCompensationControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameExposureControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameExposureControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameExposureControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameExposureControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameExposureControl[] = L"Windows.Media.Devices.Core.FrameExposureControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameFlashCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameFlashCapabilities ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameFlashCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameFlashCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameFlashCapabilities[] = L"Windows.Media.Devices.Core.FrameFlashCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameFlashControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameFlashControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameFlashControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameFlashControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameFlashControl[] = L"Windows.Media.Devices.Core.FrameFlashControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameFocusCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameFocusCapabilities ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameFocusCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameFocusCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameFocusCapabilities[] = L"Windows.Media.Devices.Core.FrameFocusCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameFocusControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameFocusControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameFocusControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameFocusControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameFocusControl[] = L"Windows.Media.Devices.Core.FrameFocusControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameIsoSpeedCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameIsoSpeedCapabilities ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameIsoSpeedCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameIsoSpeedCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameIsoSpeedCapabilities[] = L"Windows.Media.Devices.Core.FrameIsoSpeedCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameIsoSpeedControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameIsoSpeedControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameIsoSpeedControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameIsoSpeedControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameIsoSpeedControl[] = L"Windows.Media.Devices.Core.FrameIsoSpeedControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.VariablePhotoSequenceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IVariablePhotoSequenceController ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_VariablePhotoSequenceController_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_VariablePhotoSequenceController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_VariablePhotoSequenceController[] = L"Windows.Media.Devices.Core.VariablePhotoSequenceController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2 __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2 __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController;

typedef struct __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl;

interface __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController;

typedef  struct __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl;

interface __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController;

typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl;

interface __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController;

typedef struct __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This, /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *value);

    END_INTERFACE
} __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl;

interface __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIReference_1_boolean_INTERFACE_DEFINED__)
#define ____FIReference_1_boolean_INTERFACE_DEFINED__

typedef interface __FIReference_1_boolean __FIReference_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_boolean;

typedef struct __FIReference_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_boolean * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_boolean * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_boolean * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_boolean * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_boolean * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_boolean * This, /* [retval][out] */ __RPC__out boolean *value);
    END_INTERFACE
} __FIReference_1_booleanVtbl;

interface __FIReference_1_boolean
{
    CONST_VTBL struct __FIReference_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_boolean_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_boolean_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_boolean_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_boolean_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_boolean_INTERFACE_DEFINED__


#if !defined(____FIReference_1_float_INTERFACE_DEFINED__)
#define ____FIReference_1_float_INTERFACE_DEFINED__

typedef interface __FIReference_1_float __FIReference_1_float;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_float;

typedef struct __FIReference_1_floatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_float * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_float * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_float * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_float * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_float * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_float * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_float * This, /* [retval][out] */ __RPC__out float *value);
    END_INTERFACE
} __FIReference_1_floatVtbl;

interface __FIReference_1_float
{
    CONST_VTBL struct __FIReference_1_floatVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_float_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_float_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_float_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_float_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_float_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_float_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_float_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_float_INTERFACE_DEFINED__


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



#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__





typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;





typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CMedia_CDevices_CCore_CFrameFlashMode __x_ABI_CWindows_CMedia_CDevices_CCore_CFrameFlashMode;













































/*
 *
 * Struct Windows.Media.Devices.Core.FrameFlashMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CDevices_CCore_CFrameFlashMode
{
    FrameFlashMode_Disable = 0,
    FrameFlashMode_Enable = 1,
    FrameFlashMode_Global = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.ICameraIntrinsics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.CameraIntrinsics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_ICameraIntrinsics[] = L"Windows.Media.Devices.Core.ICameraIntrinsics";
/* [object, uuid("0AA6ED32-6589-49DA-AFDE-594270CA0AAC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FocalLength )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PrincipalPoint )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RadialDistortion )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TangentialDistortion )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ImageWidth )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ImageHeight )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *ProjectOntoFrame )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 coordinate,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    HRESULT ( STDMETHODCALLTYPE *UnprojectAtUnitDepth )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint pixelCoordinate,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * result
        );
    HRESULT ( STDMETHODCALLTYPE *ProjectManyOntoFrame )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
        /* [in] */UINT32 __coordinatesSize,
        /* [size_is(__coordinatesSize), in] */__RPC__in_ecount_full(__coordinatesSize) __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * coordinates,
        /* [in] */UINT32 __resultsSize,
        /* [size_is(__resultsSize), out] */__RPC__out_ecount_full(__resultsSize) __x_ABI_CWindows_CFoundation_CPoint * results
        );
    HRESULT ( STDMETHODCALLTYPE *UnprojectPixelsAtUnitDepth )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
        /* [in] */UINT32 __pixelCoordinatesSize,
        /* [size_is(__pixelCoordinatesSize), in] */__RPC__in_ecount_full(__pixelCoordinatesSize) __x_ABI_CWindows_CFoundation_CPoint * pixelCoordinates,
        /* [in] */UINT32 __resultsSize,
        /* [size_is(__resultsSize), out] */__RPC__out_ecount_full(__resultsSize) __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * results
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_get_FocalLength(This,value) \
    ( (This)->lpVtbl->get_FocalLength(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_get_PrincipalPoint(This,value) \
    ( (This)->lpVtbl->get_PrincipalPoint(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_get_RadialDistortion(This,value) \
    ( (This)->lpVtbl->get_RadialDistortion(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_get_TangentialDistortion(This,value) \
    ( (This)->lpVtbl->get_TangentialDistortion(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_get_ImageWidth(This,value) \
    ( (This)->lpVtbl->get_ImageWidth(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_get_ImageHeight(This,value) \
    ( (This)->lpVtbl->get_ImageHeight(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_ProjectOntoFrame(This,coordinate,result) \
    ( (This)->lpVtbl->ProjectOntoFrame(This,coordinate,result) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_UnprojectAtUnitDepth(This,pixelCoordinate,result) \
    ( (This)->lpVtbl->UnprojectAtUnitDepth(This,pixelCoordinate,result) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_ProjectManyOntoFrame(This,__coordinatesSize,coordinates,__resultsSize,results) \
    ( (This)->lpVtbl->ProjectManyOntoFrame(This,__coordinatesSize,coordinates,__resultsSize,results) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_UnprojectPixelsAtUnitDepth(This,__pixelCoordinatesSize,pixelCoordinates,__resultsSize,results) \
    ( (This)->lpVtbl->UnprojectPixelsAtUnitDepth(This,__pixelCoordinatesSize,pixelCoordinates,__resultsSize,results) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.ICameraIntrinsics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.CameraIntrinsics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_ICameraIntrinsics2[] = L"Windows.Media.Devices.Core.ICameraIntrinsics2";
/* [object, uuid("0CDAA447-0798-4B4D-839F-C5EC414DB27A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UndistortedProjectionTransform )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 * value
        );
    HRESULT ( STDMETHODCALLTYPE *DistortPoint )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint input,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    HRESULT ( STDMETHODCALLTYPE *DistortPoints )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This,
        /* [in] */UINT32 __inputsSize,
        /* [size_is(__inputsSize), in] */__RPC__in_ecount_full(__inputsSize) __x_ABI_CWindows_CFoundation_CPoint * inputs,
        /* [in] */UINT32 __resultsSize,
        /* [size_is(__resultsSize), out] */__RPC__out_ecount_full(__resultsSize) __x_ABI_CWindows_CFoundation_CPoint * results
        );
    HRESULT ( STDMETHODCALLTYPE *UndistortPoint )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint input,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    HRESULT ( STDMETHODCALLTYPE *UndistortPoints )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This,
        /* [in] */UINT32 __inputsSize,
        /* [size_is(__inputsSize), in] */__RPC__in_ecount_full(__inputsSize) __x_ABI_CWindows_CFoundation_CPoint * inputs,
        /* [in] */UINT32 __resultsSize,
        /* [size_is(__resultsSize), out] */__RPC__out_ecount_full(__resultsSize) __x_ABI_CWindows_CFoundation_CPoint * results
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2Vtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_get_UndistortedProjectionTransform(This,value) \
    ( (This)->lpVtbl->get_UndistortedProjectionTransform(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_DistortPoint(This,input,result) \
    ( (This)->lpVtbl->DistortPoint(This,input,result) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_DistortPoints(This,__inputsSize,inputs,__resultsSize,results) \
    ( (This)->lpVtbl->DistortPoints(This,__inputsSize,inputs,__resultsSize,results) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_UndistortPoint(This,input,result) \
    ( (This)->lpVtbl->UndistortPoint(This,input,result) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_UndistortPoints(This,__inputsSize,inputs,__resultsSize,results) \
    ( (This)->lpVtbl->UndistortPoints(This,__inputsSize,inputs,__resultsSize,results) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Devices.Core.ICameraIntrinsicsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.CameraIntrinsics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_ICameraIntrinsicsFactory[] = L"Windows.Media.Devices.Core.ICameraIntrinsicsFactory";
/* [object, uuid("C0DDC486-2132-4A34-A659-9BFE2A055712"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 focalLength,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 principalPoint,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 radialDistortion,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 tangentialDistortion,
        /* [in] */UINT32 imageWidth,
        /* [in] */UINT32 imageHeight,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_Create(This,focalLength,principalPoint,radialDistortion,tangentialDistortion,imageWidth,imageHeight,result) \
    ( (This)->lpVtbl->Create(This,focalLength,principalPoint,radialDistortion,tangentialDistortion,imageWidth,imageHeight,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IDepthCorrelatedCoordinateMapper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IDepthCorrelatedCoordinateMapper[] = L"Windows.Media.Devices.Core.IDepthCorrelatedCoordinateMapper";
/* [object, uuid("F95D89FB-8AF0-4CB0-926D-696866E5046A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *UnprojectPoint )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint sourcePoint,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * targetCoordinateSystem,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * result
        );
    HRESULT ( STDMETHODCALLTYPE *UnprojectPoints )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This,
        /* [in] */UINT32 __sourcePointsSize,
        /* [size_is(__sourcePointsSize), in] */__RPC__in_ecount_full(__sourcePointsSize) __x_ABI_CWindows_CFoundation_CPoint * sourcePoints,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * targetCoordinateSystem,
        /* [in] */UINT32 __resultsSize,
        /* [size_is(__resultsSize), out] */__RPC__out_ecount_full(__resultsSize) __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * results
        );
    HRESULT ( STDMETHODCALLTYPE *MapPoint )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint sourcePoint,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * targetCoordinateSystem,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * targetCameraIntrinsics,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    HRESULT ( STDMETHODCALLTYPE *MapPoints )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This,
        /* [in] */UINT32 __sourcePointsSize,
        /* [size_is(__sourcePointsSize), in] */__RPC__in_ecount_full(__sourcePointsSize) __x_ABI_CWindows_CFoundation_CPoint * sourcePoints,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * targetCoordinateSystem,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * targetCameraIntrinsics,
        /* [in] */UINT32 __resultsSize,
        /* [size_is(__resultsSize), out] */__RPC__out_ecount_full(__resultsSize) __x_ABI_CWindows_CFoundation_CPoint * results
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapperVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapperVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_UnprojectPoint(This,sourcePoint,targetCoordinateSystem,result) \
    ( (This)->lpVtbl->UnprojectPoint(This,sourcePoint,targetCoordinateSystem,result) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_UnprojectPoints(This,__sourcePointsSize,sourcePoints,targetCoordinateSystem,__resultsSize,results) \
    ( (This)->lpVtbl->UnprojectPoints(This,__sourcePointsSize,sourcePoints,targetCoordinateSystem,__resultsSize,results) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_MapPoint(This,sourcePoint,targetCoordinateSystem,targetCameraIntrinsics,result) \
    ( (This)->lpVtbl->MapPoint(This,sourcePoint,targetCoordinateSystem,targetCameraIntrinsics,result) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_MapPoints(This,__sourcePointsSize,sourcePoints,targetCoordinateSystem,targetCameraIntrinsics,__resultsSize,results) \
    ( (This)->lpVtbl->MapPoints(This,__sourcePointsSize,sourcePoints,targetCoordinateSystem,targetCameraIntrinsics,__resultsSize,results) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameControlCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameControlCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameControlCapabilities[] = L"Windows.Media.Devices.Core.IFrameControlCapabilities";
/* [object, uuid("A8FFAE60-4E9E-4377-A789-E24C4AE7E544"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Exposure )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExposureCompensation )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsoSpeed )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Focus )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhotoConfirmationSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilitiesVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilitiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_get_Exposure(This,value) \
    ( (This)->lpVtbl->get_Exposure(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_get_ExposureCompensation(This,value) \
    ( (This)->lpVtbl->get_ExposureCompensation(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_get_IsoSpeed(This,value) \
    ( (This)->lpVtbl->get_IsoSpeed(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_get_Focus(This,value) \
    ( (This)->lpVtbl->get_Focus(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_get_PhotoConfirmationSupported(This,value) \
    ( (This)->lpVtbl->get_PhotoConfirmationSupported(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameControlCapabilities2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameControlCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameControlCapabilities2[] = L"Windows.Media.Devices.Core.IFrameControlCapabilities2";
/* [object, uuid("CE9B0464-4730-440F-BD3E-EFE8A8F230A8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Flash )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2Vtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_get_Flash(This,value) \
    ( (This)->lpVtbl->get_Flash(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameController[] = L"Windows.Media.Devices.Core.IFrameController";
/* [object, uuid("C16459D9-BAEF-4052-9177-48AFF2AF7522"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExposureControl )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExposureCompensationControl )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsoSpeedControl )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FocusControl )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhotoConfirmationEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_boolean * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PhotoConfirmationEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
        /* [in] */__RPC__in_opt __FIReference_1_boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControllerVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_get_ExposureControl(This,value) \
    ( (This)->lpVtbl->get_ExposureControl(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_get_ExposureCompensationControl(This,value) \
    ( (This)->lpVtbl->get_ExposureCompensationControl(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_get_IsoSpeedControl(This,value) \
    ( (This)->lpVtbl->get_IsoSpeedControl(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_get_FocusControl(This,value) \
    ( (This)->lpVtbl->get_FocusControl(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_get_PhotoConfirmationEnabled(This,value) \
    ( (This)->lpVtbl->get_PhotoConfirmationEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_put_PhotoConfirmationEnabled(This,value) \
    ( (This)->lpVtbl->put_PhotoConfirmationEnabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameController2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameController2[] = L"Windows.Media.Devices.Core.IFrameController2";
/* [object, uuid("00D3BC75-D87C-485B-8A09-5C358568B427"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FlashControl )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2Vtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_get_FlashControl(This,value) \
    ( (This)->lpVtbl->get_FlashControl(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameExposureCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameExposureCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameExposureCapabilities[] = L"Windows.Media.Devices.Core.IFrameExposureCapabilities";
/* [object, uuid("BDBE9CE3-3985-4E72-97C2-0590D61307A1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilitiesVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilitiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_get_Min(This,value) \
    ( (This)->lpVtbl->get_Min(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_get_Max(This,value) \
    ( (This)->lpVtbl->get_Max(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_get_Step(This,value) \
    ( (This)->lpVtbl->get_Step(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameExposureCompensationCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameExposureCompensationCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameExposureCompensationCapabilities[] = L"Windows.Media.Devices.Core.IFrameExposureCompensationCapabilities";
/* [object, uuid("B988A823-8065-41EE-B04F-722265954500"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilitiesVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilitiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_get_Min(This,value) \
    ( (This)->lpVtbl->get_Min(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_get_Max(This,value) \
    ( (This)->lpVtbl->get_Max(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_get_Step(This,value) \
    ( (This)->lpVtbl->get_Step(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameExposureCompensationControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameExposureCompensationControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameExposureCompensationControl[] = L"Windows.Media.Devices.Core.IFrameExposureCompensationControl";
/* [object, uuid("E95896C9-F7F9-48CA-8591-A26531CB1578"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_float * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl * This,
        /* [in] */__RPC__in_opt __FIReference_1_float * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameExposureControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameExposureControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameExposureControl[] = L"Windows.Media.Devices.Core.IFrameExposureControl";
/* [object, uuid("B1605A61-FFAF-4752-B621-F5B6F117F432"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_get_Auto(This,value) \
    ( (This)->lpVtbl->get_Auto(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_put_Auto(This,value) \
    ( (This)->lpVtbl->put_Auto(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameFlashCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameFlashCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameFlashCapabilities[] = L"Windows.Media.Devices.Core.IFrameFlashCapabilities";
/* [object, uuid("BB9341A2-5EBE-4F62-8223-0E2B05BFBBD0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RedEyeReductionSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PowerSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilitiesVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilitiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_get_RedEyeReductionSupported(This,value) \
    ( (This)->lpVtbl->get_RedEyeReductionSupported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_get_PowerSupported(This,value) \
    ( (This)->lpVtbl->get_PowerSupported(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameFlashControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameFlashControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameFlashControl[] = L"Windows.Media.Devices.Core.IFrameFlashControl";
/* [object, uuid("75D5F6C7-BD45-4FAB-9375-45AC04B332C2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CDevices_CCore_CFrameFlashMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
        /* [in] */__x_ABI_CWindows_CMedia_CDevices_CCore_CFrameFlashMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RedEyeReduction )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RedEyeReduction )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PowerPercent )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PowerPercent )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
        /* [in] */FLOAT value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_put_Mode(This,value) \
    ( (This)->lpVtbl->put_Mode(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_get_Auto(This,value) \
    ( (This)->lpVtbl->get_Auto(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_put_Auto(This,value) \
    ( (This)->lpVtbl->put_Auto(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_get_RedEyeReduction(This,value) \
    ( (This)->lpVtbl->get_RedEyeReduction(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_put_RedEyeReduction(This,value) \
    ( (This)->lpVtbl->put_RedEyeReduction(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_get_PowerPercent(This,value) \
    ( (This)->lpVtbl->get_PowerPercent(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_put_PowerPercent(This,value) \
    ( (This)->lpVtbl->put_PowerPercent(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameFocusCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameFocusCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameFocusCapabilities[] = L"Windows.Media.Devices.Core.IFrameFocusCapabilities";
/* [object, uuid("7B25CD58-01C0-4065-9C40-C1A721425C1A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilitiesVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilitiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_get_Min(This,value) \
    ( (This)->lpVtbl->get_Min(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_get_Max(This,value) \
    ( (This)->lpVtbl->get_Max(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_get_Step(This,value) \
    ( (This)->lpVtbl->get_Step(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameFocusControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameFocusControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameFocusControl[] = L"Windows.Media.Devices.Core.IFrameFocusControl";
/* [object, uuid("272DF1D0-D912-4214-A67B-E38A8D48D8C6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl * This,
        /* [in] */__RPC__in_opt __FIReference_1_UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameIsoSpeedCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameIsoSpeedCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameIsoSpeedCapabilities[] = L"Windows.Media.Devices.Core.IFrameIsoSpeedCapabilities";
/* [object, uuid("16BDFF61-6DF6-4AC9-B92A-9F6ECD1AD2FA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilitiesVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilitiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_get_Min(This,value) \
    ( (This)->lpVtbl->get_Min(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_get_Max(This,value) \
    ( (This)->lpVtbl->get_Max(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_get_Step(This,value) \
    ( (This)->lpVtbl->get_Step(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IFrameIsoSpeedControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.FrameIsoSpeedControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameIsoSpeedControl[] = L"Windows.Media.Devices.Core.IFrameIsoSpeedControl";
/* [object, uuid("1A03EFED-786A-4C75-A557-7AB9A85F588C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This,
        /* [in] */__RPC__in_opt __FIReference_1_UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControlVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_get_Auto(This,value) \
    ( (This)->lpVtbl->get_Auto(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_put_Auto(This,value) \
    ( (This)->lpVtbl->put_Auto(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Devices.Core.IVariablePhotoSequenceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Devices.Core.VariablePhotoSequenceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IVariablePhotoSequenceController[] = L"Windows.Media.Devices.Core.IVariablePhotoSequenceController";
/* [object, uuid("7FBFF880-ED8C-43FD-A7C3-B35809E4229A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxPhotosPerSecond )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhotosPerSecondLimit )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PhotosPerSecondLimit )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
        /* [in] */FLOAT value
        );
    HRESULT ( STDMETHODCALLTYPE *GetHighestConcurrentFrameRate )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * captureProperties,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentFrameRate )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FrameCapabilities )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredFrameControllers )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * * items
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceControllerVtbl;

interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_get_Supported(This,value) \
    ( (This)->lpVtbl->get_Supported(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_get_MaxPhotosPerSecond(This,value) \
    ( (This)->lpVtbl->get_MaxPhotosPerSecond(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_get_PhotosPerSecondLimit(This,value) \
    ( (This)->lpVtbl->get_PhotosPerSecondLimit(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_put_PhotosPerSecondLimit(This,value) \
    ( (This)->lpVtbl->put_PhotosPerSecondLimit(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_GetHighestConcurrentFrameRate(This,captureProperties,value) \
    ( (This)->lpVtbl->GetHighestConcurrentFrameRate(This,captureProperties,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_GetCurrentFrameRate(This,value) \
    ( (This)->lpVtbl->GetCurrentFrameRate(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_get_FrameCapabilities(This,value) \
    ( (This)->lpVtbl->get_FrameCapabilities(This,value) )

#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_get_DesiredFrameControllers(This,items) \
    ( (This)->lpVtbl->get_DesiredFrameControllers(This,items) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController;
#endif /* !defined(____x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.CameraIntrinsics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.ICameraIntrinsics ** Default Interface **
 *    Windows.Media.Devices.Core.ICameraIntrinsics2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_CameraIntrinsics_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_CameraIntrinsics_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_CameraIntrinsics[] = L"Windows.Media.Devices.Core.CameraIntrinsics";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IDepthCorrelatedCoordinateMapper ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_DepthCorrelatedCoordinateMapper_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_DepthCorrelatedCoordinateMapper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_DepthCorrelatedCoordinateMapper[] = L"Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Devices.Core.FrameControlCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameControlCapabilities ** Default Interface **
 *    Windows.Media.Devices.Core.IFrameControlCapabilities2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameControlCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameControlCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameControlCapabilities[] = L"Windows.Media.Devices.Core.FrameControlCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameController ** Default Interface **
 *    Windows.Media.Devices.Core.IFrameController2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameController_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameController[] = L"Windows.Media.Devices.Core.FrameController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameExposureCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameExposureCapabilities ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameExposureCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameExposureCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameExposureCapabilities[] = L"Windows.Media.Devices.Core.FrameExposureCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameExposureCompensationCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameExposureCompensationCapabilities ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameExposureCompensationCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameExposureCompensationCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameExposureCompensationCapabilities[] = L"Windows.Media.Devices.Core.FrameExposureCompensationCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameExposureCompensationControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameExposureCompensationControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameExposureCompensationControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameExposureCompensationControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameExposureCompensationControl[] = L"Windows.Media.Devices.Core.FrameExposureCompensationControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameExposureControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameExposureControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameExposureControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameExposureControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameExposureControl[] = L"Windows.Media.Devices.Core.FrameExposureControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameFlashCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameFlashCapabilities ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameFlashCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameFlashCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameFlashCapabilities[] = L"Windows.Media.Devices.Core.FrameFlashCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameFlashControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameFlashControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameFlashControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameFlashControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameFlashControl[] = L"Windows.Media.Devices.Core.FrameFlashControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameFocusCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameFocusCapabilities ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameFocusCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameFocusCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameFocusCapabilities[] = L"Windows.Media.Devices.Core.FrameFocusCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameFocusControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameFocusControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameFocusControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameFocusControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameFocusControl[] = L"Windows.Media.Devices.Core.FrameFocusControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameIsoSpeedCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameIsoSpeedCapabilities ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameIsoSpeedCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameIsoSpeedCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameIsoSpeedCapabilities[] = L"Windows.Media.Devices.Core.FrameIsoSpeedCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.FrameIsoSpeedControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IFrameIsoSpeedControl ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_FrameIsoSpeedControl_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_FrameIsoSpeedControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameIsoSpeedControl[] = L"Windows.Media.Devices.Core.FrameIsoSpeedControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Devices.Core.VariablePhotoSequenceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Devices.Core.IVariablePhotoSequenceController ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Devices_Core_VariablePhotoSequenceController_DEFINED
#define RUNTIMECLASS_Windows_Media_Devices_Core_VariablePhotoSequenceController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_VariablePhotoSequenceController[] = L"Windows.Media.Devices.Core.VariablePhotoSequenceController";
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
#endif // __windows2Emedia2Edevices2Ecore_p_h__

#endif // __windows2Emedia2Edevices2Ecore_h__
